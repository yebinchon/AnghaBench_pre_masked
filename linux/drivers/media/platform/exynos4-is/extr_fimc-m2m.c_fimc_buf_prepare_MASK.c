
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {TYPE_2__* vb2_queue; } ;
struct fimc_frame {int * payload; TYPE_1__* fmt; } ;
struct fimc_ctx {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int memplanes; } ;


 scalar_t__ FUNC_0 (struct fimc_frame*) ;
 int FUNC_1 (struct fimc_frame*) ;
 struct fimc_frame* FUNC_2 (struct fimc_ctx*,int ) ;
 struct fimc_ctx* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct vb2_buffer*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_0)
{
 struct fimc_ctx *VAR_1 = FUNC_3(VAR_0->vb2_queue);
 struct fimc_frame *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1, VAR_0->vb2_queue->type);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2->fmt->memplanes; VAR_3++)
  FUNC_4(VAR_0, VAR_3, VAR_2->payload[VAR_3]);

 return 0;
}
