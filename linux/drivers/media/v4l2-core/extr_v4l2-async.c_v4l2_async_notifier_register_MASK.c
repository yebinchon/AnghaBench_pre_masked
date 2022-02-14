
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct v4l2_async_notifier {struct v4l2_device* v4l2_dev; scalar_t__ sd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_async_notifier*) ;

int FUNC_2(struct v4l2_device *VAR_1,
     struct v4l2_async_notifier *VAR_2)
{
 int VAR_3;

 if (FUNC_0(!VAR_1 || VAR_2->sd))
  return -VAR_0;

 VAR_2->v4l2_dev = VAR_1;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  VAR_2->v4l2_dev = ((void*)0);

 return VAR_3;
}
