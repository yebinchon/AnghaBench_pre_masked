
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx6_pcie {int controller_id; int iomuxc_gpr; TYPE_1__* drvdata; } ;
struct TYPE_2__ {scalar_t__ variant; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct imx6_pcie *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 if (VAR_5->drvdata->variant == VAR_1 &&
     VAR_5->controller_id == 1) {
  VAR_6 = VAR_2;
  VAR_7 = FUNC_0(VAR_2,
        VAR_4);
 } else {
  VAR_6 = VAR_0;
  VAR_7 = FUNC_0(VAR_0,
      VAR_4);
 }

 FUNC_1(VAR_5->iomuxc_gpr, VAR_3, VAR_6, VAR_7);
}
