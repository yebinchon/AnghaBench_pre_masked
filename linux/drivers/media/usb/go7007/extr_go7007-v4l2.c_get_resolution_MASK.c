
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct go7007 {int standard; TYPE_1__* board_info; } ;
struct TYPE_2__ {int sensor_width; int sensor_height; } ;






__attribute__((used)) static void FUNC_0(struct go7007 *VAR_0, int *VAR_1, int *VAR_2)
{
 switch (VAR_0->standard) {
 case 130:
  *VAR_1 = 720;
  *VAR_2 = 480;
  break;
 case 128:
  *VAR_1 = 720;
  *VAR_2 = 576;
  break;
 case 129:
 default:
  *VAR_1 = VAR_0->board_info->sensor_width;
  *VAR_2 = VAR_0->board_info->sensor_height;
  break;
 }
}
