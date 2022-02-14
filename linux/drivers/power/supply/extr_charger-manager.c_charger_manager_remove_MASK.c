
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct charger_regulator {int num_cables; int consumer; struct charger_cable* cables; } ;
struct charger_manager {int charger_psy; int entry; struct charger_desc* desc; } ;
struct charger_desc {int num_charger_regulators; struct charger_regulator* charger_regulators; } ;
struct charger_cable {int extcon_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct charger_manager* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (struct charger_manager*,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 struct charger_manager *VAR_4 = FUNC_6(VAR_3);
 struct charger_desc *VAR_5 = VAR_4->desc;
 int VAR_6 = 0;
 int VAR_7 = 0;


 FUNC_4(&VAR_0);
 FUNC_3(&VAR_4->entry);
 FUNC_5(&VAR_0);

 FUNC_1(&VAR_2);
 FUNC_0(&VAR_1);

 for (VAR_6 = 0 ; VAR_6 < VAR_5->num_charger_regulators ; VAR_6++) {
  struct charger_regulator *VAR_8
    = &VAR_5->charger_regulators[VAR_6];
  for (VAR_7 = 0 ; VAR_7 < VAR_8->num_cables ; VAR_7++) {
   struct charger_cable *VAR_9 = &VAR_8->cables[VAR_7];
   FUNC_2(&VAR_9->extcon_dev);
  }
 }

 for (VAR_6 = 0 ; VAR_6 < VAR_5->num_charger_regulators ; VAR_6++)
  FUNC_8(VAR_5->charger_regulators[VAR_6].consumer);

 FUNC_7(VAR_4->charger_psy);

 FUNC_9(VAR_4, 0);

 return 0;
}
