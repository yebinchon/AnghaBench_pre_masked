
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_charger_platform_data {scalar_t__ charger_event; } ;
struct lp8788_charger {int charger_work; int battery; int charger; struct lp8788_charger_platform_data* pdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct lp8788_charger*,int,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct lp8788_charger *VAR_4 = VAR_3;
 struct lp8788_charger_platform_data *VAR_5 = VAR_4->pdata;
 int VAR_6 = -1;

 if (!FUNC_0(VAR_4, VAR_2, &VAR_6))
  return VAR_1;

 switch (VAR_6) {
 case 131:
 case 130:
 case 129:
 case 132:
 case 128:
  FUNC_1(VAR_4->charger);
  FUNC_1(VAR_4->battery);
  break;
 default:
  break;
 }


 if (!VAR_5)
  goto irq_handled;

 if (VAR_5->charger_event && VAR_6 == 131)
  FUNC_2(&VAR_4->charger_work);

irq_handled:
 return VAR_0;
}
