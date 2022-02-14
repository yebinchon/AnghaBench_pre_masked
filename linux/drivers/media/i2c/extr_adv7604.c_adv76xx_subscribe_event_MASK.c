
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_fh {int dummy; } ;
struct v4l2_event_subscription {int type; } ;


 int VAR_0 ;


 int FUNC_0 (struct v4l2_subdev*,struct v4l2_fh*,struct v4l2_event_subscription*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_fh*,struct v4l2_event_subscription*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
       struct v4l2_fh *VAR_2,
       struct v4l2_event_subscription *VAR_3)
{
 switch (VAR_3->type) {
 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 case 129:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 default:
  return -VAR_0;
 }
}
