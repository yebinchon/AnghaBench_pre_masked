
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ phy_type; scalar_t__ ulpi_fs_ls; } ;
struct TYPE_3__ {scalar_t__ hs_phy_type; scalar_t__ fs_phy_type; } ;
struct dwc2_hsotg {int dev; TYPE_2__ params; TYPE_1__ hw_params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;

void FUNC_3(struct dwc2_hsotg *VAR_8)
{
 u32 VAR_9, VAR_10;

 if ((VAR_8->hw_params.hs_phy_type == VAR_2 &&
      VAR_8->hw_params.fs_phy_type == VAR_1 &&
      VAR_8->params.ulpi_fs_ls) ||
     VAR_8->params.phy_type == VAR_0) {

  VAR_10 = VAR_5;
 } else {

  VAR_10 = VAR_4;
 }

 FUNC_0(VAR_8->dev, "Initializing HCFG.FSLSPClkSel to %08x\n", VAR_10);
 VAR_9 = FUNC_1(VAR_8, VAR_3);
 VAR_9 &= ~VAR_6;
 VAR_9 |= VAR_10 << VAR_7;
 FUNC_2(VAR_8, VAR_9, VAR_3);
}
