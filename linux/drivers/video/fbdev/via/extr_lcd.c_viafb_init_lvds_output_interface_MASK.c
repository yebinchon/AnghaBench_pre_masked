
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {scalar_t__ output_interface; int lvds_chip_name; } ;
struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {int gfx_chip_name; } ;



 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;






 int FUNC_0 (struct lvds_chip_information*,struct lvds_setting_information*) ;
 TYPE_2__* VAR_5 ;

void FUNC_1(struct lvds_chip_information
    *VAR_6,
    struct lvds_setting_information
    *VAR_7)
{
 if (VAR_4 != VAR_6->output_interface) {

  return;
 }

 switch (VAR_6->lvds_chip_name) {

 case 128:
  switch (VAR_5->chip_info->gfx_chip_name) {
  case 132:
   VAR_6->output_interface = VAR_3;
   break;
  case 133:
   VAR_6->output_interface = VAR_1;
   break;
  default:
   VAR_6->output_interface = VAR_2;
   break;
  }
  break;

 case 134:
  FUNC_0(VAR_6,
      VAR_7);
  break;

 default:
  switch (VAR_5->chip_info->gfx_chip_name) {
  case 131:
  case 129:
  case 130:
   VAR_6->output_interface = VAR_1;
   break;
  default:
   VAR_6->output_interface = VAR_0;
   break;
  }
  break;
 }
}
