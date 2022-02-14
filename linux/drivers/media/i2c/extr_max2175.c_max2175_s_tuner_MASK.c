
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_1, const struct v4l2_tuner *VAR_2)
{

 if (VAR_2->index > 0)
  return -VAR_0;

 return 0;
}
