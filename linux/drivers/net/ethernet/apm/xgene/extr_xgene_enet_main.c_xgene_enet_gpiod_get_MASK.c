
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int sfp_gpio_en; scalar_t__ phy_mode; void* sfp_rdy; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct xgene_enet_pdata *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;

 VAR_2->sfp_gpio_en = 0;
 if (VAR_2->phy_mode != VAR_1 ||
     (!FUNC_1(VAR_3, "sfp-gpios") &&
      !FUNC_1(VAR_3, "rxlos-gpios")))
  return;

 VAR_2->sfp_gpio_en = 1;
 VAR_2->sfp_rdy = FUNC_2(VAR_3, "rxlos", VAR_0);
 if (FUNC_0(VAR_2->sfp_rdy))
  VAR_2->sfp_rdy = FUNC_2(VAR_3, "sfp", VAR_0);
}
