
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_desc_ops {int (* free_channels_and_rings ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {struct xlgmac_desc_ops desc_ops; } ;
struct net_device {int dummy; } ;


 struct xlgmac_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;
 int FUNC_2 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct xlgmac_pdata *VAR_1 = FUNC_0(VAR_0);
 struct xlgmac_desc_ops *VAR_2;

 VAR_2 = &VAR_1->desc_ops;


 FUNC_2(VAR_1);


 VAR_2->free_channels_and_rings(VAR_1);

 return 0;
}
