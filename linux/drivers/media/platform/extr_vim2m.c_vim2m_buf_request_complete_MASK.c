
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vim2m_ctx {int hdl; } ;
struct TYPE_2__ {int req; } ;
struct vb2_buffer {TYPE_1__ req_obj; int vb2_queue; } ;


 int FUNC_0 (int ,int *) ;
 struct vim2m_ctx* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vb2_buffer *VAR_0)
{
 struct vim2m_ctx *VAR_1 = FUNC_1(VAR_0->vb2_queue);

 FUNC_0(VAR_0->req_obj.req, &VAR_1->hdl);
}
