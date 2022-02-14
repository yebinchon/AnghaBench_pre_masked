
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xennet_gnttab_make_txreq {struct xen_netif_tx_request* tx; int size; struct page* page; struct sk_buff* skb; struct netfront_queue* queue; } ;
struct xen_netif_tx_request {int dummy; } ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct netfront_queue {int dummy; } ;


 int FUNC_0 (struct page*,unsigned int,unsigned int,int ,struct xennet_gnttab_make_txreq*) ;
 int VAR_0 ;

__attribute__((used)) static struct xen_netif_tx_request *FUNC_1(
 struct netfront_queue *VAR_1, struct sk_buff *VAR_2,
 struct page *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 struct xennet_gnttab_make_txreq VAR_6 = {
  .queue = VAR_1,
  .skb = VAR_2,
  .page = VAR_3,
  .size = 0,
 };

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_0, &VAR_6);

 return VAR_6.tx;
}
