
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx6_pcie {int iomuxc_gpr; int pcie_aux; int pcie_inbound_axi; TYPE_1__* drvdata; struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int variant; } ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 unsigned int FUNC_2 (struct imx6_pcie*) ;
 int FUNC_3 (int ,unsigned int,int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct imx6_pcie *VAR_7)
{
 struct dw_pcie *VAR_8 = VAR_7->pci;
 struct device *VAR_9 = VAR_8->dev;
 unsigned int VAR_10;
 int VAR_11 = 0;

 switch (VAR_7->drvdata->variant) {
 case 130:
  VAR_11 = FUNC_0(VAR_7->pcie_inbound_axi);
  if (VAR_11) {
   FUNC_1(VAR_9, "unable to enable pcie_axi clock\n");
   break;
  }

  FUNC_3(VAR_7->iomuxc_gpr, VAR_6,
       VAR_2, 0);
  break;
 case 131:
 case 132:

  FUNC_3(VAR_7->iomuxc_gpr, VAR_5,
       VAR_1, 0 << 18);






  FUNC_4(10, 100);
  FUNC_3(VAR_7->iomuxc_gpr, VAR_5,
       VAR_0, 1 << 16);
  break;
 case 129:
  break;
 case 128:
  VAR_11 = FUNC_0(VAR_7->pcie_aux);
  if (VAR_11) {
   FUNC_1(VAR_9, "unable to enable pcie_aux clock\n");
   break;
  }

  VAR_10 = FUNC_2(VAR_7);




  FUNC_3(VAR_7->iomuxc_gpr, VAR_10,
       VAR_3,
       0);
  FUNC_3(VAR_7->iomuxc_gpr, VAR_10,
       VAR_4,
       VAR_4);
  break;
 }

 return VAR_11;
}
