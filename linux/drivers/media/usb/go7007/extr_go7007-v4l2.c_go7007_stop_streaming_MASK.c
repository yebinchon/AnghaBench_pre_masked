
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ streaming; } ;
struct go7007 {scalar_t__ board_id; int mpeg_video_aspect_ratio; int mpeg_video_bitrate; int mpeg_video_gop_closure; int mpeg_video_gop_size; int spinlock; int vidq_active; int v4l2_dev; int hw_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct go7007*) ;
 int FUNC_3 (struct go7007*) ;
 int FUNC_4 (struct go7007*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int) ;
 struct go7007* FUNC_10 (struct vb2_queue*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_11(struct vb2_queue *VAR_3)
{
 struct go7007 *VAR_4 = FUNC_10(VAR_3);
 unsigned long VAR_5;

 VAR_3->streaming = 0;
 FUNC_3(VAR_4);
 FUNC_5(&VAR_4->hw_lock);
 FUNC_2(VAR_4);
 FUNC_6(&VAR_4->hw_lock);
 FUNC_1(&VAR_4->v4l2_dev, VAR_2, VAR_1, 0);

 FUNC_7(&VAR_4->spinlock, VAR_5);
 FUNC_0(&VAR_4->vidq_active);
 FUNC_8(&VAR_4->spinlock, VAR_5);
 FUNC_9(VAR_4->mpeg_video_gop_size, 0);
 FUNC_9(VAR_4->mpeg_video_gop_closure, 0);
 FUNC_9(VAR_4->mpeg_video_bitrate, 0);
 FUNC_9(VAR_4->mpeg_video_aspect_ratio, 0);

 if (VAR_4->board_id == VAR_0)
  FUNC_4(VAR_4, 0x3c82, 0x000d);
}
