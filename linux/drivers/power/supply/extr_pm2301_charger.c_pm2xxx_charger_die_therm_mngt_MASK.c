
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm2xxx_charger {int check_main_thermal_prot_work; int charger_wq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct pm2xxx_charger *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->charger_wq, &VAR_0->check_main_thermal_prot_work);

 return 0;
}
