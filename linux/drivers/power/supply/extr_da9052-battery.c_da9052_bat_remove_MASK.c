
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct da9052_battery {int psy; int da9052; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct da9052_battery*) ;
 struct da9052_battery* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 int VAR_3;
 struct da9052_battery *VAR_4 = FUNC_2(VAR_2);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  FUNC_1(VAR_4->da9052, VAR_0[VAR_3], VAR_4);

 FUNC_3(VAR_4->psy);

 return 0;
}
