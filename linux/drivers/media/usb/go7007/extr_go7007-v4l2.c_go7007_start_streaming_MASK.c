
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int streaming; } ;
struct go7007 {scalar_t__ board_id; int mpeg_video_aspect_ratio; int mpeg_video_bitrate; int mpeg_video_gop_closure; int mpeg_video_gop_size; int v4l2_dev; int hw_lock; scalar_t__ modet_event_status; int * active_buf; scalar_t__ next_seq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct go7007*) ;
 int FUNC_2 (struct go7007*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct go7007*) ;
 int FUNC_6 (int ,int) ;
 struct go7007* FUNC_7 (struct vb2_queue*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct vb2_queue *VAR_4, unsigned int VAR_5)
{
 struct go7007 *VAR_6 = FUNC_7(VAR_4);
 int VAR_7;

 FUNC_5(VAR_6);
 FUNC_3(&VAR_6->hw_lock);
 VAR_6->next_seq = 0;
 VAR_6->active_buf = ((void*)0);
 VAR_6->modet_event_status = 0;
 VAR_4->streaming = 1;
 if (FUNC_1(VAR_6) < 0)
  VAR_7 = -VAR_0;
 else
  VAR_7 = 0;
 FUNC_4(&VAR_6->hw_lock);
 if (VAR_7) {
  VAR_4->streaming = 0;
  return VAR_7;
 }
 FUNC_0(&VAR_6->v4l2_dev, VAR_3, VAR_2, 1);
 FUNC_6(VAR_6->mpeg_video_gop_size, 1);
 FUNC_6(VAR_6->mpeg_video_gop_closure, 1);
 FUNC_6(VAR_6->mpeg_video_bitrate, 1);
 FUNC_6(VAR_6->mpeg_video_aspect_ratio, 1);

 if (VAR_6->board_id == VAR_1)
  FUNC_2(VAR_6, 0x3c82, 0x0005);
 return VAR_7;
}
