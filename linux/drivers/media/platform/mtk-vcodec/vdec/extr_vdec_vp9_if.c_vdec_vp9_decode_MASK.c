
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vdec_fb {int dummy; } ;
struct mtk_vcodec_mem {unsigned int size; scalar_t__ va; } ;
struct vdec_vp9_vsi {unsigned char* sf_bs_buf; unsigned int sf_frm_cnt; unsigned int sf_frm_idx; size_t sf_next_ref_fb_idx; size_t new_fb_idx; scalar_t__ frm_to_show_idx; scalar_t__ resolution_changed; TYPE_4__* frm_bufs; TYPE_5__* frm_refs; scalar_t__ show_existing_frame; int frm_num; TYPE_2__* sf_ref_fb; int * sf_frm_sz; scalar_t__* sf_frm_offset; int sf_init; struct vdec_fb fb; struct mtk_vcodec_mem bs; } ;
struct TYPE_6__ {int size; int va; } ;
struct vdec_vp9_inst {int total_frm_cnt; struct vdec_fb* cur_fb; int vpu; TYPE_1__ seg_id_buf; struct vdec_vp9_vsi* vsi; } ;
struct TYPE_10__ {unsigned int idx; TYPE_3__* buf; } ;
struct TYPE_8__ {struct vdec_fb* fb; } ;
struct TYPE_9__ {TYPE_3__ buf; } ;
struct TYPE_7__ {struct vdec_fb fb; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (void*,void*,unsigned int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct vdec_vp9_inst*,char*,...) ;
 int FUNC_4 (struct vdec_vp9_inst*,char*) ;
 int FUNC_5 (struct vdec_vp9_inst*,struct vdec_vp9_vsi*) ;
 int FUNC_6 (struct vdec_vp9_inst*,struct vdec_fb*) ;
 int FUNC_7 (struct vdec_vp9_inst*,struct vdec_fb*) ;
 int FUNC_8 (struct vdec_vp9_inst*) ;
 int FUNC_9 (struct vdec_vp9_inst*) ;
 scalar_t__ FUNC_10 (struct vdec_vp9_inst*) ;
 int FUNC_11 (struct vdec_vp9_inst*,struct vdec_fb*) ;
 int FUNC_12 (struct vdec_vp9_inst*,size_t*,scalar_t__) ;
 int FUNC_13 (struct vdec_vp9_inst*) ;
 int FUNC_14 (int *,unsigned int*,int) ;

__attribute__((used)) static int FUNC_15(void *VAR_4, struct mtk_vcodec_mem *VAR_5,
      struct vdec_fb *VAR_6, bool *VAR_7)
{
 int VAR_8 = 0;
 struct vdec_vp9_inst *VAR_9 = (struct vdec_vp9_inst *)VAR_4;
 struct vdec_vp9_vsi *VAR_10 = VAR_9->vsi;
 u32 VAR_11[3];
 int VAR_12;

 *VAR_7 = 0;

