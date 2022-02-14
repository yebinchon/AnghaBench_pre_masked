
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx6_pcie {int apps_reset; int iomuxc_gpr; TYPE_1__* drvdata; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int variant; } ;




 int VAR_0 ;



 int VAR_1 ;
 struct imx6_pcie* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2)
{
 struct imx6_pcie *VAR_3 = FUNC_0(VAR_2);

 switch (VAR_3->drvdata->variant) {
 case 132:
 case 130:
 case 131:
  FUNC_1(VAR_3->iomuxc_gpr, VAR_1,
       VAR_0,
       VAR_0);
  break;
 case 129:
 case 128:
  FUNC_2(VAR_3->apps_reset);
  break;
 }
}
