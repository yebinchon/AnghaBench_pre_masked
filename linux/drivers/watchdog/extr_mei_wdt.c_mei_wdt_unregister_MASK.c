
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_wdt {int reg_lock; int wdd; } ;


 scalar_t__ FUNC_0 (struct mei_wdt*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mei_wdt *VAR_0)
{
 FUNC_2(&VAR_0->reg_lock);

 if (FUNC_0(VAR_0)) {
  FUNC_5(&VAR_0->wdd);
  FUNC_4(&VAR_0->wdd, ((void*)0));
  FUNC_1(&VAR_0->wdd, 0, sizeof(VAR_0->wdd));
 }

 FUNC_3(&VAR_0->reg_lock);
}
