
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ lvds_chip_name; int output_interface; } ;
struct TYPE_9__ {int iga_path; } ;
struct TYPE_8__ {TYPE_1__* chip_info; TYPE_3__* lvds_setting_info; TYPE_3__* lvds_setting_info2; } ;
struct TYPE_7__ {scalar_t__ gfx_chip_name; TYPE_4__ lvds_chip_info; TYPE_4__ lvds_chip_info2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int ,int ,int,int) ;
 TYPE_2__* VAR_13 ;

void FUNC_5(void)
{
 FUNC_4(VAR_2, VAR_9, 0x00, VAR_0);
 FUNC_4(VAR_1, VAR_9, 0x08, VAR_0);
 FUNC_2(VAR_13->lvds_setting_info->iga_path,
  VAR_13->chip_info->lvds_chip_info.output_interface);
 if (VAR_12)
  FUNC_2(VAR_13->lvds_setting_info2->iga_path,
   VAR_13->chip_info->
   lvds_chip_info2.output_interface);

 if (VAR_13->chip_info->gfx_chip_name == VAR_7) {

  FUNC_4(VAR_5, VAR_10, 0x30, 0x30);
  FUNC_1();
 } else if (VAR_13->chip_info->gfx_chip_name == VAR_8) {
  if (VAR_12 && (VAR_4 ==
   VAR_13->chip_info->lvds_chip_info2.lvds_chip_name))
   FUNC_0(VAR_13->lvds_setting_info2, &VAR_13->chip_info->lvds_chip_info2);

  if (VAR_4 ==
   VAR_13->chip_info->lvds_chip_info.lvds_chip_name)
   FUNC_0(VAR_13->lvds_setting_info,
    &VAR_13->chip_info->lvds_chip_info);
  if (VAR_11 == VAR_13->chip_info->
   lvds_chip_info.lvds_chip_name)
   FUNC_3(VAR_13->
   lvds_setting_info, &VAR_13->chip_info->
   lvds_chip_info);
 } else if (VAR_11 ==
 VAR_13->chip_info->lvds_chip_info.lvds_chip_name) {
  FUNC_3(VAR_13->lvds_setting_info,
       &VAR_13->chip_info->lvds_chip_info);
 } else {

  FUNC_4(VAR_6, VAR_10, 0x20, 0x20);

  FUNC_4(VAR_3, VAR_9, 0x00, 0x80);

  FUNC_4(VAR_1, VAR_9, 0x48, 0x48);
 }
}
