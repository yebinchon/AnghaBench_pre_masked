
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_platform_data {int (* power_on ) (int ,int ) ;int power_off_delay; } ;
struct ams369fg06 {int ld; int dev; struct lcd_platform_data* lcd_pd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ams369fg06*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ams369fg06 *VAR_1)
{
 int VAR_2;
 struct lcd_platform_data *VAR_3;

 VAR_3 = VAR_1->lcd_pd;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_1->dev, "lcd setting failed.\n");
  return -VAR_0;
 }

 FUNC_2(VAR_3->power_off_delay);

 if (VAR_3->power_on)
  VAR_3->power_on(VAR_1->ld, 0);

 return 0;
}
