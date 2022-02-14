
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct charger_manager {int fullbatt_vchk_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct charger_manager* FUNC_5 (struct device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5)
{
 struct charger_manager *VAR_6 = FUNC_5(VAR_5);

 if (FUNC_3())
  return -VAR_0;

 if (!VAR_2)
  VAR_2 = 1;

 VAR_3 = FUNC_4();

 if (VAR_3) {
  FUNC_2(&VAR_4);
  FUNC_1(&VAR_1);
  FUNC_0(&VAR_6->fullbatt_vchk_work);
 }

 return 0;
}
