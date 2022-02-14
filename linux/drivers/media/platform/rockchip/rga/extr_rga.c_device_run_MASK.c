
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct rockchip_rga {int ctrl_lock; struct rga_ctx* curr; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct rga_ctx {TYPE_1__ fh; struct rockchip_rga* rga; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rockchip_rga*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct rga_ctx *VAR_1 = VAR_0;
 struct rockchip_rga *VAR_2 = VAR_1->rga;
 struct vb2_v4l2_buffer *VAR_3, *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->ctrl_lock, VAR_5);

 VAR_2->curr = VAR_1;

 VAR_3 = FUNC_5(VAR_1->fh.m2m_ctx);
 VAR_4 = FUNC_4(VAR_1->fh.m2m_ctx);

 FUNC_0(&VAR_3->vb2_buf);
 FUNC_0(&VAR_4->vb2_buf);

 FUNC_1(VAR_2);

 FUNC_3(&VAR_2->ctrl_lock, VAR_5);
}
