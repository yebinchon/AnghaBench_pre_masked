
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xennet_gnttab_make_txreq {struct xen_netif_tx_request* tx; scalar_t__ size; struct page* page; struct sk_buff* skb; struct netfront_queue* queue; } ;
struct xen_netif_tx_request {int dummy; } ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct netfront_queue {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct page*,unsigned int,unsigned int,int ,struct xennet_gnttab_make_txreq*) ;
 int VAR_2 ;

__attribute__((used)) static struct xen_netif_tx_request *FUNC_1(
 struct netfront_queue *VAR_3, struct xen_netif_tx_request *VAR_4,
 struct sk_buff *VAR_5, struct page *VAR_6,
 unsigned int VAR_7, unsigned int VAR_8)
{
 struct xennet_gnttab_make_txreq VAR_9 = {
  .queue = VAR_3,
  .skb = VAR_5,
  .tx = VAR_4,
 };


 VAR_6 += VAR_7 >> VAR_1;
 VAR_7 &= ~VAR_0;

 while (VAR_8) {
  VAR_9.page = VAR_6;
  VAR_9.size = 0;

  FUNC_0(VAR_6, VAR_7, VAR_8,
           VAR_2,
           &VAR_9);

  VAR_6++;
  VAR_7 = 0;
  VAR_8 -= VAR_9.size;
 }

 return VAR_9.tx;
}
