
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_usb_phy_data {int phy0_init; int id_det; int vbus_det; int detect; TYPE_1__* cfg; scalar_t__ base; } ;
struct sun4i_usb_phy {scalar_t__ index; scalar_t__ pmu; int clk; int clk2; int reset; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int disc_thresh; scalar_t__ enable_pmu_unk1; scalar_t__ phyctl_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sun4i_usb_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct phy*,int ,int ) ;
 int FUNC_7 (struct sun4i_usb_phy*,int) ;
 int FUNC_8 (struct sun4i_usb_phy*,int ,int,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct sun4i_usb_phy_data* FUNC_9 (struct sun4i_usb_phy*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct phy *VAR_11)
{
 struct sun4i_usb_phy *VAR_12 = FUNC_2(VAR_11);
 struct sun4i_usb_phy_data *VAR_13 = FUNC_9(VAR_12);
 int VAR_14;
 u32 VAR_15;

 VAR_14 = FUNC_1(VAR_12->clk);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_1(VAR_12->clk2);
 if (VAR_14) {
  FUNC_0(VAR_12->clk);
  return VAR_14;
 }

 VAR_14 = FUNC_5(VAR_12->reset);
 if (VAR_14) {
  FUNC_0(VAR_12->clk2);
  FUNC_0(VAR_12->clk);
  return VAR_14;
 }

 if (VAR_13->cfg->type == VAR_9 ||
     VAR_13->cfg->type == VAR_8) {
  if (VAR_12->index == 0) {
   VAR_15 = FUNC_4(VAR_13->base + VAR_13->cfg->phyctl_offset);
   VAR_15 |= VAR_3;
   VAR_15 &= ~VAR_2;
   FUNC_10(VAR_15, VAR_13->base + VAR_13->cfg->phyctl_offset);
  }
 } else {
  if (VAR_12->pmu && VAR_13->cfg->enable_pmu_unk1) {
   VAR_15 = FUNC_4(VAR_12->pmu + VAR_7);
   FUNC_10(VAR_15 & ~2, VAR_12->pmu + VAR_7);
  }


  if (VAR_12->index == 0)
   FUNC_8(VAR_12, VAR_5, 0x01, 1);


  FUNC_8(VAR_12, VAR_6, 0x14, 5);


  FUNC_8(VAR_12, VAR_4,
        VAR_13->cfg->disc_thresh, 2);
 }

 FUNC_7(VAR_12, 1);

 if (VAR_12->index == 0) {
  VAR_13->phy0_init = 1;


  FUNC_6(VAR_11, 0, VAR_0);
  FUNC_6(VAR_11, 0, VAR_1);


  VAR_13->id_det = -1;
  VAR_13->vbus_det = -1;
  FUNC_3(VAR_10, &VAR_13->detect, 0);
 }

 return 0;
}
