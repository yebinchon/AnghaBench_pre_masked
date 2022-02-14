
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_charger {int ac_charger_attached_work; int charger_wq; int parent; int charger_attached_mutex; int ac_work; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct ab8500_charger *VAR_4 = VAR_3;

 FUNC_0(VAR_4->dev, "Main charger plugged\n");
 FUNC_5(VAR_4->charger_wq, &VAR_4->ac_work);

 FUNC_2(&VAR_4->charger_attached_mutex);
 FUNC_3(&VAR_4->charger_attached_mutex);

 if (FUNC_1(VAR_4->parent))
  FUNC_4(VAR_4->charger_wq,
      &VAR_4->ac_charger_attached_work,
      VAR_0);
 return VAR_1;
}
