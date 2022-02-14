
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int height; int width; } ;
struct TYPE_8__ {int height; int width; } ;
struct TYPE_7__ {int height; int width; } ;
struct isp_param {TYPE_2__ otf_output; TYPE_1__ otf_input; } ;
struct fimc_is {unsigned int config_index; TYPE_6__* config; } ;
struct TYPE_11__ {int height; int width; } ;
struct fd_param {TYPE_5__ otf_input; } ;
struct TYPE_10__ {int height; int width; } ;
struct TYPE_9__ {int height; int width; } ;
struct drc_param {TYPE_4__ otf_output; TYPE_3__ otf_input; } ;
struct TYPE_12__ {int * p_region_index; struct fd_param fd; struct drc_param drc; struct isp_param isp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fimc_is*,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct fimc_is *VAR_5, struct v4l2_mbus_framefmt *VAR_6)
{
 unsigned int VAR_7 = VAR_5->config_index;
 struct isp_param *VAR_8;
 struct drc_param *VAR_9;
 struct fd_param *VAR_10;

 VAR_8 = &VAR_5->config[VAR_7].isp;
 VAR_9 = &VAR_5->config[VAR_7].drc;
 VAR_10 = &VAR_5->config[VAR_7].fd;


 VAR_8->otf_input.width = VAR_6->width;
 VAR_8->otf_input.height = VAR_6->height;
 VAR_8->otf_output.width = VAR_6->width;
 VAR_8->otf_output.height = VAR_6->height;

 VAR_9->otf_input.width = VAR_6->width;
 VAR_9->otf_input.height = VAR_6->height;
 VAR_9->otf_output.width = VAR_6->width;
 VAR_9->otf_output.height = VAR_6->height;

 VAR_10->otf_input.width = VAR_6->width;
 VAR_10->otf_input.height = VAR_6->height;

 if (FUNC_1(VAR_3,
        &VAR_5->config[VAR_7].p_region_index[0]))
  return;


 FUNC_0(VAR_5, VAR_3);
 FUNC_0(VAR_5, VAR_4);
 FUNC_0(VAR_5, VAR_0);
 FUNC_0(VAR_5, VAR_1);
 FUNC_0(VAR_5, VAR_2);
}
