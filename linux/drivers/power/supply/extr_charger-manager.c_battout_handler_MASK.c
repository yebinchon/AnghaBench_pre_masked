
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charger_manager {int dev; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct charger_manager*) ;
 int FUNC_3 (struct charger_manager*,char*) ;

__attribute__((used)) static void FUNC_4(struct charger_manager *VAR_3)
{
 if (VAR_1)
  FUNC_1(VAR_3->dev, 1);

 if (!FUNC_2(VAR_3)) {
  FUNC_0(VAR_3->dev, "Battery Pulled Out!\n");
  FUNC_3(VAR_3, VAR_2[VAR_0]);
 } else {
  FUNC_3(VAR_3, "Battery Reinserted?");
 }
}
