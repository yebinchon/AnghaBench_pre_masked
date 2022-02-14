
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_fh {int dummy; } ;
struct v4l2_event_subscription {scalar_t__ type; } ;
struct ispstat {scalar_t__ event_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_fh*,struct v4l2_event_subscription*,int ,int *) ;
 struct ispstat* FUNC_1 (struct v4l2_subdev*) ;

int FUNC_2(struct v4l2_subdev *VAR_2,
      struct v4l2_fh *VAR_3,
      struct v4l2_event_subscription *VAR_4)
{
 struct ispstat *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->type != VAR_5->event_type)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, VAR_1, ((void*)0));
}
