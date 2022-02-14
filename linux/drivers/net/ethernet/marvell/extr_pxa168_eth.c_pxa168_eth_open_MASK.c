
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int napi; scalar_t__ rx_curr_desc_q; scalar_t__ rx_used_desc_q; scalar_t__ rx_resource_err; } ;
struct net_device {int irq; int dev; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 struct pxa168_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2)
{
 struct pxa168_eth_private *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_2->irq, VAR_1, 0, VAR_2->name, VAR_2);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "can't assign irq\n");
  return -VAR_0;
 }
 VAR_3->rx_resource_err = 0;
 VAR_4 = FUNC_9(VAR_2);
 if (VAR_4 != 0)
  goto out_free_irq;
 VAR_4 = FUNC_11(VAR_2);
 if (VAR_4 != 0)
  goto out_free_rx_skb;
 VAR_3->rx_used_desc_q = 0;
 VAR_3->rx_curr_desc_q = 0;


 FUNC_10(VAR_2);
 VAR_3->rx_used_desc_q = 0;
 VAR_3->rx_curr_desc_q = 0;
 FUNC_5(VAR_2);
 FUNC_3(&VAR_3->napi);
 FUNC_1(VAR_2);
 return 0;
out_free_rx_skb:
 FUNC_8(VAR_2);
out_free_irq:
 FUNC_2(VAR_2->irq, VAR_2);
 return VAR_4;
}
