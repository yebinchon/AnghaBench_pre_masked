
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imx6_pcie {scalar_t__ vpcie; int iomuxc_gpr; int apps_reset; int pciephy_reset; TYPE_2__* drvdata; TYPE_1__* pci; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int variant; } ;
struct TYPE_3__ {struct device* dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct imx6_pcie *VAR_8)
{
 struct device *VAR_9 = VAR_8->pci->dev;

 switch (VAR_8->drvdata->variant) {
 case 129:
 case 128:
  FUNC_4(VAR_8->pciephy_reset);
  FUNC_4(VAR_8->apps_reset);
  break;
 case 130:
  FUNC_1(VAR_8->iomuxc_gpr, VAR_6,
       VAR_3,
       VAR_3);

  FUNC_1(VAR_8->iomuxc_gpr, VAR_7,
       VAR_4,
       VAR_4);
  break;
 case 131:
  FUNC_1(VAR_8->iomuxc_gpr, VAR_5,
       VAR_1,
       VAR_1);
  break;
 case 132:
  FUNC_1(VAR_8->iomuxc_gpr, VAR_5,
       VAR_2, 1 << 18);
  FUNC_1(VAR_8->iomuxc_gpr, VAR_5,
       VAR_0, 0 << 16);
  break;
 }

 if (VAR_8->vpcie && FUNC_3(VAR_8->vpcie) > 0) {
  int VAR_10 = FUNC_2(VAR_8->vpcie);

  if (VAR_10)
   FUNC_0(VAR_9, "failed to disable vpcie regulator: %d\n",
    VAR_10);
 }
}
