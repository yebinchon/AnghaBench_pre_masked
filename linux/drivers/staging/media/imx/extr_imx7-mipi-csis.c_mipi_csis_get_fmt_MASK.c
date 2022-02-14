
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int pad; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct csi_state {int lock; } ;


 struct v4l2_mbus_framefmt* FUNC_0 (struct csi_state*,struct v4l2_subdev_pad_config*,int ,int ) ;
 struct csi_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0,
        struct v4l2_subdev_pad_config *VAR_1,
        struct v4l2_subdev_format *VAR_2)
{
 struct csi_state *VAR_3 = FUNC_1(VAR_0);
 struct v4l2_mbus_framefmt *VAR_4;

 FUNC_2(&VAR_3->lock);

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2->which, VAR_2->pad);

 VAR_2->format = *VAR_4;

 FUNC_3(&VAR_3->lock);

 return 0;
}
