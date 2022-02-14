
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct fimc_ctx* drv_priv; } ;
struct fimc_vid_cap {int reqbufs_count; int active_buf_cnt; int ve; scalar_t__ frame_count; } ;
struct fimc_dev {int state; struct fimc_vid_cap vid_cap; } ;
struct fimc_ctx {struct fimc_dev* fimc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fimc_ctx*) ;
 int FUNC_1 (struct fimc_dev*) ;
 int FUNC_2 (struct fimc_dev*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct vb2_queue *VAR_4, unsigned int VAR_5)
{
 struct fimc_ctx *VAR_6 = VAR_4->drv_priv;
 struct fimc_dev *VAR_7 = VAR_6->fimc_dev;
 struct fimc_vid_cap *VAR_8 = &VAR_7->vid_cap;
 int VAR_9;
 int VAR_10;

 VAR_8->frame_count = 0;

 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10) {
  FUNC_2(VAR_7, 0);
  return VAR_10;
 }

 FUNC_4(VAR_1, &VAR_7->state);

 VAR_9 = VAR_7->vid_cap.reqbufs_count > 1 ? 2 : 1;

 if (VAR_8->active_buf_cnt >= VAR_9 &&
     !FUNC_5(VAR_2, &VAR_7->state)) {
  FUNC_0(VAR_6);

  if (!FUNC_5(VAR_0, &VAR_7->state))
   return FUNC_3(&VAR_8->ve, VAR_3, 1);
 }

 return 0;
}