 if ((VAR_5 == ((void*)0)) && (VAR_6 == ((void*)0))) {
  FUNC_3(VAR_9, "[EOS]");
  FUNC_13(VAR_9);
  return VAR_8;
 }

 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_9, "bs == NULL");
  return -VAR_0;
 }

 FUNC_3(VAR_9, "Input BS Size = %zu", VAR_5->size);

 while (1) {
  struct vdec_fb *VAR_13 = ((void*)0);

  VAR_11[0] = *((unsigned int *)VAR_5->va);
  VAR_11[1] = *((unsigned int *)(VAR_5->va + 4));
  VAR_11[2] = *((unsigned int *)(VAR_5->va + 8));

  VAR_10->bs = *VAR_5;

  if (VAR_6)
   VAR_10->fb = *VAR_6;

  if (!VAR_10->sf_init) {
   unsigned int VAR_14;
   unsigned int VAR_15;
   unsigned char *VAR_16;
   unsigned char *VAR_17;

   VAR_14 = VAR_5->size > VAR_3 ?
     VAR_3 : VAR_5->size;
   VAR_15 = VAR_3 - VAR_14;
   VAR_16 = VAR_5->va + VAR_5->size - VAR_14;
   VAR_17 = VAR_10->sf_bs_buf + VAR_15;
   FUNC_1(VAR_17, VAR_16, VAR_14);
  } else {
   if ((VAR_10->sf_frm_cnt > 0) &&
    (VAR_10->sf_frm_idx < VAR_10->sf_frm_cnt)) {
    unsigned int VAR_18 = VAR_10->sf_frm_idx;

    FUNC_1((void *)VAR_5->va,
     (void *)(VAR_5->va +
     VAR_10->sf_frm_offset[VAR_18]),
     VAR_10->sf_frm_sz[VAR_18]);
   }
  }
  FUNC_2(VAR_9->seg_id_buf.va, 0, VAR_9->seg_id_buf.size);
  VAR_8 = FUNC_14(&VAR_9->vpu, VAR_11, 3);
  if (VAR_8) {
   FUNC_4(VAR_9, "vpu_dec_start failed");
   goto DECODE_ERROR;
  }

  VAR_8 = FUNC_5(VAR_9, VAR_10);
  if (VAR_8) {
   FUNC_4(VAR_9, "Invalid values from VPU.");
   goto DECODE_ERROR;
  }

  if (VAR_10->resolution_changed) {
   if (!FUNC_8(VAR_9)) {
    VAR_8 = -VAR_1;
    goto DECODE_ERROR;
   }
  }

  if (VAR_10->sf_frm_cnt > 0) {
   VAR_13 = &VAR_10->sf_ref_fb[VAR_10->sf_next_ref_fb_idx].fb;

   if (VAR_10->sf_frm_idx < VAR_10->sf_frm_cnt)
    VAR_9->cur_fb = VAR_13;
   else
    VAR_9->cur_fb = VAR_6;
  } else {
   VAR_9->cur_fb = VAR_6;
  }

  VAR_10->frm_bufs[VAR_10->new_fb_idx].buf.fb = VAR_9->cur_fb;
  if (!FUNC_11(VAR_9, VAR_9->cur_fb))
   FUNC_7(VAR_9, VAR_9->cur_fb);

  FUNC_3(VAR_9, "[#pic %d]", VAR_10->frm_num);

  if (VAR_10->show_existing_frame)
   FUNC_3(VAR_9,
    "drv->new_fb_idx=%d, drv->frm_to_show_idx=%d",
    VAR_10->new_fb_idx, VAR_10->frm_to_show_idx);

  if (VAR_10->show_existing_frame && (VAR_10->frm_to_show_idx <
     VAR_2)) {
   FUNC_3(VAR_9,
    "Skip Decode drv->new_fb_idx=%d, drv->frm_to_show_idx=%d",
    VAR_10->new_fb_idx, VAR_10->frm_to_show_idx);

   FUNC_12(VAR_9, &VAR_10->new_fb_idx,
     VAR_10->frm_to_show_idx);
  }




  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->frm_refs); VAR_12++) {
   unsigned int VAR_19 = VAR_10->frm_refs[VAR_12].idx;

   VAR_10->frm_refs[VAR_12].buf = &VAR_10->frm_bufs[VAR_19].buf;
  }

  if (VAR_10->resolution_changed) {
   *VAR_7 = 1;
   FUNC_3(VAR_9, "VDEC_ST_RESOLUTION_CHANGED");

   VAR_8 = 0;
   goto DECODE_ERROR;
  }

  if (FUNC_9(VAR_9) != 1) {
   FUNC_4(VAR_9, "vp9_decode_end_proc");
   VAR_8 = -VAR_0;
   goto DECODE_ERROR;
  }

  if (FUNC_10(VAR_9))
   break;

 }
 VAR_9->total_frm_cnt++;

DECODE_ERROR:
 if (VAR_8 < 0)
  FUNC_6(VAR_9, VAR_6);

 return VAR_8;
}
