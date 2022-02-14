
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int hevc; int h264; int mpeg4; } ;
struct TYPE_5__ {int vpx; int hevc; int h264; int mpeg4; } ;
struct venc_controls {int num_b_frames; int num_p_frames; int gop_size; int vp8_max_qp; int vp8_min_qp; int h264_i_period; int header_mode; int h264_loop_filter_mode; int h264_loop_filter_beta; int h264_loop_filter_alpha; int multi_slice_max_mb; int multi_slice_max_bytes; int multi_slice_mode; int h264_max_qp; int h264_min_qp; int h264_b_qp; int h264_p_qp; int h264_i_qp; TYPE_3__ level; TYPE_2__ profile; int h264_entropy_mode; int bitrate_peak; int bitrate; int bitrate_mode; } ;
struct TYPE_4__ {struct venc_controls enc; } ;
struct venus_inst {int lock; int streamon_cap; int streamon_out; TYPE_1__ controls; } ;
struct v4l2_ctrl {int id; int val; } ;
struct hfi_enable {int enable; int layer_id; int bitrate; } ;
struct hfi_bitrate {int enable; int layer_id; int bitrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct venus_inst* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct venus_inst*,int ,struct hfi_enable*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct v4l2_ctrl *VAR_3)
{
 struct venus_inst *VAR_4 = FUNC_0(VAR_3);
 struct venc_controls *VAR_5 = &VAR_4->controls.enc;
 struct hfi_enable VAR_6 = { .enable = 1 };
 struct hfi_bitrate VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 switch (VAR_3->id) {
 case 156:
  VAR_5->bitrate_mode = VAR_3->val;
  break;
 case 157:
  VAR_5->bitrate = VAR_3->val;
  FUNC_2(&VAR_4->lock);
  if (VAR_4->streamon_out && VAR_4->streamon_cap) {
   VAR_9 = VAR_2;
   VAR_7.bitrate = VAR_5->bitrate;
   VAR_7.layer_id = 0;

   VAR_10 = FUNC_1(VAR_4, VAR_9, &VAR_7);
   if (VAR_10) {
    FUNC_3(&VAR_4->lock);
    return VAR_10;
   }
  }
  FUNC_3(&VAR_4->lock);
  break;
 case 155:
  VAR_5->bitrate_peak = VAR_3->val;
  break;
 case 149:
  VAR_5->h264_entropy_mode = VAR_3->val;
  break;
 case 134:
  VAR_5->profile.mpeg4 = VAR_3->val;
  break;
 case 140:
  VAR_5->profile.h264 = VAR_3->val;
  break;
 case 136:
  VAR_5->profile.hevc = VAR_3->val;
  break;
 case 130:
  VAR_5->profile.vpx = VAR_3->val;
  break;
 case 135:
  VAR_5->level.mpeg4 = VAR_3->val;
  break;
 case 146:
  VAR_5->level.h264 = VAR_3->val;
  break;
 case 137:
  VAR_5->level.hevc = VAR_3->val;
  break;
 case 148:
  VAR_5->h264_i_qp = VAR_3->val;
  break;
 case 139:
  VAR_5->h264_p_qp = VAR_3->val;
  break;
 case 150:
  VAR_5->h264_b_qp = VAR_3->val;
  break;
 case 141:
  VAR_5->h264_min_qp = VAR_3->val;
  break;
 case 142:
  VAR_5->h264_max_qp = VAR_3->val;
  break;
 case 131:
  VAR_5->multi_slice_mode = VAR_3->val;
  break;
 case 133:
  VAR_5->multi_slice_max_bytes = VAR_3->val;
  break;
 case 132:
  VAR_5->multi_slice_max_mb = VAR_3->val;
  break;
 case 145:
  VAR_5->h264_loop_filter_alpha = VAR_3->val;
  break;
 case 144:
  VAR_5->h264_loop_filter_beta = VAR_3->val;
  break;
 case 143:
  VAR_5->h264_loop_filter_mode = VAR_3->val;
  break;
 case 138:
  VAR_5->header_mode = VAR_3->val;
  break;
 case 153:
  break;
 case 151:
  VAR_10 = FUNC_4(VAR_3->val, VAR_5->num_b_frames, &VAR_8,
      &VAR_5->num_p_frames);
  if (VAR_10)
   return VAR_10;

  VAR_5->gop_size = VAR_3->val;
  break;
 case 147:
  VAR_5->h264_i_period = VAR_3->val;
  break;
 case 128:
  VAR_5->vp8_min_qp = VAR_3->val;
  break;
 case 129:
  VAR_5->vp8_max_qp = VAR_3->val;
  break;
 case 154:
  VAR_10 = FUNC_4(VAR_5->gop_size, VAR_3->val, &VAR_8,
      &VAR_5->num_p_frames);
  if (VAR_10)
   return VAR_10;

  VAR_5->num_b_frames = VAR_8;
  break;
 case 152:
  FUNC_2(&VAR_4->lock);
  if (VAR_4->streamon_out && VAR_4->streamon_cap) {
   VAR_9 = VAR_1;
   VAR_10 = FUNC_1(VAR_4, VAR_9, &VAR_6);

   if (VAR_10) {
    FUNC_3(&VAR_4->lock);
    return VAR_10;
   }
  }
  FUNC_3(&VAR_4->lock);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
