
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;
struct artpec6_pcie {scalar_t__ phy_base; struct dw_pcie* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct artpec6_pcie*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct artpec6_pcie *VAR_5)
{
 struct dw_pcie *VAR_6 = VAR_5->pci;
 struct device *VAR_7 = VAR_6->dev;
 u32 VAR_8;
 unsigned int VAR_9;

 VAR_9 = 50;
 do {
  FUNC_3(1000, 2000);
  VAR_8 = FUNC_0(VAR_5, VAR_0);
  VAR_9--;
 } while (VAR_9 &&
  (VAR_8 & (VAR_2 | VAR_1)));
 if (!VAR_9)
  FUNC_1(VAR_7, "PCIe clock manager did not leave idle state\n");

 VAR_9 = 50;
 do {
  FUNC_3(1000, 2000);
  VAR_8 = FUNC_2(VAR_5->phy_base + VAR_4);
  VAR_9--;
 } while (VAR_9 && !(VAR_8 & VAR_3));
 if (!VAR_9)
  FUNC_1(VAR_7, "PHY PLL did not lock\n");
}
