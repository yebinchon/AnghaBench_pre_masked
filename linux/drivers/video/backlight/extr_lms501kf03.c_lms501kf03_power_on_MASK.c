
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lms501kf03 {int dev; int ld; struct lcd_platform_data* lcd_pd; } ;
struct lcd_platform_data {int reset_delay; int (* reset ) (int ) ;int power_on_delay; int (* power_on ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lms501kf03*) ;
 int FUNC_2 (struct lms501kf03*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct lms501kf03 *VAR_1)
{
 int VAR_2 = 0;
 struct lcd_platform_data *VAR_3;

 VAR_3 = VAR_1->lcd_pd;

 if (!VAR_3->power_on) {
  FUNC_0(VAR_1->dev, "power_on is NULL.\n");
  return -VAR_0;
 }

 VAR_3->power_on(VAR_1->ld, 1);
 FUNC_3(VAR_3->power_on_delay);

 if (!VAR_3->reset) {
  FUNC_0(VAR_1->dev, "reset is NULL.\n");
  return -VAR_0;
 }

 VAR_3->reset(VAR_1->ld);
 FUNC_3(VAR_3->reset_delay);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "failed to initialize ldi.\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "failed to enable ldi.\n");
  return VAR_2;
 }

 return 0;
}
