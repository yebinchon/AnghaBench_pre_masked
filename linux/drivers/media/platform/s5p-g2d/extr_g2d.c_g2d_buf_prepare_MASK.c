
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {TYPE_1__* vb2_queue; } ;
struct g2d_frame {int size; } ;
struct g2d_ctx {int dummy; } ;
struct TYPE_2__ {int type; } ;


 scalar_t__ FUNC_0 (struct g2d_frame*) ;
 int FUNC_1 (struct g2d_frame*) ;
 struct g2d_frame* FUNC_2 (struct g2d_ctx*,int ) ;
 struct g2d_ctx* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct vb2_buffer*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_0)
{
 struct g2d_ctx *VAR_1 = FUNC_3(VAR_0->vb2_queue);
 struct g2d_frame *VAR_2 = FUNC_2(VAR_1, VAR_0->vb2_queue->type);

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 FUNC_4(VAR_0, 0, VAR_2->size);
 return 0;
}
