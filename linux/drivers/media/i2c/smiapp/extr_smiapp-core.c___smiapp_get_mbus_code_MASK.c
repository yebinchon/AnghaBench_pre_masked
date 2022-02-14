
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct smiapp_sensor {TYPE_3__* internal_csi_format; TYPE_2__* csi_format; TYPE_1__* src; } ;
struct TYPE_6__ {int code; } ;
struct TYPE_5__ {int code; } ;
struct TYPE_4__ {struct v4l2_subdev sd; } ;


 unsigned int VAR_0 ;
 struct smiapp_sensor* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static u32 FUNC_1(struct v4l2_subdev *VAR_1,
      unsigned int VAR_2)
{
 struct smiapp_sensor *VAR_3 = FUNC_0(VAR_1);

 if (VAR_1 == &VAR_3->src->sd && VAR_2 == VAR_0)
  return VAR_3->csi_format->code;
 else
  return VAR_3->internal_csi_format->code;
}
