
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct media_entity {int dummy; } ;
struct TYPE_6__ {int entity; } ;
struct TYPE_8__ {struct media_entity entity; } ;
struct TYPE_7__ {TYPE_1__* pipe; TYPE_4__ vdev; } ;
struct fimc_lite {int streaming; TYPE_2__ subdev; int sensor; TYPE_3__ ve; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_5__ {int mp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct fimc_lite*) ;
 int FUNC_2 (struct fimc_lite*) ;
 int FUNC_3 (struct media_entity*,int *) ;
 int FUNC_4 (struct media_entity*) ;
 int FUNC_5 (struct file*,void*,int) ;
 struct fimc_lite* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1, void *VAR_2,
         enum v4l2_buf_type VAR_3)
{
 struct fimc_lite *VAR_4 = FUNC_6(VAR_1);
 struct media_entity *VAR_5 = &VAR_4->ve.vdev.entity;
 int VAR_6;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_5, &VAR_4->ve.pipe->mp);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0)
  goto err_p_stop;

 VAR_4->sensor = FUNC_0(&VAR_4->subdev.entity);

 VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3);
 if (!VAR_6) {
  VAR_4->streaming = 1;
  return VAR_6;
 }

err_p_stop:
 FUNC_4(VAR_5);
 return 0;
}
