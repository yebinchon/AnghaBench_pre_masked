
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* lvds_setting_info; TYPE_1__* lvds_setting_info2; } ;
struct TYPE_5__ {scalar_t__ device_lcd_dualedge; } ;
struct TYPE_4__ {scalar_t__ device_lcd_dualedge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 TYPE_3__* VAR_7 ;

__attribute__((used)) static void FUNC_1(void)
{


 if (VAR_5 &&
  VAR_7->lvds_setting_info2->device_lcd_dualedge) {


  FUNC_0(VAR_2, VAR_3, 0x20, VAR_0 + VAR_1);
 } else if (VAR_6 && VAR_4) {


  FUNC_0(VAR_2, VAR_3, 0x10, VAR_0 + VAR_1);
 } else if (VAR_4) {

  FUNC_0(VAR_2, VAR_3, 0x30, VAR_0 + VAR_1);
 } else if (VAR_6) {
  if (VAR_7->lvds_setting_info->device_lcd_dualedge) {


   FUNC_0(VAR_2, VAR_3, 0x20, VAR_0 + VAR_1);
  } else {

   FUNC_0(VAR_2, VAR_3, 0x00, VAR_0 + VAR_1);
  }
 }
}
