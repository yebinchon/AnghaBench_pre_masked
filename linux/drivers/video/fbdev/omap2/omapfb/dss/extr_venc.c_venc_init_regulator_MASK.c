
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct TYPE_6__ {scalar_t__ of_node; } ;
struct TYPE_5__ {struct regulator* vdda_dac_reg; TYPE_1__* pdev; } ;
struct TYPE_4__ {TYPE_3__ dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 struct regulator* FUNC_3 (TYPE_3__*,char*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct regulator *VAR_2;

 if (VAR_1.vdda_dac_reg != ((void*)0))
  return 0;

 if (VAR_1.pdev->dev.of_node)
  VAR_2 = FUNC_3(&VAR_1.pdev->dev, "vdda");
 else
  VAR_2 = FUNC_3(&VAR_1.pdev->dev, "vdda_dac");

 if (FUNC_1(VAR_2)) {
  if (FUNC_2(VAR_2) != -VAR_0)
   FUNC_0("can't get VDDA_DAC regulator\n");
  return FUNC_2(VAR_2);
 }

 VAR_1.vdda_dac_reg = VAR_2;

 return 0;
}
