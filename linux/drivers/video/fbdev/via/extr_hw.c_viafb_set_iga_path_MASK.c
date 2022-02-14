
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {TYPE_8__* shared; TYPE_7__* chip_info; TYPE_5__* lvds_setting_info2; TYPE_3__* lvds_setting_info; TYPE_1__* tmds_setting_info; } ;
struct TYPE_17__ {int iga1_devices; int iga2_devices; } ;
struct TYPE_15__ {int output_interface; } ;
struct TYPE_13__ {int output_interface; } ;
struct TYPE_11__ {int output_interface; } ;
struct TYPE_16__ {scalar_t__ gfx_chip_name; TYPE_6__ lvds_chip_info2; TYPE_4__ lvds_chip_info; TYPE_2__ tmds_chip_info; } ;
struct TYPE_14__ {int iga_path; } ;
struct TYPE_12__ {int iga_path; } ;
struct TYPE_10__ {int iga_path; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_9__* VAR_17 ;

void FUNC_3(void)
{
 int VAR_18 = 0;

 if (VAR_14 == 1) {
  if (VAR_10) {
   if (VAR_16 == VAR_0)
    VAR_18 = VAR_2;
   else
    VAR_18 = VAR_3;
  }

  if (VAR_11) {
   if (VAR_16 == VAR_1)
    VAR_17->tmds_setting_info->iga_path = VAR_2;
   else
    VAR_17->tmds_setting_info->iga_path = VAR_3;
  }

  if (VAR_13) {
   if (VAR_16 == VAR_5) {
    if (VAR_15 &&
     (VAR_17->chip_info->gfx_chip_name ==
     VAR_6)) {
     VAR_17->
     lvds_setting_info->iga_path = VAR_3;
     VAR_18 = VAR_2;
     VAR_17->
     tmds_setting_info->iga_path = VAR_2;
    } else
     VAR_17->
     lvds_setting_info->iga_path = VAR_2;
   } else {
    VAR_17->lvds_setting_info->iga_path = VAR_3;
   }
  }
  if (VAR_12) {
   if (VAR_4 == VAR_16)
    VAR_17->lvds_setting_info2->iga_path = VAR_2;
   else
    VAR_17->lvds_setting_info2->iga_path = VAR_3;
  }
 } else {
  VAR_14 = 0;

  if (VAR_10 && VAR_13) {
   VAR_18 = VAR_2;
   VAR_17->lvds_setting_info->iga_path = VAR_3;
  } else if (VAR_10 && VAR_11) {
   VAR_18 = VAR_2;
   VAR_17->tmds_setting_info->iga_path = VAR_3;
  } else if (VAR_13 && VAR_11) {
   VAR_17->tmds_setting_info->iga_path = VAR_2;
   VAR_17->lvds_setting_info->iga_path = VAR_3;
  } else if (VAR_13 && VAR_12) {
   VAR_17->lvds_setting_info->iga_path = VAR_3;
   VAR_17->lvds_setting_info2->iga_path = VAR_3;
  } else if (VAR_10) {
   VAR_18 = VAR_2;
  } else if (VAR_13) {
   VAR_17->lvds_setting_info->iga_path = VAR_3;
  } else if (VAR_11) {
   VAR_17->tmds_setting_info->iga_path = VAR_2;
  }
 }

 VAR_17->shared->iga1_devices = 0;
 VAR_17->shared->iga2_devices = 0;
 if (VAR_10) {
  if (VAR_18 == VAR_2)
   VAR_17->shared->iga1_devices |= VAR_7;
  else
   VAR_17->shared->iga2_devices |= VAR_7;
 }

 if (VAR_11) {
  if (VAR_17->tmds_setting_info->iga_path == VAR_2)
   VAR_17->shared->iga1_devices |= FUNC_0(
    VAR_17->chip_info->
    tmds_chip_info.output_interface);
  else
   VAR_17->shared->iga2_devices |= FUNC_0(
    VAR_17->chip_info->
    tmds_chip_info.output_interface);
 }

 if (VAR_13) {
  if (VAR_17->lvds_setting_info->iga_path == VAR_2)
   VAR_17->shared->iga1_devices |= FUNC_1(
    VAR_17->chip_info->
    lvds_chip_info.output_interface);
  else
   VAR_17->shared->iga2_devices |= FUNC_1(
    VAR_17->chip_info->
    lvds_chip_info.output_interface);
 }

 if (VAR_12) {
  if (VAR_17->lvds_setting_info2->iga_path == VAR_2)
   VAR_17->shared->iga1_devices |= FUNC_1(
    VAR_17->chip_info->
    lvds_chip_info2.output_interface);
  else
   VAR_17->shared->iga2_devices |= FUNC_1(
    VAR_17->chip_info->
    lvds_chip_info2.output_interface);
 }


 if (FUNC_2())
  VAR_17->shared->iga2_devices = VAR_8 | VAR_9;
}
