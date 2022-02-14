
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int dummy; } ;
struct v4l2_event_subscription {int type; } ;



 int FUNC_0 (struct v4l2_fh*,struct v4l2_event_subscription const*) ;
 int FUNC_1 (struct v4l2_fh*,struct v4l2_event_subscription const*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct v4l2_fh *VAR_0,
      const struct v4l2_event_subscription *VAR_1)
{
 switch (VAR_1->type) {
 case 128:



  return FUNC_1(VAR_0, VAR_1, 30, ((void*)0));
 default:
  return FUNC_0(VAR_0, VAR_1);
 }
}
