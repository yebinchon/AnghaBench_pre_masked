
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_rq {int xdp_prog; } ;
struct veth_priv {int dropped; struct veth_rq* rq; int peer; } ;
struct sk_buff {int len; } ;
struct pcpu_lstats {int bytes; int syncp; int packets; } ;
struct net_device {int real_num_rx_queues; int lstats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct veth_rq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 struct veth_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 struct net_device* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 struct pcpu_lstats* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (struct net_device*,struct sk_buff*,struct veth_rq*,int) ;

__attribute__((used)) static netdev_tx_t FUNC_17(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct veth_priv *VAR_4, *VAR_5 = FUNC_4(VAR_3);
 struct veth_rq *VAR_6 = ((void*)0);
 struct net_device *VAR_7;
 int VAR_8 = VAR_2->len;
 bool VAR_9 = 0;
 int VAR_10;

 FUNC_7();
 VAR_7 = FUNC_6(VAR_5->peer);
 if (FUNC_15(!VAR_7)) {
  FUNC_2(VAR_2);
  goto drop;
 }

 VAR_4 = FUNC_4(VAR_7);
 VAR_10 = FUNC_9(VAR_2);
 if (VAR_10 < VAR_7->real_num_rx_queues) {
  VAR_6 = &VAR_4->rq[VAR_10];
  VAR_9 = FUNC_5(VAR_6->xdp_prog);
  if (VAR_9)
   FUNC_10(VAR_2, VAR_10);
 }

 FUNC_11(VAR_2);
 if (FUNC_3(FUNC_16(VAR_7, VAR_2, VAR_6, VAR_9) == VAR_1)) {
  if (!VAR_9) {
   struct pcpu_lstats *VAR_11 = FUNC_12(VAR_3->lstats);

   FUNC_13(&VAR_11->syncp);
   VAR_11->bytes += VAR_8;
   VAR_11->packets++;
   FUNC_14(&VAR_11->syncp);
  }
 } else {
drop:
  FUNC_1(&VAR_5->dropped);
 }

 if (VAR_9)
  FUNC_0(VAR_6);

 FUNC_8();

 return VAR_0;
}
