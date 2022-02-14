
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct post_pll_config {unsigned long tmdsclock; int version; } ;
struct phy_config {unsigned long tmdsclock; } ;
struct phy {int dummy; } ;
struct inno_hdmi_phy {int chip_version; int phyclk; TYPE_2__* plat_data; int dev; int pixclock; } ;
struct TYPE_4__ {TYPE_1__* ops; struct phy_config* phy_cfg_table; } ;
struct TYPE_3__ {int (* power_on ) (struct inno_hdmi_phy*,struct post_pll_config const*,struct phy_config const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 unsigned long FUNC_4 (struct inno_hdmi_phy*,int ) ;
 struct inno_hdmi_phy* FUNC_5 (struct phy*) ;
 struct post_pll_config* VAR_1 ;
 int FUNC_6 (struct inno_hdmi_phy*,struct post_pll_config const*,struct phy_config const*) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_2)
{
 struct inno_hdmi_phy *VAR_3 = FUNC_5(VAR_2);
 const struct post_pll_config *VAR_4 = VAR_1;
 const struct phy_config *VAR_5 = VAR_3->plat_data->phy_cfg_table;
 unsigned long VAR_6 = FUNC_4(VAR_3,
           VAR_3->pixclock);
 int VAR_7;

 if (!VAR_6) {
  FUNC_3(VAR_3->dev, "TMDS clock is zero!\n");
  return -VAR_0;
 }

 if (!VAR_3->plat_data->ops->power_on)
  return -VAR_0;

 for (; VAR_4->tmdsclock != 0; VAR_4++)
  if (VAR_6 <= VAR_4->tmdsclock &&
      VAR_4->version & VAR_3->chip_version)
   break;

 for (; VAR_5->tmdsclock != 0; VAR_5++)
  if (VAR_6 <= VAR_5->tmdsclock)
   break;

 if (VAR_4->tmdsclock == 0 || VAR_5->tmdsclock == 0)
  return -VAR_0;

 FUNC_2(VAR_3->dev, "Inno HDMI PHY Power On\n");

 VAR_7 = FUNC_1(VAR_3->phyclk);
 if (VAR_7)
  return VAR_7;

 VAR_7 = VAR_3->plat_data->ops->power_on(VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_3->phyclk);
  return VAR_7;
 }

 return 0;
}
