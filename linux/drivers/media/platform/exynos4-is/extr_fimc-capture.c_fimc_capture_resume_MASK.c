
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entity; } ;
struct exynos_video_entity {TYPE_1__ vdev; } ;
struct fimc_vid_cap {int reqbufs_count; int pending_buf_q; scalar_t__ buf_index; int active_buf_q; struct exynos_video_entity ve; } ;
struct TYPE_4__ {int vb2_buf; } ;
struct fimc_vid_buffer {TYPE_2__ vb; } ;
struct fimc_dev {int state; struct fimc_vid_cap vid_cap; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct fimc_dev*) ;
 struct fimc_vid_buffer* FUNC_4 (struct fimc_vid_cap*) ;
 int FUNC_5 (struct exynos_video_entity*,int ,int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct fimc_dev *VAR_2)
{
 struct fimc_vid_cap *VAR_3 = &VAR_2->vid_cap;
 struct exynos_video_entity *VAR_4 = &VAR_3->ve;
 struct fimc_vid_buffer *VAR_5;
 int VAR_6;

 if (!FUNC_7(VAR_0, &VAR_2->state))
  return 0;

 FUNC_0(&VAR_2->vid_cap.active_buf_q);
 VAR_3->buf_index = 0;
 FUNC_5(VAR_4, VAR_1, &VAR_4->vdev.entity, 0);
 FUNC_3(VAR_2);

 FUNC_2(VAR_0, &VAR_2->state);

 for (VAR_6 = 0; VAR_6 < VAR_3->reqbufs_count; VAR_6++) {
  if (FUNC_6(&VAR_3->pending_buf_q))
   break;
  VAR_5 = FUNC_4(VAR_3);
  FUNC_1(&VAR_5->vb.vb2_buf);
 }
 return 0;

}
