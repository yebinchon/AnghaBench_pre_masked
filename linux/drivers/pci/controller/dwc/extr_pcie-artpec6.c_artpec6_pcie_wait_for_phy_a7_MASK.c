
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;
struct artpec6_pcie {scalar_t__ phy_base; struct dw_pcie* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct artpec6_pcie*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct artpec6_pcie *VAR_7)
{
 struct dw_pcie *VAR_8 = VAR_7->pci;
 struct device *VAR_9 = VAR_8->dev;
 u32 VAR_10;
 u16 VAR_11, VAR_12;
 unsigned int VAR_13;

 VAR_13 = 50;
 do {
  FUNC_3(1000, 2000);
  VAR_10 = FUNC_0(VAR_7, VAR_0);
  VAR_13--;
 } while (VAR_13 &&
  (VAR_10 & (VAR_2 | VAR_1)));
 if (!VAR_13)
  FUNC_1(VAR_9, "PCIe clock manager did not leave idle state\n");

 VAR_13 = 50;
 do {
  FUNC_3(1000, 2000);
  VAR_11 = FUNC_2(VAR_7->phy_base + VAR_5);
  VAR_12 = FUNC_2(VAR_7->phy_base + VAR_3);
  VAR_13--;
 } while (VAR_13 && ((VAR_11 & VAR_6) ||
    (VAR_12 & VAR_4)));
 if (!VAR_13)
  FUNC_1(VAR_9, "PHY did not enter Pn state\n");
}
