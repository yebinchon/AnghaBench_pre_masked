
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_buffer {int dummy; } ;
struct TYPE_8__ {TYPE_3__* m2m_ctx; } ;
struct cedrus_ctx {int dst_fmt; TYPE_4__ fh; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {struct vb2_buffer** bufs; } ;
struct TYPE_6__ {TYPE_1__ q; } ;
struct TYPE_7__ {TYPE_2__ cap_q_ctx; } ;


 int FUNC_0 (struct vb2_buffer*,int *,unsigned int) ;

__attribute__((used)) static inline dma_addr_t FUNC_1(struct cedrus_ctx *VAR_0,
          int VAR_1, unsigned int VAR_2)
{
 struct vb2_buffer *VAR_3;

 if (VAR_1 < 0)
  return 0;

 VAR_3 = VAR_0->fh.m2m_ctx->cap_q_ctx.q.bufs[VAR_1];
 return VAR_3 ? FUNC_0(VAR_3, &VAR_0->dst_fmt, VAR_2) : 0;
}
