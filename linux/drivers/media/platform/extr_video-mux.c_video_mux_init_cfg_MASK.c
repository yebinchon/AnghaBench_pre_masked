
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_mux {int lock; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {unsigned int num_pads; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;
struct v4l2_mbus_framefmt {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;
 struct video_mux* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt VAR_0 ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1,
         struct v4l2_subdev_pad_config *VAR_2)
{
 struct video_mux *VAR_3 = FUNC_3(VAR_1);
 struct v4l2_mbus_framefmt *VAR_4;
 unsigned int VAR_5;

 FUNC_0(&VAR_3->lock);

 for (VAR_5 = 0; VAR_5 < VAR_1->entity.num_pads; VAR_5++) {
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_5);
  *VAR_4 = VAR_0;
 }

 FUNC_1(&VAR_3->lock);

 return 0;
}
