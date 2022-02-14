
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_usb2phy {TYPE_2__* phy_cfg; } ;
struct regmap {int dummy; } ;
struct TYPE_3__ {int idm_sink_en; int vdp_src_en; } ;
struct TYPE_4__ {TYPE_1__ chg_det; } ;


 struct regmap* FUNC_0 (struct rockchip_usb2phy*) ;
 int FUNC_1 (struct regmap*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct rockchip_usb2phy *VAR_0,
         bool VAR_1)
{
 struct regmap *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, &VAR_0->phy_cfg->chg_det.vdp_src_en, VAR_1);
 FUNC_1(VAR_2, &VAR_0->phy_cfg->chg_det.idm_sink_en, VAR_1);
}
