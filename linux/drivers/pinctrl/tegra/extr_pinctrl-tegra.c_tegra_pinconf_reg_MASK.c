
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_pmx {int dev; TYPE_1__* soc; } ;
struct tegra_pingroup {scalar_t__ pupd_bank; scalar_t__ pupd_reg; scalar_t__ pupd_bit; scalar_t__ tri_bank; scalar_t__ tri_reg; scalar_t__ tri_bit; scalar_t__ mux_bank; scalar_t__ mux_reg; scalar_t__ einput_bit; scalar_t__ odrain_bit; scalar_t__ lock_bit; scalar_t__ ioreset_bit; scalar_t__ rcv_sel_bit; scalar_t__ drv_bank; scalar_t__ drv_reg; scalar_t__ hsm_bit; scalar_t__ schmitt_bit; scalar_t__ lpmd_bit; scalar_t__ drvdn_bit; scalar_t__ drvdn_width; scalar_t__ drvup_bit; scalar_t__ drvup_width; scalar_t__ slwf_bit; scalar_t__ slwf_width; scalar_t__ slwr_bit; scalar_t__ slwr_width; scalar_t__ drvtype_bit; int name; } ;
typedef scalar_t__ s8 ;
typedef scalar_t__ s32 ;
typedef enum tegra_pinconf_param { ____Placeholder_tegra_pinconf_param } tegra_pinconf_param ;
struct TYPE_5__ {int param; char* property; } ;
struct TYPE_4__ {int drvtype_in_mux; int schmitt_in_mux; int hsm_in_mux; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct tegra_pmx *VAR_2,
        const struct tegra_pingroup *VAR_3,
        enum tegra_pinconf_param VAR_4,
        bool VAR_5,
        s8 *VAR_6, s32 *VAR_7, s8 *VAR_8, s8 *VAR_9)
{
 switch (VAR_4) {
 case 133:
  *VAR_6 = VAR_3->pupd_bank;
  *VAR_7 = VAR_3->pupd_reg;
  *VAR_8 = VAR_3->pupd_bit;
  *VAR_9 = 2;
  break;
 case 128:
  *VAR_6 = VAR_3->tri_bank;
  *VAR_7 = VAR_3->tri_reg;
  *VAR_8 = VAR_3->tri_bit;
  *VAR_9 = 1;
  break;
 case 139:
  *VAR_6 = VAR_3->mux_bank;
  *VAR_7 = VAR_3->mux_reg;
  *VAR_8 = VAR_3->einput_bit;
  *VAR_9 = 1;
  break;
 case 134:
  *VAR_6 = VAR_3->mux_bank;
  *VAR_7 = VAR_3->mux_reg;
  *VAR_8 = VAR_3->odrain_bit;
  *VAR_9 = 1;
  break;
 case 136:
  *VAR_6 = VAR_3->mux_bank;
  *VAR_7 = VAR_3->mux_reg;
  *VAR_8 = VAR_3->lock_bit;
  *VAR_9 = 1;
  break;
 case 137:
  *VAR_6 = VAR_3->mux_bank;
  *VAR_7 = VAR_3->mux_reg;
  *VAR_8 = VAR_3->ioreset_bit;
  *VAR_9 = 1;
  break;
 case 132:
  *VAR_6 = VAR_3->mux_bank;
  *VAR_7 = VAR_3->mux_reg;
  *VAR_8 = VAR_3->rcv_sel_bit;
  *VAR_9 = 1;
  break;
 case 138:
  if (VAR_2->soc->hsm_in_mux) {
   *VAR_6 = VAR_3->mux_bank;
   *VAR_7 = VAR_3->mux_reg;
  } else {
   *VAR_6 = VAR_3->drv_bank;
   *VAR_7 = VAR_3->drv_reg;
  }
  *VAR_8 = VAR_3->hsm_bit;
  *VAR_9 = 1;
  break;
 case 131:
  if (VAR_2->soc->schmitt_in_mux) {
   *VAR_6 = VAR_3->mux_bank;
   *VAR_7 = VAR_3->mux_reg;
  } else {
   *VAR_6 = VAR_3->drv_bank;
   *VAR_7 = VAR_3->drv_reg;
  }
  *VAR_8 = VAR_3->schmitt_bit;
  *VAR_9 = 1;
  break;
 case 135:
  *VAR_6 = VAR_3->drv_bank;
  *VAR_7 = VAR_3->drv_reg;
  *VAR_8 = VAR_3->lpmd_bit;
  *VAR_9 = 2;
  break;
 case 142:
  *VAR_6 = VAR_3->drv_bank;
  *VAR_7 = VAR_3->drv_reg;
  *VAR_8 = VAR_3->drvdn_bit;
  *VAR_9 = VAR_3->drvdn_width;
  break;
 case 140:
  *VAR_6 = VAR_3->drv_bank;
  *VAR_7 = VAR_3->drv_reg;
  *VAR_8 = VAR_3->drvup_bit;
  *VAR_9 = VAR_3->drvup_width;
  break;
 case 130:
  *VAR_6 = VAR_3->drv_bank;
  *VAR_7 = VAR_3->drv_reg;
  *VAR_8 = VAR_3->slwf_bit;
  *VAR_9 = VAR_3->slwf_width;
  break;
 case 129:
  *VAR_6 = VAR_3->drv_bank;
  *VAR_7 = VAR_3->drv_reg;
  *VAR_8 = VAR_3->slwr_bit;
  *VAR_9 = VAR_3->slwr_width;
  break;
 case 141:
  if (VAR_2->soc->drvtype_in_mux) {
   *VAR_6 = VAR_3->mux_bank;
   *VAR_7 = VAR_3->mux_reg;
  } else {
   *VAR_6 = VAR_3->drv_bank;
   *VAR_7 = VAR_3->drv_reg;
  }
  *VAR_8 = VAR_3->drvtype_bit;
  *VAR_9 = 2;
  break;
 default:
  FUNC_1(VAR_2->dev, "Invalid config param %04x\n", VAR_4);
  return -VAR_0;
 }

 if (*VAR_7 < 0 || *VAR_8 < 0) {
  if (VAR_5) {
   const char *VAR_10 = "unknown";
   int VAR_11;

   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_1); VAR_11++) {
    if (VAR_1[VAR_11].param == VAR_4) {
     VAR_10 = VAR_1[VAR_11].property;
     break;
    }
   }

   FUNC_1(VAR_2->dev,
    "Config param %04x (%s) not supported on group %s\n",
    VAR_4, VAR_10, VAR_3->name);
  }
  return -VAR_0;
 }

 return 0;
}
