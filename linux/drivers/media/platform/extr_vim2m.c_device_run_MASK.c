
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int m2m_ctx; } ;
struct vim2m_ctx {int transtime; int work_run; int hdl; TYPE_3__ fh; } ;
struct TYPE_4__ {int req; } ;
struct TYPE_5__ {TYPE_1__ req_obj; } ;
struct vb2_v4l2_buffer {TYPE_2__ vb2_buf; } ;


 int FUNC_0 (struct vim2m_ctx*,struct vb2_v4l2_buffer*,struct vb2_v4l2_buffer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
 struct vim2m_ctx *VAR_1 = VAR_0;
 struct vb2_v4l2_buffer *VAR_2, *VAR_3;

 VAR_2 = FUNC_6(VAR_1->fh.m2m_ctx);
 VAR_3 = FUNC_5(VAR_1->fh.m2m_ctx);


 FUNC_4(VAR_2->vb2_buf.req_obj.req,
    &VAR_1->hdl);

 FUNC_0(VAR_1, VAR_2, VAR_3);


 FUNC_3(VAR_2->vb2_buf.req_obj.req,
       &VAR_1->hdl);


 FUNC_2(&VAR_1->work_run, FUNC_1(VAR_1->transtime));
}
