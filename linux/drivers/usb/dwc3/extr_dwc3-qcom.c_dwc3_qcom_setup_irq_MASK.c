
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dwc3_qcom {int hs_phy_irq; int dp_hs_phy_irq; int dm_hs_phy_irq; int ss_phy_irq; int dev; struct dwc3_acpi_pdata* acpi_pdata; } ;
struct dwc3_acpi_pdata {int hs_phy_irq_index; int dp_hs_phy_irq_index; int dm_hs_phy_irq_index; int ss_phy_irq_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int *,int ,int,char*,struct dwc3_qcom*) ;
 int FUNC_2 (struct platform_device*,char*,int) ;
 int FUNC_3 (int,int ) ;
 struct dwc3_qcom* FUNC_4 (struct platform_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct dwc3_qcom *VAR_5 = FUNC_4(VAR_4);
 const struct dwc3_acpi_pdata *VAR_6 = VAR_5->acpi_pdata;
 int VAR_7, VAR_8;
 VAR_7 = FUNC_2(VAR_4, "hs_phy_irq",
    VAR_6 ? VAR_6->hs_phy_irq_index : -1);
 if (VAR_7 > 0) {

  FUNC_3(VAR_7, VAR_2);
  VAR_8 = FUNC_1(VAR_5->dev, VAR_7, ((void*)0),
     VAR_3,
     VAR_1 | VAR_0,
     "qcom_dwc3 HS", VAR_5);
  if (VAR_8) {
   FUNC_0(VAR_5->dev, "hs_phy_irq failed: %d\n", VAR_8);
   return VAR_8;
  }
  VAR_5->hs_phy_irq = VAR_7;
 }

 VAR_7 = FUNC_2(VAR_4, "dp_hs_phy_irq",
    VAR_6 ? VAR_6->dp_hs_phy_irq_index : -1);
 if (VAR_7 > 0) {
  FUNC_3(VAR_7, VAR_2);
  VAR_8 = FUNC_1(VAR_5->dev, VAR_7, ((void*)0),
     VAR_3,
     VAR_1 | VAR_0,
     "qcom_dwc3 DP_HS", VAR_5);
  if (VAR_8) {
   FUNC_0(VAR_5->dev, "dp_hs_phy_irq failed: %d\n", VAR_8);
   return VAR_8;
  }
  VAR_5->dp_hs_phy_irq = VAR_7;
 }

 VAR_7 = FUNC_2(VAR_4, "dm_hs_phy_irq",
    VAR_6 ? VAR_6->dm_hs_phy_irq_index : -1);
 if (VAR_7 > 0) {
  FUNC_3(VAR_7, VAR_2);
  VAR_8 = FUNC_1(VAR_5->dev, VAR_7, ((void*)0),
     VAR_3,
     VAR_1 | VAR_0,
     "qcom_dwc3 DM_HS", VAR_5);
  if (VAR_8) {
   FUNC_0(VAR_5->dev, "dm_hs_phy_irq failed: %d\n", VAR_8);
   return VAR_8;
  }
  VAR_5->dm_hs_phy_irq = VAR_7;
 }

 VAR_7 = FUNC_2(VAR_4, "ss_phy_irq",
    VAR_6 ? VAR_6->ss_phy_irq_index : -1);
 if (VAR_7 > 0) {
  FUNC_3(VAR_7, VAR_2);
  VAR_8 = FUNC_1(VAR_5->dev, VAR_7, ((void*)0),
     VAR_3,
     VAR_1 | VAR_0,
     "qcom_dwc3 SS", VAR_5);
  if (VAR_8) {
   FUNC_0(VAR_5->dev, "ss_phy_irq failed: %d\n", VAR_8);
   return VAR_8;
  }
  VAR_5->ss_phy_irq = VAR_7;
 }

 return 0;
}
