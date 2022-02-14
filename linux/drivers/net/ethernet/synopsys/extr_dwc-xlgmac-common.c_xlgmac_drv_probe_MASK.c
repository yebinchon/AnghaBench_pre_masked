
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_resources {int addr; int irq; } ;
struct xlgmac_pdata {int msg_enable; int rss_mutex; int mac_regs; int dev_irq; struct net_device* netdev; struct device* dev; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct device*) ;
 int VAR_1 ;
 struct net_device* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 struct xlgmac_pdata* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct xlgmac_pdata*) ;

int FUNC_10(struct device *VAR_4, struct xlgmac_resources *VAR_5)
{
 struct xlgmac_pdata *VAR_6;
 struct net_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(sizeof(struct xlgmac_pdata),
       VAR_1);

 if (!VAR_7) {
  FUNC_2(VAR_4, "alloc_etherdev failed\n");
  return -VAR_0;
 }

 FUNC_0(VAR_7, VAR_4);
 FUNC_3(VAR_4, VAR_7);
 VAR_6 = FUNC_6(VAR_7);
 VAR_6->dev = VAR_4;
 VAR_6->netdev = VAR_7;

 VAR_6->dev_irq = VAR_5->irq;
 VAR_6->mac_regs = VAR_5->addr;

 FUNC_5(&VAR_6->rss_mutex);
 VAR_6->msg_enable = FUNC_7(VAR_2, VAR_3);

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_4, "xlgmac init failed\n");
  goto err_free_netdev;
 }

 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_4, "net device registration failed\n");
  goto err_free_netdev;
 }

 return 0;

err_free_netdev:
 FUNC_4(VAR_7);

 return VAR_8;
}
