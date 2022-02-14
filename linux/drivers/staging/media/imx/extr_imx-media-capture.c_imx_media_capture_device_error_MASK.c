
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct imx_media_video_dev {int dummy; } ;
struct capture_priv {int q_lock; struct vb2_queue q; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct capture_priv* FUNC_2 (struct imx_media_video_dev*) ;
 int FUNC_3 (struct vb2_queue*) ;
 int FUNC_4 (struct vb2_queue*) ;

void FUNC_5(struct imx_media_video_dev *VAR_0)
{
 struct capture_priv *VAR_1 = FUNC_2(VAR_0);
 struct vb2_queue *VAR_2 = &VAR_1->q;
 unsigned long VAR_3;

 if (!FUNC_3(VAR_2))
  return;

 FUNC_0(&VAR_1->q_lock, VAR_3);
 FUNC_4(VAR_2);
 FUNC_1(&VAR_1->q_lock, VAR_3);
}
