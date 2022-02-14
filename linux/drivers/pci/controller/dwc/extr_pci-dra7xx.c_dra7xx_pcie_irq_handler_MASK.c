
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {struct dw_pcie_ep ep; struct device* dev; } ;
struct dra7xx_pcie {scalar_t__ mode; struct dw_pcie* pci; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct dra7xx_pcie*,int ) ;
 int FUNC_2 (struct dra7xx_pcie*,int ,int) ;
 int FUNC_3 (struct dw_pcie_ep*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_16, void *VAR_17)
{
 struct dra7xx_pcie *VAR_18 = VAR_17;
 struct dw_pcie *VAR_19 = VAR_18->pci;
 struct device *VAR_20 = VAR_19->dev;
 struct dw_pcie_ep *VAR_21 = &VAR_19->ep;
 u32 VAR_22;

 VAR_22 = FUNC_1(VAR_18, VAR_12);

 if (VAR_22 & VAR_8)
  FUNC_0(VAR_20, "System Error\n");

 if (VAR_22 & VAR_6)
  FUNC_0(VAR_20, "Fatal Error\n");

 if (VAR_22 & VAR_7)
  FUNC_0(VAR_20, "Non Fatal Error\n");

 if (VAR_22 & VAR_4)
  FUNC_0(VAR_20, "Correctable Error\n");

 if (VAR_22 & VAR_3)
  FUNC_0(VAR_20, "AXI tag lookup fatal Error\n");

 if (VAR_22 & VAR_5)
  FUNC_0(VAR_20, "ECRC Error\n");

 if (VAR_22 & VAR_14)
  FUNC_0(VAR_20,
   "Power Management Event Turn-Off message received\n");

 if (VAR_22 & VAR_13)
  FUNC_0(VAR_20,
   "Power Management Turn-Off Ack message received\n");

 if (VAR_22 & VAR_15)
  FUNC_0(VAR_20, "PM Power Management Event message received\n");

 if (VAR_22 & VAR_10)
  FUNC_0(VAR_20, "Link Request Reset\n");

 if (VAR_22 & VAR_11) {
  if (VAR_18->mode == VAR_2)
   FUNC_3(VAR_21);
  FUNC_0(VAR_20, "Link-up state change\n");
 }

 if (VAR_22 & VAR_0)
  FUNC_0(VAR_20, "CFG 'Bus Master Enable' change\n");

 if (VAR_22 & VAR_1)
  FUNC_0(VAR_20, "CFG 'Memory Space Enable' change\n");

 FUNC_2(VAR_18, VAR_12, VAR_22);

 return VAR_9;
}
