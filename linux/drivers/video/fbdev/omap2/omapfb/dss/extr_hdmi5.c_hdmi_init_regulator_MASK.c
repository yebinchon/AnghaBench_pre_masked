
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct TYPE_4__ {struct regulator* vdda_reg; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 struct regulator* FUNC_3 (int *,char*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct regulator *VAR_1;

 if (VAR_0.vdda_reg != ((void*)0))
  return 0;

 VAR_1 = FUNC_3(&VAR_0.pdev->dev, "vdda");
 if (FUNC_1(VAR_1)) {
  FUNC_0("can't get VDDA regulator\n");
  return FUNC_2(VAR_1);
 }

 VAR_0.vdda_reg = VAR_1;

 return 0;
}
