
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int flags; } ;
struct v4l2_event {int type; } ;
struct coda_ctx {int fh; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct v4l2_event const*) ;
 int FUNC_1 (struct vb2_v4l2_buffer*,int) ;

void FUNC_2(struct coda_ctx *VAR_2, struct vb2_v4l2_buffer *VAR_3,
         enum vb2_buffer_state VAR_4)
{
 const struct v4l2_event VAR_5 = {
  .type = VAR_1
 };

 if (VAR_3->flags & VAR_0)
  FUNC_0(&VAR_2->fh, &VAR_5);

 FUNC_1(VAR_3, VAR_4);
}
