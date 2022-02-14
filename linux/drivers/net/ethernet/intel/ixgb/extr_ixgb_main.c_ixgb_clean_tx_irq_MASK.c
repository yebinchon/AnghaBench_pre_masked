
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ixgb_tx_desc {int status; int popts; } ;
struct ixgb_desc_ring {unsigned int next_to_clean; unsigned int count; struct ixgb_buffer* buffer_info; int next_to_use; } ;
struct ixgb_buffer {unsigned int next_to_watch; scalar_t__ time_stamp; } ;
struct ixgb_adapter {int detect_tx_hung; int hw; struct net_device* netdev; int restart_queue; int flags; int hw_csum_tx_good; struct ixgb_desc_ring tx_ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ixgb_desc_ring*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 struct ixgb_tx_desc* FUNC_2 (struct ixgb_desc_ring,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct ixgb_adapter*,struct ixgb_buffer*) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ixgb_adapter*,int ,struct net_device*,char*,int,int,int ,unsigned int,scalar_t__,unsigned int,int ,int) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static bool
FUNC_14(struct ixgb_adapter *VAR_12)
{
 struct ixgb_desc_ring *VAR_13 = &VAR_12->tx_ring;
 struct net_device *VAR_14 = VAR_12->netdev;
 struct ixgb_tx_desc *VAR_15, *VAR_16;
 struct ixgb_buffer *VAR_17;
 unsigned int VAR_18, VAR_19;
 bool VAR_20 = 0;

 VAR_18 = VAR_13->next_to_clean;
 VAR_19 = VAR_13->buffer_info[VAR_18].next_to_watch;
 VAR_16 = FUNC_2(*VAR_13, VAR_19);

 while (VAR_16->status & VAR_5) {

  FUNC_9();
  for (VAR_20 = 0; !VAR_20; ) {
   VAR_15 = FUNC_2(*VAR_13, VAR_18);
   VAR_17 = &VAR_13->buffer_info[VAR_18];

   if (VAR_15->popts &
      (VAR_4 |
       VAR_3))
    VAR_12->hw_csum_tx_good++;

   FUNC_3(VAR_12, VAR_17);

   *(u32 *)&(VAR_15->status) = 0;

   VAR_20 = (VAR_18 == VAR_19);
   if (++VAR_18 == VAR_13->count) VAR_18 = 0;
  }

  VAR_19 = VAR_13->buffer_info[VAR_18].next_to_watch;
  VAR_16 = FUNC_2(*VAR_13, VAR_19);
 }

 VAR_13->next_to_clean = VAR_18;

 if (FUNC_13(VAR_20 && FUNC_4(VAR_14) &&
       FUNC_0(VAR_13) >= VAR_0)) {


  FUNC_10();

  if (FUNC_6(VAR_14) &&
      !(FUNC_11(VAR_9, &VAR_12->flags))) {
   FUNC_8(VAR_14);
   ++VAR_12->restart_queue;
  }
 }

 if (VAR_12->detect_tx_hung) {


  VAR_12->detect_tx_hung = 0;
  if (VAR_13->buffer_info[VAR_19].time_stamp &&
     FUNC_12(VAR_11, VAR_13->buffer_info[VAR_19].time_stamp + VAR_1)
     && !(FUNC_1(&VAR_12->hw, VAR_6) &
          VAR_2)) {

   FUNC_5(VAR_12, VAR_10, VAR_12->netdev,
      "Detected Tx Unit Hang\n"
      "  TDH                  <%x>\n"
      "  TDT                  <%x>\n"
      "  next_to_use          <%x>\n"
      "  next_to_clean        <%x>\n"
      "buffer_info[next_to_clean]\n"
      "  time_stamp           <%lx>\n"
      "  next_to_watch        <%x>\n"
      "  jiffies              <%lx>\n"
      "  next_to_watch.status <%x>\n",
      FUNC_1(&VAR_12->hw, VAR_7),
      FUNC_1(&VAR_12->hw, VAR_8),
      VAR_13->next_to_use,
      VAR_13->next_to_clean,
      VAR_13->buffer_info[VAR_19].time_stamp,
      VAR_19,
      VAR_11,
      VAR_16->status);
   FUNC_7(VAR_14);
  }
 }

 return VAR_20;
}
