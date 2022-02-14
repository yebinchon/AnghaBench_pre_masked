
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_hw_ops {int (* exit ) (struct xlgmac_pdata*) ;int (* enable_rx ) (struct xlgmac_pdata*) ;int (* enable_tx ) (struct xlgmac_pdata*) ;int (* init ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {struct net_device* netdev; struct xlgmac_hw_ops hw_ops; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;
 int FUNC_2 (struct xlgmac_pdata*) ;
 int FUNC_3 (struct xlgmac_pdata*) ;
 int FUNC_4 (struct xlgmac_pdata*) ;
 int FUNC_5 (struct xlgmac_pdata*,int) ;
 int FUNC_6 (struct xlgmac_pdata*,int) ;
 int FUNC_7 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_8(struct xlgmac_pdata *VAR_0)
{
 struct xlgmac_hw_ops *VAR_1 = &VAR_0->hw_ops;
 struct net_device *VAR_2 = VAR_0->netdev;
 int VAR_3;

 VAR_1->init(VAR_0);
 FUNC_6(VAR_0, 1);

 VAR_3 = FUNC_7(VAR_0);
 if (VAR_3)
  goto err_napi;

 VAR_1->enable_tx(VAR_0);
 VAR_1->enable_rx(VAR_0);
 FUNC_0(VAR_2);

 return 0;

err_napi:
 FUNC_5(VAR_0, 1);
 VAR_1->exit(VAR_0);

 return VAR_3;
}
