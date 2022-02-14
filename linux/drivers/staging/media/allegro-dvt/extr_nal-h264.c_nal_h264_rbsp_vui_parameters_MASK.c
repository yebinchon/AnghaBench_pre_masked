
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int error; } ;
struct nal_h264_vui_parameters {int aspect_ratio_idc; int sar_width; int sar_height; int video_format; int colour_primaries; int transfer_characteristics; int matrix_coefficients; int num_units_in_tick; int time_scale; int max_dec_frame_buffering; int max_num_reorder_frames; int log21_max_mv_length_vertical; int log2_max_mv_length_horizontal; int max_bits_per_mb_denom; int max_bytes_per_pic_denom; scalar_t__ motion_vectors_over_pic_boundaries_flag; scalar_t__ bitstream_restriction_flag; scalar_t__ pic_struct_present_flag; scalar_t__ low_delay_hrd_flag; scalar_t__ vcl_hrd_parameters_present_flag; scalar_t__ nal_hrd_parameters_present_flag; int vcl_hrd_parameters; int nal_hrd_parameters; scalar_t__ fixed_frame_rate_flag; scalar_t__ timing_info_present_flag; int chroma_sample_loc_type_bottom_field; int chroma_sample_loc_type_top_field; scalar_t__ chroma_loc_info_present_flag; scalar_t__ colour_description_present_flag; scalar_t__ video_full_range_flag; scalar_t__ video_signal_type_present_flag; scalar_t__ overscan_appropriate_flag; scalar_t__ overscan_info_present_flag; scalar_t__ aspect_ratio_info_present_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbsp*,int *) ;
 int FUNC_1 (struct rbsp*,scalar_t__*) ;
 int FUNC_2 (struct rbsp*,int,int*) ;
 int FUNC_3 (struct rbsp*,int *) ;

__attribute__((used)) static void FUNC_4(struct rbsp *VAR_1,
      struct nal_h264_vui_parameters *VAR_2)
{
 if (!VAR_2) {
  VAR_1->error = -VAR_0;
  return;
 }

 FUNC_1(VAR_1, &VAR_2->aspect_ratio_info_present_flag);
 if (VAR_2->aspect_ratio_info_present_flag) {
  FUNC_2(VAR_1, 8, &VAR_2->aspect_ratio_idc);
  if (VAR_2->aspect_ratio_idc == 255) {
   FUNC_2(VAR_1, 16, &VAR_2->sar_width);
   FUNC_2(VAR_1, 16, &VAR_2->sar_height);
  }
 }

 FUNC_1(VAR_1, &VAR_2->overscan_info_present_flag);
 if (VAR_2->overscan_info_present_flag)
  FUNC_1(VAR_1, &VAR_2->overscan_appropriate_flag);

 FUNC_1(VAR_1, &VAR_2->video_signal_type_present_flag);
 if (VAR_2->video_signal_type_present_flag) {
  FUNC_2(VAR_1, 3, &VAR_2->video_format);
  FUNC_1(VAR_1, &VAR_2->video_full_range_flag);

  FUNC_1(VAR_1, &VAR_2->colour_description_present_flag);
  if (VAR_2->colour_description_present_flag) {
   FUNC_2(VAR_1, 8, &VAR_2->colour_primaries);
   FUNC_2(VAR_1, 8, &VAR_2->transfer_characteristics);
   FUNC_2(VAR_1, 8, &VAR_2->matrix_coefficients);
  }
 }

 FUNC_1(VAR_1, &VAR_2->chroma_loc_info_present_flag);
 if (VAR_2->chroma_loc_info_present_flag) {
  FUNC_3(VAR_1, &VAR_2->chroma_sample_loc_type_top_field);
  FUNC_3(VAR_1, &VAR_2->chroma_sample_loc_type_bottom_field);
 }

 FUNC_1(VAR_1, &VAR_2->timing_info_present_flag);
 if (VAR_2->timing_info_present_flag) {
  FUNC_2(VAR_1, 32, &VAR_2->num_units_in_tick);
  FUNC_2(VAR_1, 32, &VAR_2->time_scale);
  FUNC_1(VAR_1, &VAR_2->fixed_frame_rate_flag);
 }

 FUNC_1(VAR_1, &VAR_2->nal_hrd_parameters_present_flag);
 if (VAR_2->nal_hrd_parameters_present_flag)
  FUNC_0(VAR_1, &VAR_2->nal_hrd_parameters);

 FUNC_1(VAR_1, &VAR_2->vcl_hrd_parameters_present_flag);
 if (VAR_2->vcl_hrd_parameters_present_flag)
  FUNC_0(VAR_1, &VAR_2->vcl_hrd_parameters);

 if (VAR_2->nal_hrd_parameters_present_flag ||
     VAR_2->vcl_hrd_parameters_present_flag)
  FUNC_1(VAR_1, &VAR_2->low_delay_hrd_flag);

 FUNC_1(VAR_1, &VAR_2->pic_struct_present_flag);

 FUNC_1(VAR_1, &VAR_2->bitstream_restriction_flag);
 if (VAR_2->bitstream_restriction_flag) {
  FUNC_1(VAR_1, &VAR_2->motion_vectors_over_pic_boundaries_flag);
  FUNC_3(VAR_1, &VAR_2->max_bytes_per_pic_denom);
  FUNC_3(VAR_1, &VAR_2->max_bits_per_mb_denom);
  FUNC_3(VAR_1, &VAR_2->log2_max_mv_length_horizontal);
  FUNC_3(VAR_1, &VAR_2->log21_max_mv_length_vertical);
  FUNC_3(VAR_1, &VAR_2->max_num_reorder_frames);
  FUNC_3(VAR_1, &VAR_2->max_dec_frame_buffering);
 }
}
