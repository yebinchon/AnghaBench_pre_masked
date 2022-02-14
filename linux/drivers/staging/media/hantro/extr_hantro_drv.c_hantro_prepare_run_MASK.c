
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req; } ;
struct TYPE_4__ {TYPE_1__ req_obj; } ;
struct vb2_v4l2_buffer {TYPE_2__ vb2_buf; } ;
struct hantro_ctx {int ctrl_handler; } ;


 struct vb2_v4l2_buffer* FUNC_0 (struct hantro_ctx*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct hantro_ctx *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->vb2_buf.req_obj.req,
    &VAR_0->ctrl_handler);
}
