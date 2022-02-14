
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int n_bd; size_t read_ptr; int write_ptr; } ;
struct il_tx_queue {TYPE_5__ q; int * skbs; int time_stamp; } ;
struct TYPE_7__ {int * raw; } ;
struct TYPE_6__ {int sequence; } ;
struct il_rx_pkt {TYPE_2__ u; TYPE_1__ hdr; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {scalar_t__ iw_mode; struct il_tx_queue* txq; } ;
struct il3945_tx_resp {int failure_frame; int rate; int status; } ;
struct TYPE_9__ {TYPE_3__* rates; } ;
struct ieee80211_tx_info {scalar_t__ band; int flags; TYPE_4__ status; } ;
struct TYPE_8__ {int idx; int count; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ,int,int ,int) ;
 int FUNC_2 (char*,int) ;
 struct ieee80211_tx_info* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct ieee80211_tx_info*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct il_priv*,int,int) ;
 scalar_t__ FUNC_11 (TYPE_5__*,int) ;
 int FUNC_12 (struct il_priv*,int ) ;
 int VAR_9 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct il_rx_pkt* FUNC_15 (struct il_rx_buf*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void
FUNC_17(struct il_priv *VAR_10, struct il_rx_buf *VAR_11)
{
 struct il_rx_pkt *VAR_12 = FUNC_15(VAR_11);
 u16 VAR_13 = FUNC_13(VAR_12->hdr.sequence);
 int VAR_14 = FUNC_6(VAR_13);
 int VAR_15 = FUNC_5(VAR_13);
 struct il_tx_queue *VAR_16 = &VAR_10->txq[VAR_14];
 struct ieee80211_tx_info *VAR_17;
 struct il3945_tx_resp *VAR_18 = (void *)&VAR_12->u.raw[0];
 u32 VAR_19 = FUNC_14(VAR_18->status);
 int VAR_20;
 int VAR_21;

 if (VAR_15 >= VAR_16->q.n_bd || FUNC_11(&VAR_16->q, VAR_15) == 0) {
  FUNC_4("Read idx for DMA queue txq_id (%d) idx %d "
         "is out of range [0-%d] %d %d\n", VAR_14, VAR_15,
         VAR_16->q.n_bd, VAR_16->q.write_ptr, VAR_16->q.read_ptr);
  return;
 }
 if (FUNC_16((VAR_19 & VAR_7) == VAR_6) &&
     VAR_10->iw_mode == VAR_4) {
  FUNC_12(VAR_10, VAR_2);
  FUNC_0("Stopped queues - RX waiting on passive channel\n");
 }

 VAR_16->time_stamp = VAR_9;
 VAR_17 = FUNC_3(VAR_16->skbs[VAR_16->q.read_ptr]);
 FUNC_7(VAR_17);


 VAR_20 = FUNC_9(VAR_18->rate);
 if (VAR_17->band == VAR_3)
  VAR_20 -= VAR_1;

 VAR_21 = VAR_18->failure_frame;

 VAR_17->status.rates[0].idx = VAR_20;
 VAR_17->status.rates[0].count = VAR_21 + 1;


 VAR_17->flags |=
     ((VAR_19 & VAR_7) ==
      VAR_8) ? VAR_0 : 0;

 FUNC_1("Tx queue %d Status %s (0x%08x) plcp rate %d retries %d\n", VAR_14,
      FUNC_8(VAR_19), VAR_19, VAR_18->rate,
      VAR_18->failure_frame);

 FUNC_2("Tx queue reclaim %d\n", VAR_15);
 FUNC_10(VAR_10, VAR_14, VAR_15);

 if (VAR_19 & VAR_5)
  FUNC_4("TODO:  Implement Tx ABORT REQUIRED!!!\n");
}
