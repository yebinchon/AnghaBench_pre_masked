
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_host {int clk_lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* clock_start ) (struct soc_camera_host*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct soc_camera_host*) ;

__attribute__((used)) static int FUNC_3(struct soc_camera_host *VAR_0)
{
 int VAR_1;

 if (!VAR_0->ops->clock_start)
  return 0;

 FUNC_0(&VAR_0->clk_lock);
 VAR_1 = VAR_0->ops->clock_start(VAR_0);
 FUNC_1(&VAR_0->clk_lock);

 return VAR_1;
}
