
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* m2m_ctx; } ;
struct vicodec_ctx {int has_stopped; int lock; TYPE_4__ fh; scalar_t__ is_draining; } ;
struct v4l2_encoder_cmd {scalar_t__ cmd; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int q; } ;
struct TYPE_5__ {int q; } ;
struct TYPE_7__ {TYPE_2__ cap_q_ctx; TYPE_1__ out_q_ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vicodec_ctx* FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct file*,void*,struct v4l2_encoder_cmd*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vicodec_ctx*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2, void *VAR_3,
       struct v4l2_encoder_cmd *VAR_4)
{
 struct vicodec_ctx *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 if (!FUNC_5(&VAR_5->fh.m2m_ctx->cap_q_ctx.q) ||
     !FUNC_5(&VAR_5->fh.m2m_ctx->out_q_ctx.q))
  return 0;

 if (VAR_4->cmd == VAR_1)
  return FUNC_6(VAR_5);
 VAR_6 = 0;
 FUNC_1(VAR_5->lock);
 if (VAR_5->is_draining) {
  VAR_6 = -VAR_0;
 } else if (VAR_5->has_stopped) {
  VAR_5->has_stopped = 0;
  FUNC_4(&VAR_5->fh.m2m_ctx->cap_q_ctx.q);
 }
 FUNC_2(VAR_5->lock);
 return VAR_6;
}
