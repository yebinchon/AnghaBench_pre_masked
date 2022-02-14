
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int name; } ;
struct v4l2_input {scalar_t__ index; int name; int type; } ;
struct exynos_video_entity {int pipe; } ;
struct TYPE_2__ {struct exynos_video_entity ve; } ;
struct fimc_dev {TYPE_1__ vid_cap; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_subdev* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct exynos_video_entity*) ;
 int FUNC_2 (struct exynos_video_entity*) ;
 int FUNC_3 (int ,int ,int) ;
 struct fimc_dev* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
          struct v4l2_input *VAR_5)
{
 struct fimc_dev *VAR_6 = FUNC_4(VAR_3);
 struct exynos_video_entity *VAR_7 = &VAR_6->vid_cap.ve;
 struct v4l2_subdev *VAR_8;

 if (VAR_5->index != 0)
  return -VAR_0;

 VAR_5->type = VAR_2;
 FUNC_1(VAR_7);
 VAR_8 = FUNC_0(VAR_7->pipe, VAR_1);
 FUNC_2(VAR_7);

 if (VAR_8)
  FUNC_3(VAR_5->name, VAR_8->name, sizeof(VAR_5->name));

 return 0;
}
