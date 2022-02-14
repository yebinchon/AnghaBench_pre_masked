
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int frame_rate; } ;
struct sensor_param {TYPE_2__ frame_rate; } ;
struct TYPE_6__ {int frametime_max; scalar_t__ frametime_min; } ;
struct isp_param {TYPE_3__ otf_input; } ;
struct fimc_is {unsigned int config_index; TYPE_1__* config; } ;
struct TYPE_4__ {struct isp_param isp; struct sensor_param sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fimc_is*) ;
 int FUNC_1 (struct fimc_is*,int ) ;

void FUNC_2(struct fimc_is *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_2->config_index;
 struct sensor_param *VAR_5;
 struct isp_param *VAR_6;

 VAR_5 = &VAR_2->config[VAR_4].sensor;
 VAR_6 = &VAR_2->config[VAR_4].isp;

 if (VAR_3 == 0) {
  VAR_5->frame_rate.frame_rate =
    FUNC_0(VAR_2);
  VAR_6->otf_input.frametime_min = 0;
  VAR_6->otf_input.frametime_max = 66666;
 } else {
  VAR_5->frame_rate.frame_rate = VAR_3;
  VAR_6->otf_input.frametime_min = 0;
  VAR_6->otf_input.frametime_max = (u32)1000000 / VAR_3;
 }

 FUNC_1(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0);
}
