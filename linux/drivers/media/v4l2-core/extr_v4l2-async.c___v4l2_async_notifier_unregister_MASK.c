
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_async_notifier {int list; int * v4l2_dev; int * sd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct v4l2_async_notifier*) ;

__attribute__((used)) static void
FUNC_2(struct v4l2_async_notifier *VAR_0)
{
 if (!VAR_0 || (!VAR_0->v4l2_dev && !VAR_0->sd))
  return;

 FUNC_1(VAR_0);

 VAR_0->sd = ((void*)0);
 VAR_0->v4l2_dev = ((void*)0);

 FUNC_0(&VAR_0->list);
}
