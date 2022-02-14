
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ speed; scalar_t__ phy_type; scalar_t__ ulpi_fs_ls; } ;
struct TYPE_3__ {scalar_t__ hs_phy_type; scalar_t__ fs_phy_type; } ;
struct dwc2_hsotg {int dev; TYPE_2__ params; TYPE_1__ hw_params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*,int) ;
 int FUNC_2 (struct dwc2_hsotg*,int) ;
 int FUNC_3 (struct dwc2_hsotg*,int ) ;
 int FUNC_4 (struct dwc2_hsotg*,int ,int ) ;

int FUNC_5(struct dwc2_hsotg *VAR_8, bool VAR_9)
{
 u32 VAR_10;
 int VAR_11 = 0;

 if ((VAR_8->params.speed == VAR_1 ||
      VAR_8->params.speed == VAR_2) &&
     VAR_8->params.phy_type == VAR_0) {

  VAR_11 = FUNC_1(VAR_8, VAR_9);
  if (VAR_11)
   return VAR_11;
 } else {

  VAR_11 = FUNC_2(VAR_8, VAR_9);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_8->hw_params.hs_phy_type == VAR_4 &&
     VAR_8->hw_params.fs_phy_type == VAR_3 &&
     VAR_8->params.ulpi_fs_ls) {
  FUNC_0(VAR_8->dev, "Setting ULPI FSLS\n");
  VAR_10 = FUNC_3(VAR_8, VAR_5);
  VAR_10 |= VAR_7;
  VAR_10 |= VAR_6;
  FUNC_4(VAR_8, VAR_10, VAR_5);
 } else {
  VAR_10 = FUNC_3(VAR_8, VAR_5);
  VAR_10 &= ~VAR_7;
  VAR_10 &= ~VAR_6;
  FUNC_4(VAR_8, VAR_10, VAR_5);
 }

 return VAR_11;
}
