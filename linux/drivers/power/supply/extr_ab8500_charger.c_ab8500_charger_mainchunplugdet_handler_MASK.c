
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_charger {int charger_attached_mutex; int ac_charger_attached_work; int ac_work; int charger_wq; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct ab8500_charger *VAR_3 = VAR_2;

 FUNC_1(VAR_3->dev, "Main charger unplugged\n");
 FUNC_4(VAR_3->charger_wq, &VAR_3->ac_work);

 FUNC_0(&VAR_3->ac_charger_attached_work);
 FUNC_2(&VAR_3->charger_attached_mutex);
 FUNC_3(&VAR_3->charger_attached_mutex);

 return VAR_0;
}
