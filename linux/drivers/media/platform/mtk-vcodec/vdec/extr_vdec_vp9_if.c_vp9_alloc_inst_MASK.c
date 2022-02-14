
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_mem {int size; struct vdec_vp9_inst* va; } ;
struct vdec_vp9_inst {struct mtk_vcodec_mem mem; } ;
struct mtk_vcodec_ctx {int dummy; } ;
typedef int mem ;


 int FUNC_0 (struct mtk_vcodec_mem*,int ,int) ;
 int FUNC_1 (struct mtk_vcodec_ctx*,struct mtk_vcodec_mem*) ;

__attribute__((used)) static struct vdec_vp9_inst *FUNC_2(struct mtk_vcodec_ctx *VAR_0)
{
 int VAR_1;
 struct mtk_vcodec_mem VAR_2;
 struct vdec_vp9_inst *VAR_3;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.size = sizeof(struct vdec_vp9_inst);
 VAR_1 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_1)
  return ((void*)0);

 VAR_3 = VAR_2.va;
 VAR_3->mem = VAR_2;

 return VAR_3;
}
