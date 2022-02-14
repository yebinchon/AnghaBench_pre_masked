
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lcd_mode; int panel_id; int display_center; } ;
struct viafb_ioctl_setting {TYPE_1__ lcd_attributes; int second_dev_ver_res; int second_dev_hor_res; int first_dev_ver_res; int first_dev_hor_res; int second_dev_refresh; int first_dev_refresh; int second_dev_bpp; int first_dev_bpp; int primary_device; int samm_status; int device_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_1(struct viafb_ioctl_setting
 *VAR_20)
{


 if (VAR_4 == 1)
  VAR_20->device_status = VAR_0;
 if (VAR_5 == 1)
  VAR_20->device_status |= VAR_1;
 if (VAR_7 == 1)
  VAR_20->device_status |= VAR_3;
 if (VAR_6 == 1)
  VAR_20->device_status |= VAR_2;

 VAR_20->samm_status = VAR_8;
 VAR_20->primary_device = FUNC_0();

 VAR_20->first_dev_bpp = VAR_9;
 VAR_20->second_dev_bpp = VAR_10;

 VAR_20->first_dev_refresh = VAR_16;
 VAR_20->second_dev_refresh = VAR_17;

 VAR_20->first_dev_hor_res = VAR_11;
 VAR_20->first_dev_ver_res = VAR_12;
 VAR_20->second_dev_hor_res = VAR_18;
 VAR_20->second_dev_ver_res = VAR_19;


 VAR_20->lcd_attributes.display_center = VAR_13;
 VAR_20->lcd_attributes.panel_id = VAR_15;
 VAR_20->lcd_attributes.lcd_mode = VAR_14;
}
