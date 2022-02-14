
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int req; } ;
struct TYPE_6__ {TYPE_2__ req_obj; } ;
struct vb2_v4l2_buffer {TYPE_3__ vb2_buf; } ;
struct vb2_queue {int type; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct cedrus_ctx {int hdl; TYPE_1__ fh; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 struct cedrus_ctx* FUNC_5 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_6(struct vb2_queue *VAR_0, u32 VAR_1)
{
 struct cedrus_ctx *VAR_2 = FUNC_5(VAR_0);
 struct vb2_v4l2_buffer *VAR_3;

 for (;;) {
  if (FUNC_0(VAR_0->type))
   VAR_3 = FUNC_4(VAR_2->fh.m2m_ctx);
  else
   VAR_3 = FUNC_3(VAR_2->fh.m2m_ctx);

  if (!VAR_3)
   return;

  FUNC_1(VAR_3->vb2_buf.req_obj.req,
        &VAR_2->hdl);
  FUNC_2(VAR_3, VAR_1);
 }
}
