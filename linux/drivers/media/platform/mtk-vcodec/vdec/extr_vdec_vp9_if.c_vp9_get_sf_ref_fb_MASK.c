
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vdec_vp9_vsi {TYPE_2__* sf_ref_fb; scalar_t__ buf_len_sz_c; scalar_t__ buf_sz_c_bs; scalar_t__ buf_len_sz_y; scalar_t__ buf_sz_y_bs; } ;
struct vdec_vp9_inst {int ctx; struct vdec_vp9_vsi* vsi; } ;
struct mtk_vcodec_mem {scalar_t__ size; int * va; } ;
struct TYPE_3__ {struct mtk_vcodec_mem base_c; struct mtk_vcodec_mem base_y; } ;
struct TYPE_4__ {scalar_t__ used; TYPE_1__ fb; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct vdec_vp9_inst*,char*) ;
 scalar_t__ FUNC_2 (int ,struct mtk_vcodec_mem*) ;

__attribute__((used)) static int FUNC_3(struct vdec_vp9_inst *VAR_0)
{
 int VAR_1;
 struct mtk_vcodec_mem *VAR_2;
 struct mtk_vcodec_mem *VAR_3;
 struct vdec_vp9_vsi *VAR_4 = VAR_0->vsi;

 for (VAR_1 = 0;
  VAR_1 < FUNC_0(VAR_4->sf_ref_fb);
  VAR_1++) {
  if (VAR_4->sf_ref_fb[VAR_1].fb.base_y.va &&
      VAR_4->sf_ref_fb[VAR_1].used == 0) {
   return VAR_1;
  }
 }

 for (VAR_1 = 0;
  VAR_1 < FUNC_0(VAR_4->sf_ref_fb);
  VAR_1++) {
  if (VAR_4->sf_ref_fb[VAR_1].fb.base_y.va == ((void*)0))
   break;
 }

 if (VAR_1 == FUNC_0(VAR_4->sf_ref_fb)) {
  FUNC_1(VAR_0, "List Full");
  return -1;
 }

 VAR_2 = &VAR_4->sf_ref_fb[VAR_1].fb.base_y;
 VAR_2->size = VAR_4->buf_sz_y_bs +
  VAR_4->buf_len_sz_y;

 if (FUNC_2(VAR_0->ctx, VAR_2)) {
  FUNC_1(VAR_0, "Cannot allocate sf_ref_buf y_buf");
  return -1;
 }

 VAR_3 = &VAR_4->sf_ref_fb[VAR_1].fb.base_c;
 VAR_3->size = VAR_4->buf_sz_c_bs +
  VAR_4->buf_len_sz_c;

 if (FUNC_2(VAR_0->ctx, VAR_3)) {
  FUNC_1(VAR_0, "Cannot allocate sf_ref_fb c_buf");
  return -1;
 }
 VAR_4->sf_ref_fb[VAR_1].used = 0;

 return VAR_1;
}
