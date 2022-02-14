
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nal_h264_pps {int num_ref_idx_l0_default_active_minus1; int num_ref_idx_l1_default_active_minus1; int deblocking_filter_control_present_flag; scalar_t__ second_chroma_qp_index_offset; scalar_t__ pic_scaling_matrix_present_flag; scalar_t__ transform_8x8_mode_flag; scalar_t__ redundant_pic_cnt_present_flag; scalar_t__ constrained_intra_pred_flag; scalar_t__ chroma_qp_index_offset; scalar_t__ pic_init_qs_minus26; scalar_t__ pic_init_qp_minus26; scalar_t__ weighted_bipred_idc; scalar_t__ weighted_pred_flag; scalar_t__ num_slice_groups_minus1; scalar_t__ bottom_field_pic_order_in_frame_present_flag; scalar_t__ entropy_coding_mode_flag; scalar_t__ seq_parameter_set_id; scalar_t__ pic_parameter_set_id; } ;
struct allegro_dev {TYPE_1__* plat_dev; } ;
struct allegro_channel {struct allegro_dev* dev; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nal_h264_pps*) ;
 struct nal_h264_pps* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,void*,size_t,struct nal_h264_pps*) ;

__attribute__((used)) static ssize_t FUNC_3(struct allegro_channel *VAR_2,
          void *VAR_3, size_t VAR_4)
{
 struct allegro_dev *VAR_5 = VAR_2->dev;
 struct nal_h264_pps *VAR_6;
 ssize_t VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->pic_parameter_set_id = 0;
 VAR_6->seq_parameter_set_id = 0;
 VAR_6->entropy_coding_mode_flag = 0;
 VAR_6->bottom_field_pic_order_in_frame_present_flag = 0;
 VAR_6->num_slice_groups_minus1 = 0;
 VAR_6->num_ref_idx_l0_default_active_minus1 = 2;
 VAR_6->num_ref_idx_l1_default_active_minus1 = 2;
 VAR_6->weighted_pred_flag = 0;
 VAR_6->weighted_bipred_idc = 0;
 VAR_6->pic_init_qp_minus26 = 0;
 VAR_6->pic_init_qs_minus26 = 0;
 VAR_6->chroma_qp_index_offset = 0;
 VAR_6->deblocking_filter_control_present_flag = 1;
 VAR_6->constrained_intra_pred_flag = 0;
 VAR_6->redundant_pic_cnt_present_flag = 0;
 VAR_6->transform_8x8_mode_flag = 0;
 VAR_6->pic_scaling_matrix_present_flag = 0;
 VAR_6->second_chroma_qp_index_offset = 0;

 VAR_7 = FUNC_2(&VAR_5->plat_dev->dev, VAR_3, VAR_4, VAR_6);

 FUNC_0(VAR_6);

 return VAR_7;
}
