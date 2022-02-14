
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_async_notifier {int v4l2_dev; struct v4l2_async_notifier* parent; int waiting; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct v4l2_async_notifier*) ;
 int FUNC_2 (struct v4l2_async_notifier*) ;

__attribute__((used)) static int
FUNC_3(struct v4l2_async_notifier *VAR_0)
{

 if (!FUNC_0(&VAR_0->waiting))
  return 0;


 while (VAR_0->parent)
  VAR_0 = VAR_0->parent;


 if (!VAR_0->v4l2_dev)
  return 0;


 if (!FUNC_2(VAR_0))
  return 0;

 return FUNC_1(VAR_0);
}
