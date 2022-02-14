
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u16 ;
struct xen_netif_tx_request {int flags; scalar_t__ size; } ;
struct TYPE_7__ {scalar_t__ features; scalar_t__ pad; int type; scalar_t__ size; } ;
struct TYPE_8__ {TYPE_1__ gso; } ;
struct xen_netif_extra_info {scalar_t__ flags; int type; TYPE_2__ u; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ len; int data; } ;
struct page {int dummy; } ;
struct netfront_stats {int syncp; int packets; scalar_t__ bytes; } ;
struct TYPE_11__ {int req_prod_pvt; } ;
struct netfront_queue {int tx_lock; int id; int tx_irq; TYPE_5__ tx; } ;
struct netfront_info {struct netfront_queue* queues; int tx_stats; } ;
struct TYPE_9__ {int tx_dropped; } ;
struct net_device {unsigned int real_num_tx_queues; TYPE_3__ stats; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
struct TYPE_10__ {int gso_type; unsigned int nr_frags; int * frags; scalar_t__ gso_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,int,scalar_t__) ;
 int FUNC_6 (struct net_device*,int ) ;
 struct netfront_info* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct netfront_queue*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 unsigned int FUNC_14 (int ) ;
 struct sk_buff* FUNC_15 (struct sk_buff*,int ) ;
 unsigned int FUNC_16 (int *) ;
 struct page* FUNC_17 (int *) ;
 unsigned int FUNC_18 (int *) ;
 size_t FUNC_19 (struct sk_buff*) ;
 unsigned int FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 TYPE_4__* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (int *,unsigned long) ;
 struct netfront_stats* FUNC_25 (int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int) ;
 struct page* FUNC_29 (int ) ;
 int FUNC_30 (struct net_device*) ;
 int FUNC_31 (struct sk_buff*) ;
 struct xen_netif_tx_request* FUNC_32 (struct netfront_queue*,struct sk_buff*,struct page*,unsigned int,unsigned int) ;
 struct xen_netif_tx_request* FUNC_33 (struct netfront_queue*,struct xen_netif_tx_request*,struct sk_buff*,struct page*,unsigned int,unsigned int) ;
 int FUNC_34 (struct netfront_queue*) ;

__attribute__((used)) static netdev_tx_t FUNC_35(struct sk_buff *VAR_15, struct net_device *VAR_16)
{
 struct netfront_info *VAR_17 = FUNC_7(VAR_16);
 struct netfront_stats *VAR_18 = FUNC_25(VAR_17->tx_stats);
 struct xen_netif_tx_request *VAR_19, *VAR_20;
 unsigned int VAR_21;
 int VAR_22;
 int VAR_23;
 struct page *VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;
 unsigned long VAR_27;
 struct netfront_queue *VAR_28 = ((void*)0);
 unsigned int VAR_29 = VAR_16->real_num_tx_queues;
 u16 VAR_30;
 struct sk_buff *VAR_31;


 if (VAR_29 < 1)
  goto drop;

 VAR_30 = FUNC_19(VAR_15);
 VAR_28 = &VAR_17->queues[VAR_30];




 if (FUNC_28(VAR_15->len > VAR_11)) {
  FUNC_4(
   "xennet: skb->len = %u, too big for wire format\n",
   VAR_15->len);
  goto drop;
 }

 VAR_23 = FUNC_31(VAR_15);
 if (FUNC_28(VAR_23 > VAR_4 + 1)) {
  FUNC_5("xennet: skb rides the rocket: %d slots, %d bytes\n",
        VAR_23, VAR_15->len);
  if (FUNC_21(VAR_15))
   goto drop;
 }

 VAR_24 = FUNC_29(VAR_15->data);
 VAR_25 = FUNC_14(VAR_15->data);




 if (FUNC_28(VAR_6 - VAR_25 < VAR_2)) {
  VAR_31 = FUNC_15(VAR_15, VAR_3);
  if (!VAR_31)
   goto drop;
  FUNC_2(VAR_15);
  VAR_15 = VAR_31;
  VAR_24 = FUNC_29(VAR_15->data);
  VAR_25 = FUNC_14(VAR_15->data);
 }

 VAR_26 = FUNC_20(VAR_15);

 FUNC_23(&VAR_28->tx_lock, VAR_27);

 if (FUNC_28(!FUNC_9(VAR_16) ||
       (VAR_23 > 1 && !FUNC_30(VAR_16)) ||
       FUNC_10(VAR_15, FUNC_11(VAR_15)))) {
  FUNC_24(&VAR_28->tx_lock, VAR_27);
  goto drop;
 }


 VAR_20 = VAR_19 = FUNC_32(VAR_28, VAR_15,
      VAR_24, VAR_25, VAR_26);
 VAR_25 += VAR_19->size;
 if (VAR_25 == VAR_6) {
  VAR_24++;
  VAR_25 = 0;
 }
 VAR_26 -= VAR_19->size;

 if (VAR_15->ip_summed == VAR_0)

  VAR_19->flags |= VAR_12 | VAR_13;
 else if (VAR_15->ip_summed == VAR_1)

  VAR_19->flags |= VAR_13;


 if (FUNC_22(VAR_15)->gso_size) {
  struct xen_netif_extra_info *VAR_32;

  VAR_32 = (struct xen_netif_extra_info *)
   FUNC_0(&VAR_28->tx, VAR_28->tx.req_prod_pvt++);

  VAR_19->flags |= VAR_14;

  VAR_32->u.gso.size = FUNC_22(VAR_15)->gso_size;
  VAR_32->u.gso.type = (FUNC_22(VAR_15)->gso_type & VAR_7) ?
   VAR_10 :
   VAR_9;
  VAR_32->u.gso.pad = 0;
  VAR_32->u.gso.features = 0;

  VAR_32->type = VAR_8;
  VAR_32->flags = 0;
 }


 VAR_19 = FUNC_33(VAR_28, VAR_19, VAR_15, VAR_24, VAR_25, VAR_26);


 for (VAR_21 = 0; VAR_21 < FUNC_22(VAR_15)->nr_frags; VAR_21++) {
  skb_frag_t *VAR_33 = &FUNC_22(VAR_15)->frags[VAR_21];
  VAR_19 = FUNC_33(VAR_28, VAR_19, VAR_15, FUNC_17(VAR_33),
     FUNC_16(VAR_33),
     FUNC_18(VAR_33));
 }


 VAR_20->size = VAR_15->len;

 FUNC_1(&VAR_28->tx, VAR_22);
 if (VAR_22)
  FUNC_13(VAR_28->tx_irq);

 FUNC_26(&VAR_18->syncp);
 VAR_18->bytes += VAR_15->len;
 VAR_18->packets++;
 FUNC_27(&VAR_18->syncp);


 FUNC_34(VAR_28);

 if (!FUNC_8(VAR_28))
  FUNC_12(FUNC_6(VAR_16, VAR_28->id));

 FUNC_24(&VAR_28->tx_lock, VAR_27);

 return VAR_5;

 drop:
 VAR_16->stats.tx_dropped++;
 FUNC_3(VAR_15);
 return VAR_5;
}
