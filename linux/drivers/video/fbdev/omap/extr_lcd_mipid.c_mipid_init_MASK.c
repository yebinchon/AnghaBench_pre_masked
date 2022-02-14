
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_device {int dummy; } ;
struct mipid_device {int saved_bklight_level; scalar_t__ enabled; int mutex; int esd_work; struct omapfb_device* fbdev; } ;
struct lcd_panel {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mipid_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct lcd_panel*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct mipid_device*) ;
 struct mipid_device* FUNC_5 (struct lcd_panel*) ;

__attribute__((used)) static int FUNC_6(struct lcd_panel *VAR_1,
       struct omapfb_device *VAR_2)
{
 struct mipid_device *VAR_3 = FUNC_5(VAR_1);

 VAR_3->fbdev = VAR_2;
 FUNC_0(&VAR_3->esd_work, VAR_0);
 FUNC_3(&VAR_3->mutex);

 VAR_3->enabled = FUNC_4(VAR_3);

 if (VAR_3->enabled)
  FUNC_1(VAR_3);
 else
  VAR_3->saved_bklight_level = FUNC_2(VAR_1);

 return 0;
}
