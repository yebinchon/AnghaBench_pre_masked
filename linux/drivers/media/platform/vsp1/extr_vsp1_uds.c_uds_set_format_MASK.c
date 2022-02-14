
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct vsp1_uds {TYPE_1__ entity; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int pad; int which; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vsp1_uds* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct vsp1_uds*,struct v4l2_subdev_pad_config*,int ,struct v4l2_mbus_framefmt*) ;
 struct v4l2_subdev_pad_config* FUNC_4 (TYPE_1__*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_5 (TYPE_1__*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_format *VAR_5)
{
 struct vsp1_uds *VAR_6 = FUNC_2(VAR_3);
 struct v4l2_subdev_pad_config *VAR_7;
 struct v4l2_mbus_framefmt *VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_6->entity.lock);

 VAR_7 = FUNC_4(&VAR_6->entity, VAR_4, VAR_5->which);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  goto done;
 }

 FUNC_3(VAR_6, VAR_7, VAR_5->pad, &VAR_5->format);

 VAR_8 = FUNC_5(&VAR_6->entity, VAR_7, VAR_5->pad);
 *VAR_8 = VAR_5->format;

 if (VAR_5->pad == VAR_1) {

  VAR_8 = FUNC_5(&VAR_6->entity, VAR_7,
          VAR_2);
  *VAR_8 = VAR_5->format;

  FUNC_3(VAR_6, VAR_7, VAR_2, VAR_8);
 }

done:
 FUNC_1(&VAR_6->entity.lock);
 return VAR_9;
}
