
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int u32 ;
typedef size_t u16 ;
typedef int txreq ;
struct TYPE_21__ {scalar_t__ req_cons; TYPE_9__* sring; } ;
struct xenvif_queue {scalar_t__ remaining_credit; size_t* pending_ring; struct gnttab_map_grant_ref* tx_map_ops; struct gnttab_map_grant_ref* tx_copy_ops; TYPE_16__ tx; int tx_queue; int pending_cons; TYPE_8__* pending_tx_info; TYPE_10__* vif; } ;
struct xen_netif_tx_request {scalar_t__ size; int flags; scalar_t__ offset; int gref; } ;
struct TYPE_23__ {int type; scalar_t__ value; } ;
struct TYPE_22__ {int addr; } ;
struct TYPE_24__ {TYPE_2__ hash; TYPE_1__ mcast; } ;
struct xen_netif_extra_info {TYPE_3__ u; scalar_t__ type; } ;
struct sk_buff {int data; } ;
struct TYPE_27__ {int gmfn; } ;
struct TYPE_28__ {int offset; int domid; TYPE_6__ u; } ;
struct TYPE_25__ {int ref; } ;
struct TYPE_26__ {int offset; int domid; TYPE_4__ u; } ;
struct gnttab_map_grant_ref {unsigned int len; int flags; TYPE_7__ dest; TYPE_5__ source; } ;
typedef size_t pending_ring_idx_t ;
typedef int extras ;
typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;
struct TYPE_30__ {scalar_t__ req_prod; } ;
struct TYPE_29__ {unsigned int extra_count; int req; } ;
struct TYPE_20__ {size_t pending_idx; } ;
struct TYPE_19__ {int nr_frags; int * frags; } ;
struct TYPE_18__ {int domid; int dev; } ;
typedef void* RING_IDX ;


 unsigned int FUNC_0 (struct gnttab_map_grant_ref*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_16__*,void*,struct xen_netif_tx_request*) ;
 int FUNC_3 (TYPE_16__*) ;
 TYPE_15__* FUNC_4 (struct sk_buff*) ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;




 int FUNC_5 (struct sk_buff*,unsigned int) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (int *,size_t) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct xenvif_queue*,struct xen_netif_tx_request*,unsigned int,int ) ;
 int FUNC_10 (int *,struct xen_netif_tx_request*,int) ;
 int FUNC_11 (struct xen_netif_extra_info*,int ,int) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ) ;
 size_t FUNC_16 (int ) ;
 int FUNC_17 (struct xenvif_queue*) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct sk_buff*,int ,int) ;
 TYPE_14__* FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (struct xenvif_queue*,scalar_t__) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int ) ;
 struct sk_buff* FUNC_25 (unsigned int) ;
 int FUNC_26 (struct xenvif_queue*,struct xen_netif_tx_request*,unsigned int,struct xen_netif_tx_request*,int) ;
 int FUNC_27 (TYPE_10__*) ;
 int FUNC_28 (struct xenvif_queue*,struct xen_netif_extra_info*,unsigned int*,int) ;
 struct gnttab_map_grant_ref* FUNC_29 (struct xenvif_queue*,struct sk_buff*,struct xen_netif_tx_request*,struct gnttab_map_grant_ref*,unsigned int,struct sk_buff*) ;
 int FUNC_30 (TYPE_10__*,int ) ;
 int FUNC_31 (TYPE_10__*,int ) ;
 scalar_t__ FUNC_32 (TYPE_10__*,struct sk_buff*,struct xen_netif_extra_info*) ;
 int FUNC_33 (struct xenvif_queue*,size_t,struct xen_netif_tx_request*,unsigned int,struct gnttab_map_grant_ref*) ;
 int FUNC_34 (struct xenvif_queue*,struct xen_netif_tx_request*,unsigned int,void*) ;

