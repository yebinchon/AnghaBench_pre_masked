
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int height; int width; } ;
struct TYPE_4__ {int height; int width; } ;
struct isp_param {TYPE_2__ otf_input; } ;
struct fimc_is {size_t config_index; TYPE_1__* config; } ;
struct TYPE_3__ {struct isp_param isp; } ;



void FUNC_0(struct fimc_is *VAR_0, struct v4l2_mbus_framefmt *VAR_1)
{
 struct isp_param *VAR_2;

 VAR_2 = &VAR_0->config[VAR_0->config_index].isp;
 VAR_1->width = VAR_2->otf_input.width;
 VAR_1->height = VAR_2->otf_input.height;
}
