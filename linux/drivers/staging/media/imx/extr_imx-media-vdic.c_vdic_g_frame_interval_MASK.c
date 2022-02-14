
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {int lock; int * frame_interval; } ;
struct v4l2_subdev_frame_interval {size_t pad; int interval; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vdic_priv* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
    struct v4l2_subdev_frame_interval *VAR_3)
{
 struct vdic_priv *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3->pad >= VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_4->lock);

 VAR_3->interval = VAR_4->frame_interval[VAR_3->pad];

 FUNC_1(&VAR_4->lock);

 return 0;
}
