
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abx500_chargalg {int maintenance_chg; int chargalg_psy; int chargalg_wd_work; int charge_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct abx500_chargalg*,int,int ,int ) ;
 int FUNC_1 (struct abx500_chargalg*) ;
 int FUNC_2 (struct abx500_chargalg*) ;
 int FUNC_3 (struct abx500_chargalg*,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct abx500_chargalg *VAR_1)
{
 FUNC_0(VAR_1, 0, 0, 0);
 FUNC_3(VAR_1, 0, 0, 0);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 VAR_1->charge_status = VAR_0;
 VAR_1->maintenance_chg = 0;
 FUNC_4(&VAR_1->chargalg_wd_work);
 FUNC_5(VAR_1->chargalg_psy);
}
