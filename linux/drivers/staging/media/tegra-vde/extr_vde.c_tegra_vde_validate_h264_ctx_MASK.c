
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_vde_h264_decoder_ctx {int dpb_frames_nb; int level_idc; int pic_init_qp; int log2_max_pic_order_cnt_lsb; int log2_max_frame_num; int chroma_qp_index_offset; int pic_order_cnt_type; int num_ref_idx_l0_active_minus1; int num_ref_idx_l1_active_minus1; int pic_width_in_mbs; int pic_height_in_mbs; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
           struct tegra_vde_h264_decoder_ctx *VAR_2)
{
 if (VAR_2->dpb_frames_nb == 0 || VAR_2->dpb_frames_nb > 17) {
  FUNC_0(VAR_1, "Bad DPB size %u\n", VAR_2->dpb_frames_nb);
  return -VAR_0;
 }

 if (VAR_2->level_idc > 15) {
  FUNC_0(VAR_1, "Bad level value %u\n", VAR_2->level_idc);
  return -VAR_0;
 }

 if (VAR_2->pic_init_qp > 52) {
  FUNC_0(VAR_1, "Bad pic_init_qp value %u\n", VAR_2->pic_init_qp);
  return -VAR_0;
 }

 if (VAR_2->log2_max_pic_order_cnt_lsb > 16) {
  FUNC_0(VAR_1, "Bad log2_max_pic_order_cnt_lsb value %u\n",
   VAR_2->log2_max_pic_order_cnt_lsb);
  return -VAR_0;
 }

 if (VAR_2->log2_max_frame_num > 16) {
  FUNC_0(VAR_1, "Bad log2_max_frame_num value %u\n",
   VAR_2->log2_max_frame_num);
  return -VAR_0;
 }

 if (VAR_2->chroma_qp_index_offset > 31) {
  FUNC_0(VAR_1, "Bad chroma_qp_index_offset value %u\n",
   VAR_2->chroma_qp_index_offset);
  return -VAR_0;
 }

 if (VAR_2->pic_order_cnt_type > 2) {
  FUNC_0(VAR_1, "Bad pic_order_cnt_type value %u\n",
   VAR_2->pic_order_cnt_type);
  return -VAR_0;
 }

 if (VAR_2->num_ref_idx_l0_active_minus1 > 15) {
  FUNC_0(VAR_1, "Bad num_ref_idx_l0_active_minus1 value %u\n",
   VAR_2->num_ref_idx_l0_active_minus1);
  return -VAR_0;
 }

 if (VAR_2->num_ref_idx_l1_active_minus1 > 15) {
  FUNC_0(VAR_1, "Bad num_ref_idx_l1_active_minus1 value %u\n",
   VAR_2->num_ref_idx_l1_active_minus1);
  return -VAR_0;
 }

 if (!VAR_2->pic_width_in_mbs || VAR_2->pic_width_in_mbs > 127) {
  FUNC_0(VAR_1, "Bad pic_width_in_mbs value %u\n",
   VAR_2->pic_width_in_mbs);
  return -VAR_0;
 }

 if (!VAR_2->pic_height_in_mbs || VAR_2->pic_height_in_mbs > 127) {
  FUNC_0(VAR_1, "Bad pic_height_in_mbs value %u\n",
   VAR_2->pic_height_in_mbs);
  return -VAR_0;
 }

 return 0;
}
