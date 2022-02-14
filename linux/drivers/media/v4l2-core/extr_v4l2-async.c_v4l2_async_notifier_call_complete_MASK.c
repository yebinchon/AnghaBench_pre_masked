
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_async_notifier {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* complete ) (struct v4l2_async_notifier*) ;} ;


 int FUNC_0 (struct v4l2_async_notifier*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_async_notifier *VAR_0)
{
 if (!VAR_0->ops || !VAR_0->ops->complete)
  return 0;

 return VAR_0->ops->complete(VAR_0);
}
