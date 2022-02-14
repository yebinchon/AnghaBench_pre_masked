
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx6_pcie {int controller_id; TYPE_1__* drvdata; } ;
struct TYPE_2__ {scalar_t__ variant; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(const struct imx6_pcie *VAR_3)
{
 FUNC_0(VAR_3->drvdata->variant != VAR_0);
 return VAR_3->controller_id == 1 ? VAR_2 : VAR_1;
}
