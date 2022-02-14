
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_power_info {int (* set_charger ) (int) ;int gpm; struct max8925_chip* chip; } ;
struct max8925_chip {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct max8925_power_info *VAR_1, int VAR_2)
{
 struct max8925_chip *VAR_3 = VAR_1->chip;
 if (VAR_2) {

  if (VAR_1->set_charger)
   VAR_1->set_charger(1);

  FUNC_1(VAR_1->gpm, VAR_0, 1 << 7, 0);
 } else {

  FUNC_1(VAR_1->gpm, VAR_0, 1 << 7, 1 << 7);
  if (VAR_1->set_charger)
   VAR_1->set_charger(0);
 }
 FUNC_0(VAR_3->dev, "%s\n", (VAR_2) ? "Enable charger"
  : "Disable charger");
 return 0;
}
