
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ hlen; int msscof; int ti; int addr; int tci; scalar_t__ om; } ;
union Vmxnet3_GenericDesc {void** dword; TYPE_4__ txd; } ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {int drop_total; int tx_ring_full; int drop_hdr_inspect_err; int drop_oversized_hdr; int linearized; int drop_too_many_frags; int copy_skb_header; int drop_tso; } ;
struct TYPE_12__ {int next2fill; union Vmxnet3_GenericDesc* base; int next2comp; } ;
struct vmxnet3_tx_queue {int qid; TYPE_1__ stats; int tx_lock; TYPE_5__ tx_ring; TYPE_3__* shared; } ;
struct vmxnet3_tx_ctx {int ipv4; int ipv6; int mss; scalar_t__ copy_size; scalar_t__ eth_ip_hdr_size; scalar_t__ l4_hdr_size; union Vmxnet3_GenericDesc* sop_txd; TYPE_2__* eop_txd; } ;
struct vmxnet3_adapter {TYPE_7__* netdev; int pdev; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ csum_offset; int len; } ;
struct net_device {int dummy; } ;
struct Vmxnet3_TxDesc {int dummy; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int gso_size; } ;
struct TYPE_10__ {void* txNumDeferred; void* txThreshold; } ;
struct TYPE_9__ {void** dword; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vmxnet3_adapter*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 (void**,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_7__*,char*,scalar_t__,int ,int,...) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 TYPE_6__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (int) ;
 scalar_t__ FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct Vmxnet3_TxDesc*,struct Vmxnet3_TxDesc*) ;
 scalar_t__ FUNC_24 (TYPE_5__*) ;
 int FUNC_25 (struct sk_buff*,struct vmxnet3_tx_queue*,struct vmxnet3_tx_ctx*,struct vmxnet3_adapter*) ;
 scalar_t__ FUNC_26 (struct sk_buff*,struct vmxnet3_tx_ctx*,struct vmxnet3_tx_queue*,int ,struct vmxnet3_adapter*) ;
 int FUNC_27 (struct sk_buff*,struct vmxnet3_tx_queue*,struct vmxnet3_tx_ctx*,struct vmxnet3_adapter*) ;
 int FUNC_28 (struct sk_buff*,struct vmxnet3_tx_ctx*) ;
 int FUNC_29 (struct vmxnet3_tx_queue*,struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_30(struct sk_buff *VAR_15, struct vmxnet3_tx_queue *VAR_16,
  struct vmxnet3_adapter *VAR_17, struct net_device *VAR_18)
{
 int VAR_19;
 u32 VAR_20;
 int VAR_21;
 int VAR_22;
 unsigned long VAR_23;
 struct vmxnet3_tx_ctx VAR_24;
 union Vmxnet3_GenericDesc *VAR_25;





 VAR_20 = FUNC_20(VAR_15);

 VAR_24.ipv4 = (FUNC_22(VAR_15) == FUNC_3(VAR_1));
 VAR_24.ipv6 = (FUNC_22(VAR_15) == FUNC_3(VAR_2));

 VAR_24.mss = FUNC_15(VAR_15)->gso_size;
 if (VAR_24.mss) {
  if (FUNC_12(VAR_15)) {
   if (FUNC_21(FUNC_11(VAR_15, 0, 0,
            VAR_3) != 0)) {
    VAR_16->stats.drop_tso++;
    goto drop_pkt;
   }
   VAR_16->stats.copy_skb_header++;
  }
  FUNC_28(VAR_15, &VAR_24);
 } else {
  if (FUNC_21(VAR_20 > VAR_7)) {




   if (FUNC_14(VAR_15) != 0) {
    VAR_16->stats.drop_too_many_frags++;
    goto drop_pkt;
   }
   VAR_16->stats.linearized++;


   VAR_20 = FUNC_1(FUNC_13(VAR_15)) + 1;
  }
 }

 VAR_19 = FUNC_27(VAR_15, VAR_16, &VAR_24, VAR_17);
 if (VAR_19 >= 0) {
  FUNC_0(VAR_19 <= 0 && VAR_24.copy_size != 0);

  if (VAR_24.mss) {
   if (FUNC_21(VAR_24.eth_ip_hdr_size + VAR_24.l4_hdr_size >
         VAR_8)) {
    VAR_16->stats.drop_oversized_hdr++;
    goto drop_pkt;
   }
  } else {
   if (VAR_15->ip_summed == VAR_0) {
    if (FUNC_21(VAR_24.eth_ip_hdr_size +
          VAR_15->csum_offset >
          VAR_6)) {
     VAR_16->stats.drop_oversized_hdr++;
     goto drop_pkt;
    }
   }
  }
 } else {
  VAR_16->stats.drop_hdr_inspect_err++;
  goto drop_pkt;
 }

 FUNC_18(&VAR_16->tx_lock, VAR_23);

 if (VAR_20 > FUNC_24(&VAR_16->tx_ring)) {
  VAR_16->stats.tx_ring_full++;
  FUNC_10(VAR_17->netdev,
   "tx queue stopped on %s, next2comp %u"
   " next2fill %u\n", VAR_17->netdev->name,
   VAR_16->tx_ring.next2comp, VAR_16->tx_ring.next2fill);

  FUNC_29(VAR_16, VAR_17);
  FUNC_19(&VAR_16->tx_lock, VAR_23);
  return VAR_4;
 }


 FUNC_25(VAR_15, VAR_16, &VAR_24, VAR_17);


 if (FUNC_26(VAR_15, &VAR_24, VAR_16, VAR_17->pdev, VAR_17))
  goto unlock_drop_pkt;


 VAR_24.eop_txd->dword[3] = FUNC_4(VAR_12 | VAR_13);







 VAR_25 = VAR_24.sop_txd;

 VAR_22 = FUNC_8(VAR_16->shared->txNumDeferred);
 if (VAR_24.mss) {
  VAR_25->txd.hlen = VAR_24.eth_ip_hdr_size + VAR_24.l4_hdr_size;
  VAR_25->txd.om = VAR_10;
  VAR_25->txd.msscof = VAR_24.mss;
  VAR_21 = (VAR_15->len - VAR_25->txd.hlen + VAR_24.mss - 1) / VAR_24.mss;
 } else {
  if (VAR_15->ip_summed == VAR_0) {
   VAR_25->txd.hlen = VAR_24.eth_ip_hdr_size;
   VAR_25->txd.om = VAR_9;
   VAR_25->txd.msscof = VAR_24.eth_ip_hdr_size +
         VAR_15->csum_offset;
  } else {
   VAR_25->txd.om = 0;
   VAR_25->txd.msscof = 0;
  }
  VAR_21 = 1;
 }
 FUNC_7(&VAR_16->shared->txNumDeferred, VAR_21);
 VAR_22 += VAR_21;

 if (FUNC_17(VAR_15)) {
  VAR_25->txd.ti = 1;
  VAR_25->txd.tci = FUNC_16(VAR_15);
 }




 FUNC_6();


 VAR_25->dword[2] = FUNC_4(FUNC_8(VAR_25->dword[2]) ^
        VAR_14);
 FUNC_10(VAR_17->netdev,
  "txd[%u]: SOP 0x%Lx 0x%x 0x%x\n",
  (u32)(VAR_24.sop_txd -
  VAR_16->tx_ring.base), FUNC_9(VAR_25->txd.addr),
  FUNC_8(VAR_25->dword[2]), FUNC_8(VAR_25->dword[3]));

 FUNC_19(&VAR_16->tx_lock, VAR_23);

 if (VAR_22 >= FUNC_8(VAR_16->shared->txThreshold)) {
  VAR_16->shared->txNumDeferred = 0;
  FUNC_2(VAR_17,
           VAR_11 + VAR_16->qid * 8,
           VAR_16->tx_ring.next2fill);
 }

 return VAR_5;

unlock_drop_pkt:
 FUNC_19(&VAR_16->tx_lock, VAR_23);
drop_pkt:
 VAR_16->stats.drop_total++;
 FUNC_5(VAR_15);
 return VAR_5;
}
