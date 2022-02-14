
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct media_entity {int dummy; } ;
struct fimc_source_info {int fimc_bus_type; } ;
struct TYPE_4__ {struct media_entity entity; } ;
struct TYPE_5__ {TYPE_3__* pipe; TYPE_1__ vdev; } ;
struct fimc_vid_cap {scalar_t__ input; int streaming; scalar_t__ user_subdev_api; struct fimc_source_info source_config; TYPE_2__ ve; } ;
struct fimc_dev {struct fimc_vid_cap vid_cap; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_6__ {int mp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct v4l2_subdev* FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (struct fimc_dev*) ;
 int FUNC_2 (struct fimc_dev*) ;
 int FUNC_3 (struct media_entity*,int *) ;
 int FUNC_4 (struct media_entity*) ;
 struct fimc_source_info* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct file*,void*,int) ;
 struct fimc_dev* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_5, void *VAR_6,
        enum v4l2_buf_type VAR_7)
{
 struct fimc_dev *VAR_8 = FUNC_7(VAR_5);
 struct fimc_vid_cap *VAR_9 = &VAR_8->vid_cap;
 struct media_entity *VAR_10 = &VAR_9->ve.vdev.entity;
 struct fimc_source_info *VAR_11 = ((void*)0);
 struct v4l2_subdev *VAR_12;
 int VAR_13;

 if (FUNC_1(VAR_8))
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_10, &VAR_9->ve.pipe->mp);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_0(VAR_9->ve.pipe, VAR_4);
 if (VAR_12)
  VAR_11 = FUNC_5(VAR_12);

 if (VAR_11 == ((void*)0)) {
  VAR_13 = -VAR_1;
  goto err_p_stop;
 }




 VAR_9->source_config = *VAR_11;

 if (VAR_9->input == VAR_3)
  VAR_9->source_config.fimc_bus_type = VAR_2;

 if (VAR_9->user_subdev_api) {
  VAR_13 = FUNC_2(VAR_8);
  if (VAR_13 < 0)
   goto err_p_stop;
 }

 VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7);
 if (!VAR_13) {
  VAR_9->streaming = 1;
  return VAR_13;
 }

err_p_stop:
 FUNC_4(VAR_10);
 return VAR_13;
}
