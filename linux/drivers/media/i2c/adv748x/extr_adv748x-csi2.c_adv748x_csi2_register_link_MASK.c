
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int entity; int v4l2_dev; } ;
struct v4l2_device {int dummy; } ;
struct TYPE_2__ {int entity; } ;
struct adv748x_csi2 {struct v4l2_subdev* src; TYPE_1__ sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int,int *,int ,int ) ;
 int FUNC_1 (struct v4l2_device*,struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct adv748x_csi2 *VAR_2,
          struct v4l2_device *VAR_3,
          struct v4l2_subdev *VAR_4,
          unsigned int VAR_5,
          bool VAR_6)
{
 int VAR_7;

 if (!VAR_4->v4l2_dev) {
  VAR_7 = FUNC_1(VAR_3, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_0(&VAR_4->entity, VAR_5,
        &VAR_2->sd.entity, VAR_0,
        VAR_6 ? VAR_1 : 0);
 if (VAR_7)
  return VAR_7;

 if (VAR_6)
  VAR_2->src = VAR_4;

 return 0;
}
