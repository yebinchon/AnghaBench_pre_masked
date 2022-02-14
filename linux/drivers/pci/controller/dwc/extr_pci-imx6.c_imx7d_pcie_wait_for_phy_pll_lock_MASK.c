
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imx6_pcie {int iomuxc_gpr; TYPE_1__* pci; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct imx6_pcie *VAR_4)
{
 u32 VAR_5;
 struct device *VAR_6 = VAR_4->pci->dev;

 if (FUNC_1(VAR_4->iomuxc_gpr,
         VAR_1, VAR_5,
         VAR_5 & VAR_0,
         VAR_3,
         VAR_2))
  FUNC_0(VAR_6, "PCIe PLL lock timeout\n");
}
