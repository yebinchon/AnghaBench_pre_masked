
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amvdec_session {TYPE_4__* m2m_ctx; TYPE_1__* core; } ;
struct TYPE_7__ {int q; } ;
struct TYPE_6__ {int q; } ;
struct TYPE_8__ {TYPE_3__ out_q_ctx; TYPE_2__ cap_q_ctx; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct amvdec_session *VAR_0)
{
 FUNC_0(VAR_0->core->dev, "Aborting decoding session!\n");
 FUNC_1(&VAR_0->m2m_ctx->cap_q_ctx.q);
 FUNC_1(&VAR_0->m2m_ctx->out_q_ctx.q);
}
