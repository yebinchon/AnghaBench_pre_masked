
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int dummy; } ;
struct v4l2_event_subscription {int type; } ;


 int VAR_0 ;

 int FUNC_0 (struct v4l2_fh*,struct v4l2_event_subscription const*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct v4l2_fh *VAR_1,
      const struct v4l2_event_subscription *VAR_2)
{
 switch (VAR_2->type) {
 case 128:
  return FUNC_0(VAR_1, VAR_2, 2, ((void*)0));
 default:
  return -VAR_0;
 }
}
