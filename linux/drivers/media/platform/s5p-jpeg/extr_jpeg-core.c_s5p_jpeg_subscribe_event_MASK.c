
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int dummy; } ;
struct v4l2_event_subscription {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_fh*,struct v4l2_event_subscription const*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_fh *VAR_2,
        const struct v4l2_event_subscription *VAR_3)
{
 if (VAR_3->type == VAR_1)
  return FUNC_0(VAR_2, VAR_3);

 return -VAR_0;
}
