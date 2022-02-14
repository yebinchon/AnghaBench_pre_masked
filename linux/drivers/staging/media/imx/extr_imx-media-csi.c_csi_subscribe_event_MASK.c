
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_fh {int dummy; } ;
struct v4l2_event_subscription {scalar_t__ type; scalar_t__ id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_fh*,struct v4l2_event_subscription*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2, struct v4l2_fh *VAR_3,
          struct v4l2_event_subscription *VAR_4)
{
 if (VAR_4->type != VAR_1)
  return -VAR_0;
 if (VAR_4->id != 0)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, 0, ((void*)0));
}
