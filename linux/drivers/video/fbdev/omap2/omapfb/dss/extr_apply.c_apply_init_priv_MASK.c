
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int global_alpha; int zorder; int rotation_type; int color_mode; } ;
struct ovl_priv_data {TYPE_1__ info; TYPE_1__ user_info; } ;
struct TYPE_6__ {int lck_div; int pck_div; } ;
struct TYPE_7__ {int video_port_width; TYPE_2__ clock_info; } ;
struct mgr_priv_data {TYPE_3__ lcd_config; } ;
struct TYPE_8__ {struct mgr_priv_data* mgr_priv_data_array; struct ovl_priv_data* ovl_priv_data_array; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void)
{
 const int VAR_6 = FUNC_0();
 struct mgr_priv_data *VAR_7;
 int VAR_8;

 FUNC_2(&VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
  struct ovl_priv_data *VAR_9;

  VAR_9 = &VAR_5.ovl_priv_data_array[VAR_8];

  VAR_9->info.color_mode = VAR_2;
  VAR_9->info.rotation_type = VAR_3;

  VAR_9->info.global_alpha = 255;

  switch (VAR_8) {
  case 0:
   VAR_9->info.zorder = 0;
   break;
  case 1:
   VAR_9->info.zorder =
    FUNC_1(VAR_0) ? 3 : 0;
   break;
  case 2:
   VAR_9->info.zorder =
    FUNC_1(VAR_0) ? 2 : 0;
   break;
  case 3:
   VAR_9->info.zorder =
    FUNC_1(VAR_0) ? 1 : 0;
   break;
  }

  VAR_9->user_info = VAR_9->info;
 }





 VAR_7 = &VAR_5.mgr_priv_data_array[VAR_1];

 VAR_7->lcd_config.video_port_width = 24;
 VAR_7->lcd_config.clock_info.lck_div = 1;
 VAR_7->lcd_config.clock_info.pck_div = 1;
}
