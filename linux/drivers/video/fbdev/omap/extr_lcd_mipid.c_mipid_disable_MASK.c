
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipid_device {int mutex; scalar_t__ enabled; int saved_bklight_level; } ;
struct lcd_panel {int dummy; } ;


 int FUNC_0 (struct mipid_device*) ;
 int FUNC_1 (struct lcd_panel*) ;
 int FUNC_2 (struct lcd_panel*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mipid_device*,int ) ;
 int FUNC_6 (struct mipid_device*,int) ;
 struct mipid_device* FUNC_7 (struct lcd_panel*) ;

__attribute__((used)) static void FUNC_8(struct lcd_panel *VAR_0)
{
 struct mipid_device *VAR_1 = FUNC_7(VAR_0);





 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->mutex);

 if (!VAR_1->enabled) {
  FUNC_4(&VAR_1->mutex);
  return;
 }
 VAR_1->saved_bklight_level = FUNC_1(VAR_0);
 FUNC_2(VAR_0, 0);
 FUNC_5(VAR_1, 0);
 FUNC_6(VAR_1, 1);
 VAR_1->enabled = 0;

 FUNC_4(&VAR_1->mutex);
}
