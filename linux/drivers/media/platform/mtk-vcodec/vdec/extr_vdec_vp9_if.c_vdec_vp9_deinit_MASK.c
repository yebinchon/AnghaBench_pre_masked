
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_mem {scalar_t__ va; } ;
struct vdec_vp9_inst {int ctx; struct mtk_vcodec_mem seg_id_buf; struct mtk_vcodec_mem mv_buf; int vpu; } ;


 int FUNC_0 (struct vdec_vp9_inst*,char*) ;
 int FUNC_1 (int ,struct mtk_vcodec_mem*) ;
 int FUNC_2 (struct vdec_vp9_inst*) ;
 int FUNC_3 (struct vdec_vp9_inst*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct vdec_vp9_inst *VAR_1 = (struct vdec_vp9_inst *)VAR_0;
 struct mtk_vcodec_mem *VAR_2;
 int VAR_3 = 0;

 VAR_3 = FUNC_4(&VAR_1->vpu);
 if (VAR_3)
  FUNC_0(VAR_1, "vpu_dec_deinit failed");

 VAR_2 = &VAR_1->mv_buf;
 if (VAR_2->va)
  FUNC_1(VAR_1->ctx, VAR_2);

 VAR_2 = &VAR_1->seg_id_buf;
 if (VAR_2->va)
  FUNC_1(VAR_1->ctx, VAR_2);

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
}
