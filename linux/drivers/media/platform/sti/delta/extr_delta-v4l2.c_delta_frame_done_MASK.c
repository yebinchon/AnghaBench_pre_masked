
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {scalar_t__ sequence; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct delta_frame {TYPE_1__ info; struct vb2_v4l2_buffer vbuf; int state; } ;
struct delta_ctx {int output_frames; int frame_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct delta_ctx*,struct delta_frame*) ;
 int FUNC_1 (struct vb2_v4l2_buffer*,int ) ;

__attribute__((used)) static void FUNC_2(struct delta_ctx *VAR_3, struct delta_frame *VAR_4,
        int VAR_5)
{
 struct vb2_v4l2_buffer *VAR_6;

 FUNC_0(VAR_3, VAR_4);


 VAR_4->state |= VAR_0;

 VAR_6 = &VAR_4->vbuf;
 VAR_6->sequence = VAR_3->frame_num++;
 FUNC_1(VAR_6, VAR_5 ? VAR_2 : VAR_1);

 if (VAR_4->info.size)
  VAR_3->output_frames++;
}
