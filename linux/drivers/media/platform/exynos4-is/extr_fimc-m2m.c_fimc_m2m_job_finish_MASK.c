
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct fimc_ctx {TYPE_3__ fh; TYPE_2__* fimc_dev; } ;
struct TYPE_4__ {int m2m_dev; } ;
struct TYPE_5__ {TYPE_1__ m2m; } ;


 int FUNC_0 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;

void FUNC_4(struct fimc_ctx *VAR_0, int VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2, *VAR_3;

 if (!VAR_0 || !VAR_0->fh.m2m_ctx)
  return;

 VAR_2 = FUNC_3(VAR_0->fh.m2m_ctx);
 VAR_3 = FUNC_1(VAR_0->fh.m2m_ctx);

 if (VAR_2)
  FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  FUNC_0(VAR_3, VAR_1);
 if (VAR_2 && VAR_3)
  FUNC_2(VAR_0->fimc_dev->m2m.m2m_dev,
        VAR_0->fh.m2m_ctx);
}
