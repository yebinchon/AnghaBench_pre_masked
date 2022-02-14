
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply {int psy; scalar_t__ registered; int work; scalar_t__ update_interval; } ;


 int FUNC_0 (struct gb_power_supply*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gb_power_supply *VAR_0)
{
 VAR_0->update_interval = 0;

 FUNC_1(&VAR_0->work);

 if (VAR_0->registered)
  FUNC_2(VAR_0->psy);

 FUNC_0(VAR_0);
}
