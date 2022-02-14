
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int dummy; } ;
struct delta_frame {int state; struct vb2_v4l2_buffer vbuf; } ;
struct delta_dec {int dummy; } ;
struct delta_ctx {unsigned int nb_of_frames; int aborting; scalar_t__ frame_num; struct delta_frame** frames; struct delta_dec* dec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct delta_dec const*,int ,struct delta_ctx*) ;
 int FUNC_1 (struct delta_ctx*) ;
 int VAR_2 ;
 int FUNC_2 (struct vb2_v4l2_buffer*,int ) ;
 struct delta_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_3)
{
 struct delta_ctx *VAR_4 = FUNC_3(VAR_3);
 struct vb2_v4l2_buffer *VAR_5;
 struct delta_frame *VAR_6;
 const struct delta_dec *VAR_7 = VAR_4->dec;
 unsigned int VAR_8;

 FUNC_1(VAR_4);

 FUNC_0(VAR_7, VAR_2, VAR_4);





 for (VAR_8 = 0; VAR_8 < VAR_4->nb_of_frames; VAR_8++) {
  VAR_6 = VAR_4->frames[VAR_8];
  if (!(VAR_6->state & VAR_0)) {
   VAR_5 = &VAR_6->vbuf;
   FUNC_2(VAR_5, VAR_1);
  }
  VAR_6->state = VAR_0;
 }

 VAR_4->frame_num = 0;

 VAR_4->aborting = 0;
}
