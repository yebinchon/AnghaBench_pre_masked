
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct e1000_tx_desc {TYPE_2__ upper; } ;
struct e1000_ring {unsigned int next_to_clean; unsigned int count; unsigned int next_to_use; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_hw {int dummy; } ;
struct e1000_buffer {unsigned int next_to_watch; scalar_t__ time_stamp; TYPE_1__* skb; scalar_t__ bytecount; scalar_t__ segs; } ;
struct e1000_adapter {int detect_tx_hung; int tx_timeout_factor; int tx_hang_recheck; unsigned int total_tx_bytes; unsigned int total_tx_packets; int print_hang_task; int restart_queue; int state; struct e1000_hw hw; struct net_device* netdev; } ;
struct TYPE_3__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct e1000_tx_desc* FUNC_0 (struct e1000_ring,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct e1000_ring*) ;
 int FUNC_4 (struct e1000_ring*,struct e1000_buffer*,int) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (struct net_device*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_14(struct e1000_ring *VAR_7)
{
 struct e1000_adapter *VAR_8 = VAR_7->adapter;
 struct net_device *VAR_9 = VAR_8->netdev;
 struct e1000_hw *VAR_10 = &VAR_8->hw;
 struct e1000_tx_desc *VAR_11, *VAR_12;
 struct e1000_buffer *VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16 = 0;
 unsigned int VAR_17 = 0, VAR_18 = 0;
 unsigned int VAR_19 = 0, VAR_20 = 0;

 VAR_14 = VAR_7->next_to_clean;
 VAR_15 = VAR_7->buffer_info[VAR_14].next_to_watch;
 VAR_12 = FUNC_0(*VAR_7, VAR_15);

 while ((VAR_12->upper.data & FUNC_1(VAR_1)) &&
        (VAR_16 < VAR_7->count)) {
  bool VAR_21 = 0;

  FUNC_2();
  for (; !VAR_21; VAR_16++) {
   VAR_11 = FUNC_0(*VAR_7, VAR_14);
   VAR_13 = &VAR_7->buffer_info[VAR_14];
   VAR_21 = (VAR_14 == VAR_15);

   if (VAR_21) {
    VAR_18 += VAR_13->segs;
    VAR_17 += VAR_13->bytecount;
    if (VAR_13->skb) {
     VAR_19 += VAR_13->skb->len;
     VAR_20++;
    }
   }

   FUNC_4(VAR_7, VAR_13, 0);
   VAR_11->upper.data = 0;

   VAR_14++;
   if (VAR_14 == VAR_7->count)
    VAR_14 = 0;
  }

  if (VAR_14 == VAR_7->next_to_use)
   break;
  VAR_15 = VAR_7->buffer_info[VAR_14].next_to_watch;
  VAR_12 = FUNC_0(*VAR_7, VAR_15);
 }

 VAR_7->next_to_clean = VAR_14;

 FUNC_6(VAR_9, VAR_20, VAR_19);


 if (VAR_16 && FUNC_7(VAR_9) &&
     FUNC_3(VAR_7) >= 32) {



  FUNC_11();

  if (FUNC_8(VAR_9) &&
      !(FUNC_12(VAR_5, &VAR_8->state))) {
   FUNC_9(VAR_9);
   ++VAR_8->restart_queue;
  }
 }

 if (VAR_8->detect_tx_hung) {



  VAR_8->detect_tx_hung = 0;
  if (VAR_7->buffer_info[VAR_14].time_stamp &&
      FUNC_13(VAR_6, VAR_7->buffer_info[VAR_14].time_stamp
          + (VAR_8->tx_timeout_factor * VAR_2)) &&
      !(FUNC_5(VAR_3) & VAR_0))
   FUNC_10(&VAR_8->print_hang_task);
  else
   VAR_8->tx_hang_recheck = 0;
 }
 VAR_8->total_tx_bytes += VAR_17;
 VAR_8->total_tx_packets += VAR_18;
 return VAR_16 < VAR_7->count;
}
