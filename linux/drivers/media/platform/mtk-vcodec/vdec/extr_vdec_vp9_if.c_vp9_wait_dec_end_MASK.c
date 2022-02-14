
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vp9_inst {struct mtk_vcodec_ctx* ctx; } ;
struct mtk_vcodec_ctx {int irq_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtk_vcodec_ctx*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct vdec_vp9_inst *VAR_3)
{
 struct mtk_vcodec_ctx *VAR_4 = VAR_3->ctx;

 FUNC_0(VAR_3->ctx,
   VAR_0,
   VAR_2);

 if (VAR_4->irq_status & VAR_1)
  return 1;
 else
  return 0;
}
