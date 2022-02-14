
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int q; } ;
struct TYPE_3__ {int q; } ;
struct v4l2_m2m_ctx {TYPE_2__ out_q_ctx; TYPE_1__ cap_q_ctx; } ;


 int FUNC_0 (struct v4l2_m2m_ctx*) ;
 int FUNC_1 (struct v4l2_m2m_ctx*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct v4l2_m2m_ctx *VAR_0)
{

 FUNC_1(VAR_0);

 FUNC_2(&VAR_0->cap_q_ctx.q);
 FUNC_2(&VAR_0->out_q_ctx.q);

 FUNC_0(VAR_0);
}
