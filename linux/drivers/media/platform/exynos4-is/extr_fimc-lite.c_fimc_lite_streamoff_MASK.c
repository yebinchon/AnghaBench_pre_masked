
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entity; } ;
struct TYPE_4__ {TYPE_1__ vdev; } ;
struct fimc_lite {int streaming; TYPE_2__ ve; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,void*,int) ;
 struct fimc_lite* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
          enum v4l2_buf_type VAR_2)
{
 struct fimc_lite *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(&VAR_3->ve.vdev.entity);
 VAR_3->streaming = 0;
 return 0;
}
