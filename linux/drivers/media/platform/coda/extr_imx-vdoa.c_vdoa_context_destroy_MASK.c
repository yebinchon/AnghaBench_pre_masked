
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdoa_data {int vdoa_clk; struct vdoa_ctx* curr_ctx; } ;
struct vdoa_ctx {struct vdoa_data* vdoa; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vdoa_ctx*) ;
 int FUNC_2 (struct vdoa_ctx*) ;

void FUNC_3(struct vdoa_ctx *VAR_0)
{
 struct vdoa_data *VAR_1 = VAR_0->vdoa;

 if (VAR_1->curr_ctx == VAR_0) {
  FUNC_2(VAR_1->curr_ctx);
  VAR_1->curr_ctx = ((void*)0);
 }

 FUNC_0(VAR_1->vdoa_clk);
 FUNC_1(VAR_0);
}
