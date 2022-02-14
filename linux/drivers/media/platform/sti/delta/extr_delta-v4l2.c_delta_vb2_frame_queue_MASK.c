
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int dummy; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct delta_frame {int dummy; } ;
struct delta_ctx {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct delta_ctx*,struct delta_frame*) ;
 int FUNC_1 (struct delta_ctx*,struct delta_frame*) ;
 struct delta_frame* FUNC_2 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_3 (struct vb2_buffer*) ;
 struct delta_ctx* FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_5(struct vb2_buffer *VAR_2)
{
 struct vb2_queue *VAR_3 = VAR_2->vb2_queue;
 struct delta_ctx *VAR_4 = FUNC_4(VAR_3);
 struct vb2_v4l2_buffer *VAR_5 = FUNC_3(VAR_2);
 struct delta_frame *VAR_6 = FUNC_2(VAR_5);

 if (VAR_4->state == VAR_1) {

  FUNC_0(VAR_4, VAR_6);

  VAR_4->state = VAR_0;


  return;
 }


 FUNC_1(VAR_4, VAR_6);
}
