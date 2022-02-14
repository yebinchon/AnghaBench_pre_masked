
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {void* sfp_rdy; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct xgene_enet_pdata *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;

 VAR_2->sfp_rdy = FUNC_1(VAR_3, "rxlos", VAR_1);
 if (FUNC_0(VAR_2->sfp_rdy))
  VAR_2->sfp_rdy = FUNC_1(VAR_3, "sfp", VAR_1);

 if (FUNC_0(VAR_2->sfp_rdy))
  return -VAR_0;

 return 0;
}
