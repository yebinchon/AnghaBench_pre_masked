
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int devnode; } ;
struct v4l2_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct v4l2_event const*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,void*) ;

void FUNC_2(struct v4l2_subdev *VAR_1,
         const struct v4l2_event *VAR_2)
{
 FUNC_0(VAR_1->devnode, VAR_2);
 FUNC_1(VAR_1, VAR_0, (void *)VAR_2);
}
