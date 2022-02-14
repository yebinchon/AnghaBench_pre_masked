
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_mem {scalar_t__ va; } ;
struct vdec_vp9_inst {int ctx; struct mtk_vcodec_mem mem; } ;


 int FUNC_0 (int ,struct mtk_vcodec_mem*) ;

__attribute__((used)) static void FUNC_1(struct vdec_vp9_inst *VAR_0)
{
 struct mtk_vcodec_mem VAR_1;

 VAR_1 = VAR_0->mem;
 if (VAR_1.va)
  FUNC_0(VAR_0->ctx, &VAR_1);
}
