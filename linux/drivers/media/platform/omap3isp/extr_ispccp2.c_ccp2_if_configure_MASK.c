
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int code; } ;
struct media_pad {int entity; } ;
struct isp_pipeline {int external; } ;
struct TYPE_8__ {int data_size; int format; int crc; int data_start; } ;
struct TYPE_5__ {int entity; } ;
struct isp_ccp2_device {TYPE_4__ if_cfg; struct v4l2_mbus_framefmt* formats; int * pads; TYPE_1__ subdev; } ;
struct TYPE_7__ {int crc; scalar_t__ vpclk_div; } ;
struct TYPE_6__ {TYPE_3__ ccp2; } ;
struct isp_bus_cfg {TYPE_2__ bus; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct isp_ccp2_device*,TYPE_4__*) ;
 int FUNC_1 (struct isp_ccp2_device*,TYPE_3__*) ;
 int FUNC_2 (struct isp_ccp2_device*) ;
 int FUNC_3 (struct isp_ccp2_device*,scalar_t__) ;
 int VAR_1 ;
 struct media_pad* FUNC_4 (int *) ;
 struct v4l2_subdev* FUNC_5 (int ) ;
 struct isp_pipeline* FUNC_6 (int *) ;
 int FUNC_7 (struct v4l2_subdev*,struct v4l2_subdev*,int ,int *) ;
 struct isp_bus_cfg* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct isp_ccp2_device *VAR_2)
{
 struct isp_pipeline *VAR_3 = FUNC_6(&VAR_2->subdev.entity);
 const struct isp_bus_cfg *VAR_4;
 struct v4l2_mbus_framefmt *VAR_5;
 struct media_pad *VAR_6;
 struct v4l2_subdev *VAR_7;
 u32 VAR_8 = 0;
 int VAR_9;

 FUNC_2(VAR_2);

 VAR_6 = FUNC_4(&VAR_2->pads[VAR_0]);
 VAR_7 = FUNC_5(VAR_6->entity);
 VAR_4 = FUNC_8(VAR_3->external);

 VAR_9 = FUNC_1(VAR_2, &VAR_4->bus.ccp2);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_3(VAR_2, VAR_4->bus.ccp2.vpclk_div + 1);

 FUNC_7(VAR_7, VAR_7, VAR_1, &VAR_8);

 VAR_5 = &VAR_2->formats[VAR_0];

 VAR_2->if_cfg.data_start = VAR_8;
 VAR_2->if_cfg.crc = VAR_4->bus.ccp2.crc;
 VAR_2->if_cfg.format = VAR_5->code;
 VAR_2->if_cfg.data_size = VAR_5->height;

 FUNC_0(VAR_2, &VAR_2->if_cfg);

 return 0;
}
