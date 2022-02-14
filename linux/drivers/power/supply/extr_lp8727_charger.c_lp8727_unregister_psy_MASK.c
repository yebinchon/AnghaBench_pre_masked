
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8727_psy {int batt; int usb; int ac; } ;
struct lp8727_chg {struct lp8727_psy* psy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct lp8727_chg *VAR_0)
{
 struct lp8727_psy *VAR_1 = VAR_0->psy;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1->ac);
 FUNC_0(VAR_1->usb);
 FUNC_0(VAR_1->batt);
}
