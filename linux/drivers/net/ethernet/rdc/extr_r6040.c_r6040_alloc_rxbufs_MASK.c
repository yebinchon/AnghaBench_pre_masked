
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct r6040_private {int pdev; struct r6040_descriptor* rx_ring; int rx_ring_dma; struct r6040_descriptor* rx_insert_ptr; struct r6040_descriptor* rx_remove_ptr; } ;
struct r6040_descriptor {struct r6040_descriptor* vndescp; int status; struct sk_buff* skb_ptr; int buf; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct net_device*,int ) ;
 struct r6040_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct r6040_descriptor*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5)
{
 struct r6040_private *VAR_6 = FUNC_2(VAR_5);
 struct r6040_descriptor *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;

 VAR_6->rx_remove_ptr = VAR_6->rx_insert_ptr = VAR_6->rx_ring;
 FUNC_5(VAR_6->rx_ring, VAR_6->rx_ring_dma, VAR_4);


 VAR_7 = VAR_6->rx_ring;
 do {
  VAR_8 = FUNC_1(VAR_5, VAR_2);
  if (!VAR_8) {
   VAR_9 = -VAR_1;
   goto err_exit;
  }
  VAR_7->skb_ptr = VAR_8;
  VAR_7->buf = FUNC_0(FUNC_3(VAR_6->pdev,
     VAR_7->skb_ptr->data,
     VAR_2, VAR_3));
  VAR_7->status = VAR_0;
  VAR_7 = VAR_7->vndescp;
 } while (VAR_7 != VAR_6->rx_ring);

 return 0;

err_exit:

 FUNC_4(VAR_5);
 return VAR_9;
}
