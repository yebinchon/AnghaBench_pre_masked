
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union phy_configure_opts {int mipi_dphy; } ;
struct phy {int dummy; } ;
struct mixel_dphy_priv {TYPE_1__* devdata; int cfg; } ;
struct mixel_dphy_cfg {int member_0; } ;
struct TYPE_2__ {int reg_rxcdrp; int reg_rxlprp; int reg_auto_pd_en; int reg_tx_rcal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mixel_dphy_cfg*,int) ;
 int FUNC_1 (struct phy*,int *,struct mixel_dphy_cfg*) ;
 int FUNC_2 (struct phy*) ;
 int FUNC_3 (struct phy*) ;
 struct mixel_dphy_priv* FUNC_4 (struct phy*) ;
 int FUNC_5 (struct phy*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_2, union phy_configure_opts *VAR_3)
{
 struct mixel_dphy_priv *VAR_4 = FUNC_4(VAR_2);
 struct mixel_dphy_cfg VAR_5 = { 0 };
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, &VAR_3->mipi_dphy, &VAR_5);
 if (VAR_6)
  return VAR_6;


 FUNC_0(&VAR_4->cfg, &VAR_5, sizeof(struct mixel_dphy_cfg));

 FUNC_5(VAR_2, 0x00, VAR_0);
 FUNC_5(VAR_2, 0x01, VAR_4->devdata->reg_tx_rcal);
 FUNC_5(VAR_2, 0x00, VAR_4->devdata->reg_auto_pd_en);
 FUNC_5(VAR_2, 0x02, VAR_4->devdata->reg_rxlprp);
 FUNC_5(VAR_2, 0x02, VAR_4->devdata->reg_rxcdrp);
 FUNC_5(VAR_2, 0x25, VAR_1);

 FUNC_3(VAR_2);
 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
