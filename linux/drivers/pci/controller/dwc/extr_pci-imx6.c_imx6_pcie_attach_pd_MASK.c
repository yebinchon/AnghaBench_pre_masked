
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx6_pcie {void* pd_pcie_phy; void* pd_pcie; } ;
struct device_link {int dummy; } ;
struct device {scalar_t__ pm_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 struct imx6_pcie* FUNC_3 (struct device*) ;
 void* FUNC_4 (struct device*,char*) ;
 struct device_link* FUNC_5 (struct device*,void*,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4)
{
 struct imx6_pcie *VAR_5 = FUNC_3(VAR_4);
 struct device_link *VAR_6;


 if (VAR_4->pm_domain)
  return 0;

 VAR_5->pd_pcie = FUNC_4(VAR_4, "pcie");
 if (FUNC_0(VAR_5->pd_pcie))
  return FUNC_1(VAR_5->pd_pcie);

 if (!VAR_5->pd_pcie)
  return 0;
 VAR_6 = FUNC_5(VAR_4, VAR_5->pd_pcie,
   VAR_2 |
   VAR_0 |
   VAR_1);
 if (!VAR_6) {
  FUNC_2(VAR_4, "Failed to add device_link to pcie pd.\n");
  return -VAR_3;
 }

 VAR_5->pd_pcie_phy = FUNC_4(VAR_4, "pcie_phy");
 if (FUNC_0(VAR_5->pd_pcie_phy))
  return FUNC_1(VAR_5->pd_pcie_phy);

 VAR_6 = FUNC_5(VAR_4, VAR_5->pd_pcie_phy,
   VAR_2 |
   VAR_0 |
   VAR_1);
 if (!VAR_6) {
  FUNC_2(VAR_4, "Failed to add device_link to pcie_phy pd.\n");
  return -VAR_3;
 }

 return 0;
}
