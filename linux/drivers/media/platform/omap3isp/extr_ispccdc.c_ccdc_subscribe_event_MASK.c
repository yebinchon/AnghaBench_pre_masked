
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_fh {int dummy; } ;
struct v4l2_event_subscription {scalar_t__ type; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_fh*,struct v4l2_event_subscription*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3, struct v4l2_fh *VAR_4,
    struct v4l2_event_subscription *VAR_5)
{
 if (VAR_5->type != VAR_2)
  return -VAR_0;


 if (VAR_5->id != 0)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_5, VAR_1, ((void*)0));
}
