
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct lp8788_charger {int charger_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct platform_device*,struct lp8788_charger*) ;
 int FUNC_2 (struct lp8788_charger*) ;
 int FUNC_3 (struct lp8788_charger*) ;
 struct lp8788_charger* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct lp8788_charger *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(&VAR_1->charger_work);
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);

 return 0;
}
