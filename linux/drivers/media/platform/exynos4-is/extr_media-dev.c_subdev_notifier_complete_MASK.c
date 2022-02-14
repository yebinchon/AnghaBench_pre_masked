
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_async_notifier {int dummy; } ;
struct TYPE_2__ {int graph_mutex; } ;
struct fimc_md {TYPE_1__ media_dev; int v4l2_dev; } ;


 int FUNC_0 (struct fimc_md*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fimc_md* FUNC_4 (struct v4l2_async_notifier*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct v4l2_async_notifier *VAR_0)
{
 struct fimc_md *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 FUNC_2(&VAR_1->media_dev.graph_mutex);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  goto unlock;

 VAR_2 = FUNC_5(&VAR_1->v4l2_dev);
unlock:
 FUNC_3(&VAR_1->media_dev.graph_mutex);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_1(&VAR_1->media_dev);
}
