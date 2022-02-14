
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_frame_interval {int pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct v4l2_subdev *VAR_1,
           struct v4l2_subdev_frame_interval *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2->pad);
}
