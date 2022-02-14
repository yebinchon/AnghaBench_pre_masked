
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int error; } ;
struct nal_h264_pps {scalar_t__ pic_parameter_set_id; scalar_t__ seq_parameter_set_id; scalar_t__ num_slice_groups_minus1; scalar_t__ slice_group_map_type; scalar_t__* run_length_minus1; scalar_t__* top_left; scalar_t__* bottom_right; scalar_t__ slice_group_change_rate_minus1; scalar_t__ pic_size_in_map_units_minus1; scalar_t__ num_ref_idx_l0_default_active_minus1; scalar_t__ num_ref_idx_l1_default_active_minus1; int second_chroma_qp_index_offset; scalar_t__ pic_scaling_matrix_present_flag; scalar_t__ transform_8x8_mode_flag; scalar_t__ redundant_pic_cnt_present_flag; scalar_t__ constrained_intra_pred_flag; scalar_t__ deblocking_filter_control_present_flag; int chroma_qp_index_offset; int pic_init_qs_minus26; int pic_init_qp_minus26; int weighted_bipred_idc; scalar_t__ weighted_pred_flag; int * slice_group_id; scalar_t__ slice_group_change_direction_flag; scalar_t__ bottom_field_pic_order_in_frame_present_flag; scalar_t__ entropy_coding_mode_flag; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rbsp*,scalar_t__*) ;
 int FUNC_2 (struct rbsp*,int,int *) ;
 int FUNC_3 (struct rbsp*,int *) ;
 int FUNC_4 (struct rbsp*,scalar_t__*) ;

__attribute__((used)) static void FUNC_5(struct rbsp *VAR_1, struct nal_h264_pps *VAR_2)
{
 int VAR_3;

 FUNC_4(VAR_1, &VAR_2->pic_parameter_set_id);
 FUNC_4(VAR_1, &VAR_2->seq_parameter_set_id);
 FUNC_1(VAR_1, &VAR_2->entropy_coding_mode_flag);
 FUNC_1(VAR_1, &VAR_2->bottom_field_pic_order_in_frame_present_flag);
 FUNC_4(VAR_1, &VAR_2->num_slice_groups_minus1);
 if (VAR_2->num_slice_groups_minus1 > 0) {
  FUNC_4(VAR_1, &VAR_2->slice_group_map_type);
  switch (VAR_2->slice_group_map_type) {
  case 0:
   for (VAR_3 = 0; VAR_3 < VAR_2->num_slice_groups_minus1; VAR_3++)
    FUNC_4(VAR_1, &VAR_2->run_length_minus1[VAR_3]);
   break;
  case 2:
   for (VAR_3 = 0; VAR_3 < VAR_2->num_slice_groups_minus1; VAR_3++) {
    FUNC_4(VAR_1, &VAR_2->top_left[VAR_3]);
    FUNC_4(VAR_1, &VAR_2->bottom_right[VAR_3]);
   }
   break;
  case 3: case 4: case 5:
   FUNC_1(VAR_1, &VAR_2->slice_group_change_direction_flag);
   FUNC_4(VAR_1, &VAR_2->slice_group_change_rate_minus1);
   break;
  case 6:
   FUNC_4(VAR_1, &VAR_2->pic_size_in_map_units_minus1);
   for (VAR_3 = 0; VAR_3 < VAR_2->pic_size_in_map_units_minus1; VAR_3++)
    FUNC_2(VAR_1,
       FUNC_0(VAR_2->num_slice_groups_minus1 + 1),
       &VAR_2->slice_group_id[VAR_3]);
   break;
  default:
   break;
  }
 }
 FUNC_4(VAR_1, &VAR_2->num_ref_idx_l0_default_active_minus1);
 FUNC_4(VAR_1, &VAR_2->num_ref_idx_l1_default_active_minus1);
 FUNC_1(VAR_1, &VAR_2->weighted_pred_flag);
 FUNC_2(VAR_1, 2, &VAR_2->weighted_bipred_idc);
 FUNC_3(VAR_1, &VAR_2->pic_init_qp_minus26);
 FUNC_3(VAR_1, &VAR_2->pic_init_qs_minus26);
 FUNC_3(VAR_1, &VAR_2->chroma_qp_index_offset);
 FUNC_1(VAR_1, &VAR_2->deblocking_filter_control_present_flag);
 FUNC_1(VAR_1, &VAR_2->constrained_intra_pred_flag);
 FUNC_1(VAR_1, &VAR_2->redundant_pic_cnt_present_flag);
 if ( 0) {
  FUNC_1(VAR_1, &VAR_2->transform_8x8_mode_flag);
  FUNC_1(VAR_1, &VAR_2->pic_scaling_matrix_present_flag);
  if (VAR_2->pic_scaling_matrix_present_flag)
   VAR_1->error = -VAR_0;
  FUNC_3(VAR_1, &VAR_2->second_chroma_qp_index_offset);
 }
}
