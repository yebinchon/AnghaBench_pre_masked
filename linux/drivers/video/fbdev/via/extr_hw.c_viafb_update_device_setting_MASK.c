
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* tmds_setting_info; } ;
struct TYPE_3__ {int h_active; int v_active; scalar_t__ iga_path; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_5 == 0) {
  VAR_1->tmds_setting_info->h_active = VAR_2;
  VAR_1->tmds_setting_info->v_active = VAR_3;
 } else {

  if (VAR_1->tmds_setting_info->iga_path == VAR_0) {
   VAR_1->tmds_setting_info->h_active = VAR_2;
   VAR_1->tmds_setting_info->v_active = VAR_3;
  }

 }
}
