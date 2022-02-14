
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct v4l2_async_notifier {struct v4l2_device* v4l2_dev; struct v4l2_async_notifier* parent; } ;



__attribute__((used)) static struct v4l2_device *
FUNC_0(struct v4l2_async_notifier *VAR_0)
{
 while (VAR_0->parent)
  VAR_0 = VAR_0->parent;

 return VAR_0->v4l2_dev;
}
