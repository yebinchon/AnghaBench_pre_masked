
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_mux {int lock; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int which; int pad; int format; } ;
struct v4l2_subdev {int dummy; } ;


 int * FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct video_mux* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0,
       struct v4l2_subdev_pad_config *VAR_1,
       struct v4l2_subdev_format *VAR_2)
{
 struct video_mux *VAR_3 = FUNC_3(VAR_0);

 FUNC_1(&VAR_3->lock);

 VAR_2->format = *FUNC_0(VAR_0, VAR_1, VAR_2->pad,
             VAR_2->which);

 FUNC_2(&VAR_3->lock);

 return 0;
}
