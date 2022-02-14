
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {int napi; struct net_device* ndev; struct platform_device* pdev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct net_device {int features; int hw_features; int * netdev_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,struct device*) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct xge_pdata* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int *,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct xge_pdata*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct xge_pdata*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_13 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct net_device *VAR_8;
 struct xge_pdata *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_8);

 VAR_9->pdev = VAR_6;
 VAR_9->ndev = VAR_8;
 FUNC_1(VAR_8, VAR_7);
 FUNC_8(VAR_6, VAR_9);
 VAR_8->netdev_ops = &VAR_5;

 VAR_8->features |= VAR_3 |
     VAR_2;

 VAR_10 = FUNC_10(VAR_9);
 if (VAR_10)
  goto err;

 VAR_8->hw_features = VAR_8->features;
 FUNC_13(VAR_8);

 VAR_10 = FUNC_3(VAR_7, FUNC_0(64));
 if (VAR_10) {
  FUNC_5(VAR_8, "No usable DMA configuration\n");
  goto err;
 }

 VAR_10 = FUNC_11(VAR_8);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_12(VAR_8);
 if (VAR_10)
  goto err;

 FUNC_7(VAR_8, &VAR_9->napi, VAR_4, VAR_1);

 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10) {
  FUNC_5(VAR_8, "Failed to register netdev\n");
  goto err;
 }

 return 0;

err:
 FUNC_4(VAR_8);

 return VAR_10;
}
