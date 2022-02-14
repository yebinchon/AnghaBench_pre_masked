
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_format {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct media_link {TYPE_2__* source; } ;
struct iss_pipeline {int external; } ;
struct TYPE_3__ {int entity; } ;
struct iss_csi2_device {TYPE_1__ subdev; } ;
struct TYPE_4__ {int entity; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iss_pipeline*,struct media_link*) ;
 struct iss_pipeline* FUNC_2 (int *) ;
 struct iss_csi2_device* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,struct media_link*,struct v4l2_subdev_format*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, struct media_link *VAR_1,
         struct v4l2_subdev_format *VAR_2,
         struct v4l2_subdev_format *VAR_3)
{
 struct iss_csi2_device *VAR_4 = FUNC_3(VAR_0);
 struct iss_pipeline *VAR_5 = FUNC_2(&VAR_4->subdev.entity);
 int VAR_6;

 VAR_5->external = FUNC_0(VAR_1->source->entity);
 VAR_6 = FUNC_1(VAR_5, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_4(VAR_0, VAR_1, VAR_2,
       VAR_3);
}
