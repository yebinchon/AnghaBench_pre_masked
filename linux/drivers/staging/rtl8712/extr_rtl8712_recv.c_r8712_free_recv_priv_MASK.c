
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_priv {int free_recv_skb_queue; int rx_skb_queue; int pallocated_recv_buf; scalar_t__ precv_buf; struct _adapter* adapter; } ;
struct recv_buf {int dummy; } ;
struct _adapter {int pnetdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct _adapter*,struct recv_buf*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct recv_priv *VAR_1)
{
 int VAR_2;
 struct recv_buf *VAR_3;
 struct _adapter *VAR_4 = VAR_1->adapter;

 VAR_3 = (struct recv_buf *)VAR_1->precv_buf;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_2(VAR_4, VAR_3);
  VAR_3++;
 }
 FUNC_0(VAR_1->pallocated_recv_buf);
 FUNC_4(&VAR_1->rx_skb_queue);
 if (FUNC_3(&VAR_1->rx_skb_queue))
  FUNC_1(VAR_4->pnetdev, "r8712u: rx_skb_queue not empty\n");
 FUNC_4(&VAR_1->free_recv_skb_queue);
 if (FUNC_3(&VAR_1->free_recv_skb_queue))
  FUNC_1(VAR_4->pnetdev, "r8712u: free_recv_skb_queue not empty %d\n",
       FUNC_3(&VAR_1->free_recv_skb_queue));
}
