
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bit_rate_scale; int cpb_size_scale; int* bit_rate_value_minus1; int* cpb_size_value_minus1; int* cbr_flag; int initial_cpb_removal_delay_length_minus1; int cpb_removal_delay_length_minus1; int dpb_output_delay_length_minus1; scalar_t__ time_offset_length; scalar_t__ cpb_cnt_minus1; } ;
struct TYPE_6__ {int video_signal_type_present_flag; int video_format; int colour_description_present_flag; int colour_primaries; int transfer_characteristics; int matrix_coefficients; int chroma_loc_info_present_flag; int timing_info_present_flag; int num_units_in_tick; int time_scale; int fixed_frame_rate_flag; int vcl_hrd_parameters_present_flag; int pic_struct_present_flag; scalar_t__ bitstream_restriction_flag; scalar_t__ low_delay_hrd_flag; TYPE_1__ vcl_hrd_parameters; scalar_t__ nal_hrd_parameters_present_flag; scalar_t__ chroma_sample_loc_type_bottom_field; scalar_t__ chroma_sample_loc_type_top_field; scalar_t__ video_full_range_flag; scalar_t__ overscan_info_present_flag; scalar_t__ aspect_ratio_info_present_flag; } ;
struct nal_h264_sps {int constraint_set1_flag; int log2_max_pic_order_cnt_lsb_minus4; int max_num_ref_frames; int frame_mbs_only_flag; int direct_8x8_inference_flag; int frame_cropping_flag; unsigned int crop_right; unsigned int crop_bottom; int vui_parameters_present_flag; TYPE_3__ vui; scalar_t__ crop_top; scalar_t__ crop_left; scalar_t__ mb_adaptive_frame_field_flag; void* pic_height_in_map_units_minus1; void* pic_width_in_mbs_minus1; scalar_t__ gaps_in_frame_num_value_allowed_flag; scalar_t__ pic_order_cnt_type; scalar_t__ log2_max_frame_num_minus4; scalar_t__ seq_parameter_set_id; int level_idc; scalar_t__ constraint_set5_flag; scalar_t__ constraint_set4_flag; scalar_t__ constraint_set3_flag; scalar_t__ constraint_set2_flag; scalar_t__ constraint_set0_flag; int profile_idc; } ;
struct allegro_dev {TYPE_2__* plat_dev; } ;
struct allegro_channel {unsigned int width; unsigned int height; int bitrate_peak; int cpb_size; int level; int profile; struct allegro_dev* dev; } ;
typedef int ssize_t ;
struct TYPE_5__ {int dev; } ;


 void* FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct nal_h264_sps*) ;
 struct nal_h264_sps* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,void*,size_t,struct nal_h264_sps*) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_7(struct allegro_channel *VAR_3,
          void *VAR_4, size_t VAR_5)
{
 struct allegro_dev *VAR_6 = VAR_3->dev;
 struct nal_h264_sps *VAR_7;
 ssize_t VAR_8;
 unsigned int VAR_9 = VAR_2;

 unsigned int VAR_10 = 2;
 unsigned int VAR_11 = 2;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->profile_idc = FUNC_4(VAR_3->profile);
 VAR_7->constraint_set0_flag = 0;
 VAR_7->constraint_set1_flag = 1;
 VAR_7->constraint_set2_flag = 0;
 VAR_7->constraint_set3_flag = 0;
 VAR_7->constraint_set4_flag = 0;
 VAR_7->constraint_set5_flag = 0;
 VAR_7->level_idc = FUNC_3(VAR_3->level);
 VAR_7->seq_parameter_set_id = 0;
 VAR_7->log2_max_frame_num_minus4 = 0;
 VAR_7->pic_order_cnt_type = 0;
 VAR_7->log2_max_pic_order_cnt_lsb_minus4 = 6;
 VAR_7->max_num_ref_frames = 3;
 VAR_7->gaps_in_frame_num_value_allowed_flag = 0;
 VAR_7->pic_width_in_mbs_minus1 =
  FUNC_0(VAR_3->width, VAR_9) - 1;
 VAR_7->pic_height_in_map_units_minus1 =
  FUNC_0(VAR_3->height, VAR_9) - 1;
 VAR_7->frame_mbs_only_flag = 1;
 VAR_7->mb_adaptive_frame_field_flag = 0;
 VAR_7->direct_8x8_inference_flag = 1;
 VAR_7->frame_cropping_flag =
  (VAR_3->width % VAR_9) || (VAR_3->height % VAR_9);
 if (VAR_7->frame_cropping_flag) {
  VAR_7->crop_left = 0;
  VAR_7->crop_right = (FUNC_6(VAR_3->width, VAR_9) - VAR_3->width) / VAR_10;
  VAR_7->crop_top = 0;
  VAR_7->crop_bottom = (FUNC_6(VAR_3->height, VAR_9) - VAR_3->height) / VAR_11;
 }
 VAR_7->vui_parameters_present_flag = 1;
 VAR_7->vui.aspect_ratio_info_present_flag = 0;
 VAR_7->vui.overscan_info_present_flag = 0;
 VAR_7->vui.video_signal_type_present_flag = 1;
 VAR_7->vui.video_format = 1;
 VAR_7->vui.video_full_range_flag = 0;
 VAR_7->vui.colour_description_present_flag = 1;
 VAR_7->vui.colour_primaries = 5;
 VAR_7->vui.transfer_characteristics = 5;
 VAR_7->vui.matrix_coefficients = 5;
 VAR_7->vui.chroma_loc_info_present_flag = 1;
 VAR_7->vui.chroma_sample_loc_type_top_field = 0;
 VAR_7->vui.chroma_sample_loc_type_bottom_field = 0;
 VAR_7->vui.timing_info_present_flag = 1;
 VAR_7->vui.num_units_in_tick = 1;
 VAR_7->vui.time_scale = 50;
 VAR_7->vui.fixed_frame_rate_flag = 1;
 VAR_7->vui.nal_hrd_parameters_present_flag = 0;
 VAR_7->vui.vcl_hrd_parameters_present_flag = 1;
 VAR_7->vui.vcl_hrd_parameters.cpb_cnt_minus1 = 0;
 VAR_7->vui.vcl_hrd_parameters.bit_rate_scale = 0;
 VAR_7->vui.vcl_hrd_parameters.cpb_size_scale = 1;

 VAR_7->vui.vcl_hrd_parameters.bit_rate_value_minus1[0] =
  VAR_3->bitrate_peak / (1 << (6 + VAR_7->vui.vcl_hrd_parameters.bit_rate_scale)) - 1;

 VAR_7->vui.vcl_hrd_parameters.cpb_size_value_minus1[0] =
  (VAR_3->cpb_size * 1000) / (1 << (4 + VAR_7->vui.vcl_hrd_parameters.cpb_size_scale)) - 1;
 VAR_7->vui.vcl_hrd_parameters.cbr_flag[0] = 1;
 VAR_7->vui.vcl_hrd_parameters.initial_cpb_removal_delay_length_minus1 = 31;
 VAR_7->vui.vcl_hrd_parameters.cpb_removal_delay_length_minus1 = 31;
 VAR_7->vui.vcl_hrd_parameters.dpb_output_delay_length_minus1 = 31;
 VAR_7->vui.vcl_hrd_parameters.time_offset_length = 0;
 VAR_7->vui.low_delay_hrd_flag = 0;
 VAR_7->vui.pic_struct_present_flag = 1;
 VAR_7->vui.bitstream_restriction_flag = 0;

 VAR_8 = FUNC_5(&VAR_6->plat_dev->dev, VAR_4, VAR_5, VAR_7);

 FUNC_1(VAR_7);

 return VAR_8;
}
