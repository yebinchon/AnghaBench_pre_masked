
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_battery {int da9052; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct da9052_battery *VAR_1, int *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->da9052, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = FUNC_1(VAR_3);

 return 0;
}
