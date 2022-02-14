
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charger_manager {scalar_t__ emergency_stop; } ;


 int VAR_0 ;
 int FUNC_0 (struct charger_manager*,int) ;

__attribute__((used)) static int FUNC_1(struct charger_manager *VAR_1)
{
 int VAR_2;

 if (VAR_1->emergency_stop)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1, 0);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_1, 1);
}
