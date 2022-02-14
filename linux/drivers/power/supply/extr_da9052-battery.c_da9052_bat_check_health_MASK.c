
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_battery {int health; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct da9052_battery*,int*) ;
 int FUNC_1 (struct da9052_battery*,int*) ;

__attribute__((used)) static int FUNC_2(struct da9052_battery *VAR_5, int *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_5, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_8) {
  VAR_5->health = VAR_4;
  return 0;
 }

 if (VAR_5->health != VAR_3) {
  VAR_7 = FUNC_1(VAR_5, &VAR_9);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_9 < VAR_0)
   VAR_5->health = VAR_1;
  else
   VAR_5->health = VAR_2;
 }

 *VAR_6 = VAR_5->health;

 return 0;
}