__attribute__((used)) static void FUNC_35(struct xenvif_queue *VAR_21,
         int VAR_22,
         unsigned *VAR_23,
         unsigned *VAR_24)
{
 struct gnttab_map_grant_ref *VAR_25 = VAR_21->tx_map_ops;
 struct sk_buff *VAR_26, *VAR_27;
 int VAR_28;
 unsigned int VAR_29;

 while (FUNC_19(&VAR_21->tx_queue) < VAR_22) {
  struct xen_netif_tx_request VAR_30;
  struct xen_netif_tx_request VAR_31[VAR_9];
  struct xen_netif_extra_info VAR_32[VAR_12-1];
  unsigned int VAR_33;
  u16 VAR_34;
  RING_IDX VAR_35;
  int VAR_36;
  unsigned int VAR_37;
  pending_ring_idx_t VAR_38;

  if (VAR_21->tx.sring->req_prod - VAR_21->tx.req_cons >
      VAR_17) {
   FUNC_14(VAR_21->vif->dev,
       "Impossible number of requests. "
       "req_prod %d, req_cons %d, size %ld\n",
       VAR_21->tx.sring->req_prod, VAR_21->tx.req_cons,
       VAR_17);
   FUNC_27(VAR_21->vif);
   break;
  }

  VAR_36 = FUNC_3(&VAR_21->tx);
  if (!VAR_36)
   break;

  VAR_35 = VAR_21->tx.req_cons;
  FUNC_18();
  FUNC_2(&VAR_21->tx, VAR_35, &VAR_30);


  if (VAR_30.size > VAR_21->remaining_credit &&
      FUNC_22(VAR_21, VAR_30.size))
   break;

  VAR_21->remaining_credit -= VAR_30.size;

  VAR_36--;
  VAR_21->tx.req_cons = ++VAR_35;

  FUNC_11(VAR_32, 0, sizeof(VAR_32));
  VAR_33 = 0;
  if (VAR_30.flags & VAR_18) {
   VAR_36 = FUNC_28(VAR_21, VAR_32,
             &VAR_33,
             VAR_36);
   VAR_35 = VAR_21->tx.req_cons;
   if (FUNC_23(VAR_36 < 0))
    break;
  }

  if (VAR_32[VAR_13 - 1].type) {
   struct xen_netif_extra_info *VAR_39;

   VAR_39 = &VAR_32[VAR_13 - 1];
   VAR_28 = FUNC_30(VAR_21->vif, VAR_39->u.mcast.addr);

   FUNC_9(VAR_21, &VAR_30, VAR_33,
      (VAR_28 == 0) ?
      VAR_16 :
      VAR_15);
   FUNC_17(VAR_21);
   continue;
  }

  if (VAR_32[VAR_14 - 1].type) {
   struct xen_netif_extra_info *VAR_40;

   VAR_40 = &VAR_32[VAR_14 - 1];
   FUNC_31(VAR_21->vif, VAR_40->u.mcast.addr);

   FUNC_9(VAR_21, &VAR_30, VAR_33,
      VAR_16);
   FUNC_17(VAR_21);
   continue;
  }

  VAR_28 = FUNC_26(VAR_21, &VAR_30, VAR_33,
         VAR_31, VAR_36);
  if (FUNC_23(VAR_28 < 0))
   break;

  VAR_35 += VAR_28;

  if (FUNC_23(VAR_30.size < VAR_1)) {
   FUNC_13(VAR_21->vif->dev,
       "Bad packet size: %d\n", VAR_30.size);
   FUNC_34(VAR_21, &VAR_30, VAR_33, VAR_35);
   break;
  }


  if (FUNC_23((VAR_30.offset + VAR_30.size) > VAR_20)) {
   FUNC_14(VAR_21->vif->dev,
       "txreq.offset: %u, size: %u, end: %lu\n",
       VAR_30.offset, VAR_30.size,
       (unsigned long)(VAR_30.offset&~VAR_19) + VAR_30.size);
   FUNC_27(VAR_21->vif);
   break;
  }

  VAR_38 = FUNC_16(VAR_21->pending_cons);
  VAR_34 = VAR_21->pending_ring[VAR_38];

  VAR_37 = (VAR_30.size > VAR_8 &&
       VAR_28 < VAR_9) ?
   VAR_8 : VAR_30.size;

  VAR_26 = FUNC_25(VAR_37);
  if (FUNC_23(VAR_26 == ((void*)0))) {
   FUNC_13(VAR_21->vif->dev,
       "Can't allocate a skb in start_xmit.\n");
   FUNC_34(VAR_21, &VAR_30, VAR_33, VAR_35);
   break;
  }

  FUNC_21(VAR_26)->nr_frags = VAR_28;
  if (VAR_37 < VAR_30.size)
   FUNC_21(VAR_26)->nr_frags++;



  VAR_29 = 0;
  VAR_27 = ((void*)0);
  if (FUNC_21(VAR_26)->nr_frags > VAR_4) {
   VAR_29 = FUNC_21(VAR_26)->nr_frags - VAR_4;
   FUNC_1(VAR_29 > VAR_4);
   FUNC_21(VAR_26)->nr_frags = VAR_4;
   VAR_27 = FUNC_25(0);
   if (FUNC_23(VAR_27 == ((void*)0))) {
    FUNC_21(VAR_26)->nr_frags = 0;
    FUNC_8(VAR_26);
    FUNC_34(VAR_21, &VAR_30, VAR_33, VAR_35);
    if (FUNC_12())
     FUNC_14(VAR_21->vif->dev,
         "Can't allocate the frag_list skb.\n");
    break;
   }
  }

  if (VAR_32[VAR_10 - 1].type) {
   struct xen_netif_extra_info *VAR_41;
   VAR_41 = &VAR_32[VAR_10 - 1];

   if (FUNC_32(VAR_21->vif, VAR_26, VAR_41)) {

    FUNC_21(VAR_26)->nr_frags = 0;
    FUNC_8(VAR_26);
    FUNC_8(VAR_27);
    break;
   }
  }

  if (VAR_32[VAR_11 - 1].type) {
   struct xen_netif_extra_info *VAR_42;
   enum pkt_hash_types VAR_43 = VAR_7;

   VAR_42 = &VAR_32[VAR_11 - 1];

   switch (VAR_42->u.hash.type) {
   case 131:
   case 129:
    VAR_43 = VAR_5;
    break;

   case 130:
   case 128:
    VAR_43 = VAR_6;
    break;

   default:
    break;
   }

   if (VAR_43 != VAR_7)
    FUNC_20(VAR_26,
          *(u32 *)VAR_42->u.hash.value,
          VAR_43);
  }

  FUNC_4(VAR_26)->pending_idx = VAR_34;

  FUNC_5(VAR_26, VAR_37);
  VAR_21->tx_copy_ops[*VAR_23].source.u.ref = VAR_30.gref;
  VAR_21->tx_copy_ops[*VAR_23].source.domid = VAR_21->vif->domid;
  VAR_21->tx_copy_ops[*VAR_23].source.offset = VAR_30.offset;

  VAR_21->tx_copy_ops[*VAR_23].dest.u.gmfn =
   FUNC_24(VAR_26->data);
  VAR_21->tx_copy_ops[*VAR_23].dest.domid = VAR_0;
  VAR_21->tx_copy_ops[*VAR_23].dest.offset =
   FUNC_15(VAR_26->data) & ~VAR_19;

  VAR_21->tx_copy_ops[*VAR_23].len = VAR_37;
  VAR_21->tx_copy_ops[*VAR_23].flags = VAR_2;

  (*VAR_23)++;

  if (VAR_37 < VAR_30.size) {
   FUNC_7(&FUNC_21(VAR_26)->frags[0],
          VAR_34);
   FUNC_33(VAR_21, VAR_34, &VAR_30,
      VAR_33, VAR_25);
   VAR_25++;
  } else {
   FUNC_7(&FUNC_21(VAR_26)->frags[0],
          VAR_3);
   FUNC_10(&VAR_21->pending_tx_info[VAR_34].req,
          &VAR_30, sizeof(VAR_30));
   VAR_21->pending_tx_info[VAR_34].extra_count =
    VAR_33;
  }

  VAR_21->pending_cons++;

  VAR_25 = FUNC_29(VAR_21, VAR_26, VAR_31, VAR_25,
              VAR_29, VAR_27);

  FUNC_6(&VAR_21->tx_queue, VAR_26);

  VAR_21->tx.req_cons = VAR_35;

  if (((VAR_25-VAR_21->tx_map_ops) >= FUNC_0(VAR_21->tx_map_ops)) ||
      (*VAR_23 >= FUNC_0(VAR_21->tx_copy_ops)))
   break;
 }

 (*VAR_24) = VAR_25 - VAR_21->tx_map_ops;
 return;
}
