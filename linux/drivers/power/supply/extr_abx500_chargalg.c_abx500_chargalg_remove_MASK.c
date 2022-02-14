
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct abx500_chargalg {int chargalg_psy; int chargalg_wq; int chargalg_work; int chargalg_wd_work; int chargalg_periodic_work; int maintenance_timer; int safety_timer; } ;


 int FUNC_0 (struct abx500_chargalg*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct abx500_chargalg* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct abx500_chargalg *VAR_1 = FUNC_5(VAR_0);


 FUNC_0(VAR_1);

 FUNC_4(&VAR_1->safety_timer);
 FUNC_4(&VAR_1->maintenance_timer);

 FUNC_1(&VAR_1->chargalg_periodic_work);
 FUNC_1(&VAR_1->chargalg_wd_work);
 FUNC_2(&VAR_1->chargalg_work);


 FUNC_3(VAR_1->chargalg_wq);

 FUNC_6(VAR_1->chargalg_psy);

 return 0;
}
