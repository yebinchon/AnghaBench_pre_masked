
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* lvds_setting_info; TYPE_2__* lvds_setting_info2; } ;
struct TYPE_5__ {int lcd_mode; int display_method; } ;
struct TYPE_4__ {int lcd_mode; int display_method; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 TYPE_3__* VAR_3 ;

void FUNC_5(int VAR_4)
{
 FUNC_3(&VAR_0, VAR_4);
 FUNC_0(VAR_4);
 FUNC_2();
 FUNC_1();


 FUNC_4();

 VAR_3->lvds_setting_info->display_method = VAR_1;
 VAR_3->lvds_setting_info->lcd_mode = VAR_2;
 VAR_3->lvds_setting_info2->display_method =
  VAR_3->lvds_setting_info->display_method;
 VAR_3->lvds_setting_info2->lcd_mode =
  VAR_3->lvds_setting_info->lcd_mode;
}
