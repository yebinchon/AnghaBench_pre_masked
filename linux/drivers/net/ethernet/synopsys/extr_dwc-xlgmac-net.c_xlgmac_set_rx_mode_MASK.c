
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_hw_ops {int (* config_rx_mode ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {struct xlgmac_hw_ops hw_ops; } ;
struct net_device {int dummy; } ;


 struct xlgmac_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct xlgmac_pdata *VAR_1 = FUNC_0(VAR_0);
 struct xlgmac_hw_ops *VAR_2 = &VAR_1->hw_ops;

 VAR_2->config_rx_mode(VAR_1);
}
