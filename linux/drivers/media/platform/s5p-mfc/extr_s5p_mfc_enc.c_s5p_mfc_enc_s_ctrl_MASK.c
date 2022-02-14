
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_ctrl {int id; int val; } ;
struct TYPE_9__ {int rc_frame_qp; int rc_p_frame_qp; int rc_b_frame_qp; int rc_framerate; int rc_min_qp; int rc_max_qp; int level_v4l2; int profile; int tier; int max_partition_depth; int num_refs_for_p; int refreshtype; int const_intra_period_enable; int lossless_cu_enable; int wavefront_enable; int loopfilter; int hier_qp_enable; int hier_qp_type; int num_hier_layer; int* hier_qp_layer; int* hier_bit_layer; int general_pb_enable; int temporal_id_enable; int strong_intra_smooth; int intra_pu_split_disable; int tmv_prediction_disable; int max_num_merge_mv; int encoding_nostartcode_enable; int refreshperiod; int lf_beta_offset_div2; int lf_tc_offset_div2; int size_of_length_field; int prepend_sps_pps_to_idr; int level; } ;
struct TYPE_8__ {int num_partitions; int imd_4x4; int num_ref; int filter_level; int filter_sharpness; int golden_frame_ref_period; int golden_frame_sel; int rc_min_qp; int rc_max_qp; int rc_frame_qp; int rc_p_frame_qp; int profile; } ;
struct TYPE_7__ {int level_v4l2; int level; int rc_frame_qp; int rc_min_qp; int rc_max_qp; int rc_p_frame_qp; int rc_b_frame_qp; int quarter_pixel; int profile; } ;
struct TYPE_6__ {int cpb_size; int level_v4l2; int level; int loop_filter_mode; int loop_filter_alpha; int loop_filter_beta; int entropy_mode; int num_ref_pic_4p; int _8x8_transform; int rc_frame_qp; int rc_min_qp; int rc_max_qp; int rc_p_frame_qp; int rc_b_frame_qp; int rc_mb_dark; int rc_mb_smooth; int rc_mb_static; int rc_mb_activity; int vui_sar; int vui_ext_sar_width; int vui_ext_sar_height; int open_gop; int open_gop_size; int vui_sar_idc; int profile; } ;
struct TYPE_10__ {TYPE_4__ hevc; TYPE_3__ vp8; TYPE_2__ mpeg4; TYPE_1__ h264; } ;
struct s5p_mfc_enc_params {int gop_size; int slice_mode; int slice_mb; int slice_bit; int intra_refresh_mb; int pad; int pad_luma; int pad_cb; int pad_cr; int rc_frame; int rc_bitrate; int rc_reaction_coeff; int vbv_size; int mv_h_range; int mv_v_range; int seq_hdr_mode; int frame_skip_mode; int fixed_target_bit; int num_b_frame; int rc_mb; TYPE_5__ codec; } ;
struct s5p_mfc_dev {int v4l2_dev; } ;
struct s5p_mfc_ctx {int force_frame_type; struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct s5p_mfc_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct s5p_mfc_ctx*,int,int) ;
 struct s5p_mfc_ctx* FUNC_2 (struct v4l2_ctrl*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*,int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct v4l2_ctrl *VAR_8)
{
 struct s5p_mfc_ctx *VAR_9 = FUNC_2(VAR_8);
 struct s5p_mfc_dev *VAR_10 = VAR_9->dev;
 struct s5p_mfc_enc_params *VAR_11 = &VAR_9->enc_params;
 int VAR_12 = 0;

 switch (VAR_8->id) {
 case 232:
  VAR_11->gop_size = VAR_8->val;
  break;
 case 153:
  VAR_11->slice_mode = VAR_8->val;
  break;
 case 154:
  VAR_11->slice_mb = VAR_8->val;
  break;
 case 155:
  VAR_11->slice_bit = VAR_8->val * 8;
  break;
 case 236:
  VAR_11->intra_refresh_mb = VAR_8->val;
  break;
 case 242:
  VAR_11->pad = VAR_8->val;
  break;
 case 241:
  VAR_11->pad_luma = (VAR_8->val >> 16) & 0xff;
  VAR_11->pad_cb = (VAR_8->val >> 8) & 0xff;
  VAR_11->pad_cr = (VAR_8->val >> 0) & 0xff;
  break;
 case 234:
  VAR_11->rc_frame = VAR_8->val;
  break;
 case 238:
  VAR_11->rc_bitrate = VAR_8->val;
  break;
 case 239:
  VAR_11->rc_reaction_coeff = VAR_8->val;
  break;
 case 249:
  VAR_9->force_frame_type = VAR_8->val;
  break;
 case 235:
  VAR_9->force_frame_type =
   VAR_7;
  break;
 case 148:
  VAR_11->vbv_size = VAR_8->val;
  break;
 case 152:
  VAR_11->mv_h_range = VAR_8->val;
  break;
 case 151:
  VAR_11->mv_v_range = VAR_8->val;
  break;
 case 224:
  VAR_11->codec.h264.cpb_size = VAR_8->val;
  break;
 case 208:
  VAR_11->seq_hdr_mode = VAR_8->val;
  break;
 case 248:
  VAR_11->frame_skip_mode = VAR_8->val;
  break;
 case 240:
  VAR_11->fixed_target_bit = VAR_8->val;
  break;
 case 237:
  VAR_11->num_b_frame = VAR_8->val;
  break;
 case 214:
  switch (VAR_8->val) {
  case 132:
   VAR_11->codec.h264.profile =
     VAR_4;
   break;
  case 133:
   VAR_11->codec.h264.profile =
     VAR_3;
   break;
  case 135:
   VAR_11->codec.h264.profile =
    VAR_1;
   break;
  case 134:
   if (FUNC_0(VAR_10))
    VAR_11->codec.h264.profile =
    VAR_2;
   else
    VAR_12 = -VAR_0;
   break;
  default:
   VAR_12 = -VAR_0;
  }
  break;
 case 220:
  VAR_11->codec.h264.level_v4l2 = VAR_8->val;
  VAR_11->codec.h264.level = FUNC_3(VAR_8->val);
  if (VAR_11->codec.h264.level < 0) {
   FUNC_5("Level number is wrong\n");
   VAR_12 = VAR_11->codec.h264.level;
  }
  break;
 case 161:
  VAR_11->codec.mpeg4.level_v4l2 = VAR_8->val;
  VAR_11->codec.mpeg4.level = FUNC_6(VAR_8->val);
  if (VAR_11->codec.mpeg4.level < 0) {
   FUNC_5("Level number is wrong\n");
   VAR_12 = VAR_11->codec.mpeg4.level;
  }
  break;
 case 217:
  VAR_11->codec.h264.loop_filter_mode = VAR_8->val;
  break;
 case 219:
  VAR_11->codec.h264.loop_filter_alpha = VAR_8->val;
  break;
 case 218:
  VAR_11->codec.h264.loop_filter_beta = VAR_8->val;
  break;
 case 223:
  VAR_11->codec.h264.entropy_mode = VAR_8->val;
  break;
 case 243:
  VAR_11->codec.h264.num_ref_pic_4p = VAR_8->val;
  break;
 case 226:
  VAR_11->codec.h264._8x8_transform = VAR_8->val;
  break;
 case 164:
  VAR_11->rc_mb = VAR_8->val;
  break;
 case 222:
  VAR_11->codec.h264.rc_frame_qp = VAR_8->val;
  break;
 case 215:
  VAR_11->codec.h264.rc_min_qp = VAR_8->val;
  break;
 case 216:
  VAR_11->codec.h264.rc_max_qp = VAR_8->val;
  break;
 case 213:
  VAR_11->codec.h264.rc_p_frame_qp = VAR_8->val;
  break;
 case 225:
  VAR_11->codec.h264.rc_b_frame_qp = VAR_8->val;
  break;
 case 162:
 case 230:
  VAR_11->codec.mpeg4.rc_frame_qp = VAR_8->val;
  break;
 case 159:
 case 228:
  VAR_11->codec.mpeg4.rc_min_qp = VAR_8->val;
  break;
 case 160:
 case 229:
  VAR_11->codec.mpeg4.rc_max_qp = VAR_8->val;
  break;
 case 157:
 case 227:
  VAR_11->codec.mpeg4.rc_p_frame_qp = VAR_8->val;
  break;
 case 163:
 case 231:
  VAR_11->codec.mpeg4.rc_b_frame_qp = VAR_8->val;
  break;
 case 246:
  VAR_11->codec.h264.rc_mb_dark = VAR_8->val;
  break;
 case 245:
  VAR_11->codec.h264.rc_mb_smooth = VAR_8->val;
  break;
 case 244:
  VAR_11->codec.h264.rc_mb_static = VAR_8->val;
  break;
 case 247:
  VAR_11->codec.h264.rc_mb_activity = VAR_8->val;
  break;
 case 210:
  VAR_11->codec.h264.vui_sar = VAR_8->val;
  break;
 case 209:
  VAR_11->codec.h264.vui_sar_idc = FUNC_8(VAR_8->val);
  break;
 case 211:
  VAR_11->codec.h264.vui_ext_sar_width = VAR_8->val;
  break;
 case 212:
  VAR_11->codec.h264.vui_ext_sar_height = VAR_8->val;
  break;
 case 233:
  VAR_11->codec.h264.open_gop = !VAR_8->val;
  break;
 case 221:
  VAR_11->codec.h264.open_gop_size = VAR_8->val;
  break;
 case 158:
  switch (VAR_8->val) {
  case 128:
   VAR_11->codec.mpeg4.profile =
    VAR_6;
   break;
  case 129:
   VAR_11->codec.mpeg4.profile =
   VAR_5;
   break;
  default:
   VAR_12 = -VAR_0;
  }
  break;
 case 156:
  VAR_11->codec.mpeg4.quarter_pixel = VAR_8->val;
  break;
 case 138:
  VAR_11->codec.vp8.num_partitions = VAR_8->val;
  break;
 case 142:
  VAR_11->codec.vp8.imd_4x4 = VAR_8->val;
  break;
 case 137:
  VAR_11->codec.vp8.num_ref = VAR_8->val;
  break;
 case 146:
  VAR_11->codec.vp8.filter_level = VAR_8->val;
  break;
 case 145:
  VAR_11->codec.vp8.filter_sharpness = VAR_8->val;
  break;
 case 144:
  VAR_11->codec.vp8.golden_frame_ref_period = VAR_8->val;
  break;
 case 143:
  VAR_11->codec.vp8.golden_frame_sel = VAR_8->val;
  break;
 case 139:
  VAR_11->codec.vp8.rc_min_qp = VAR_8->val;
  break;
 case 140:
  VAR_11->codec.vp8.rc_max_qp = VAR_8->val;
  break;
 case 141:
  VAR_11->codec.vp8.rc_frame_qp = VAR_8->val;
  break;
 case 136:
  VAR_11->codec.vp8.rc_p_frame_qp = VAR_8->val;
  break;
 case 147:
  VAR_11->codec.vp8.profile = VAR_8->val;
  break;
 case 185:
  VAR_11->codec.hevc.rc_frame_qp = VAR_8->val;
  break;
 case 174:
  VAR_11->codec.hevc.rc_p_frame_qp = VAR_8->val;
  break;
 case 207:
  VAR_11->codec.hevc.rc_b_frame_qp = VAR_8->val;
  break;
 case 205:
  VAR_11->codec.hevc.rc_framerate = VAR_8->val;
  break;
 case 176:
  VAR_11->codec.hevc.rc_min_qp = VAR_8->val;
  FUNC_1(VAR_9, VAR_8->val,
       VAR_11->codec.hevc.rc_max_qp);
  break;
 case 177:
  VAR_11->codec.hevc.rc_max_qp = VAR_8->val;
  FUNC_1(VAR_9, VAR_11->codec.hevc.rc_min_qp,
       VAR_8->val);
  break;
 case 184:
  VAR_11->codec.hevc.level_v4l2 = VAR_8->val;
  VAR_11->codec.hevc.level = FUNC_4(VAR_8->val);
  break;
 case 175:
  switch (VAR_8->val) {
  case 131:
   VAR_11->codec.hevc.profile =
    131;
   break;
  case 130:
   VAR_11->codec.hevc.profile =
   130;
   break;
  default:
   VAR_12 = -VAR_0;
  }
  break;
 case 168:
  VAR_11->codec.hevc.tier = VAR_8->val;
  break;
 case 178:
  VAR_11->codec.hevc.max_partition_depth = VAR_8->val;
  break;
 case 149:
  VAR_11->codec.hevc.num_refs_for_p = VAR_8->val;
  break;
 case 172:
  VAR_11->codec.hevc.refreshtype = VAR_8->val;
  break;
 case 206:
  VAR_11->codec.hevc.const_intra_period_enable = VAR_8->val;
  break;
 case 180:
  VAR_11->codec.hevc.lossless_cu_enable = VAR_8->val;
  break;
 case 166:
  VAR_11->codec.hevc.wavefront_enable = VAR_8->val;
  break;
 case 181:
  VAR_11->codec.hevc.loopfilter = VAR_8->val;
  break;
 case 187:
  VAR_11->codec.hevc.hier_qp_enable = VAR_8->val;
  break;
 case 188:
  VAR_11->codec.hevc.hier_qp_type = VAR_8->val;
  break;
 case 189:
  VAR_11->codec.hevc.num_hier_layer = VAR_8->val;
  break;
 case 202:
  VAR_11->codec.hevc.hier_qp_layer[0] = VAR_8->val;
  break;
 case 200:
  VAR_11->codec.hevc.hier_qp_layer[1] = VAR_8->val;
  break;
 case 198:
  VAR_11->codec.hevc.hier_qp_layer[2] = VAR_8->val;
  break;
 case 196:
  VAR_11->codec.hevc.hier_qp_layer[3] = VAR_8->val;
  break;
 case 194:
  VAR_11->codec.hevc.hier_qp_layer[4] = VAR_8->val;
  break;
 case 192:
  VAR_11->codec.hevc.hier_qp_layer[5] = VAR_8->val;
  break;
 case 190:
  VAR_11->codec.hevc.hier_qp_layer[6] = VAR_8->val;
  break;
 case 203:
  VAR_11->codec.hevc.hier_bit_layer[0] = VAR_8->val;
  break;
 case 201:
  VAR_11->codec.hevc.hier_bit_layer[1] = VAR_8->val;
  break;
 case 199:
  VAR_11->codec.hevc.hier_bit_layer[2] = VAR_8->val;
  break;
 case 197:
  VAR_11->codec.hevc.hier_bit_layer[3] = VAR_8->val;
  break;
 case 195:
  VAR_11->codec.hevc.hier_bit_layer[4] = VAR_8->val;
  break;
 case 193:
  VAR_11->codec.hevc.hier_bit_layer[5] = VAR_8->val;
  break;
 case 191:
  VAR_11->codec.hevc.hier_bit_layer[6] = VAR_8->val;
  break;
 case 204:
  VAR_11->codec.hevc.general_pb_enable = VAR_8->val;
  break;
 case 169:
  VAR_11->codec.hevc.temporal_id_enable = VAR_8->val;
  break;
 case 170:
  VAR_11->codec.hevc.strong_intra_smooth = VAR_8->val;
  break;
 case 186:
  VAR_11->codec.hevc.intra_pu_split_disable = VAR_8->val;
  break;
 case 167:
  VAR_11->codec.hevc.tmv_prediction_disable = !VAR_8->val;
  break;
 case 179:
  VAR_11->codec.hevc.max_num_merge_mv = VAR_8->val;
  break;
 case 165:
  VAR_11->codec.hevc.encoding_nostartcode_enable = VAR_8->val;
  break;
 case 173:
  VAR_11->codec.hevc.refreshperiod = VAR_8->val;
  break;
 case 183:
  VAR_11->codec.hevc.lf_beta_offset_div2 = VAR_8->val;
  break;
 case 182:
  VAR_11->codec.hevc.lf_tc_offset_div2 = VAR_8->val;
  break;
 case 171:
  VAR_11->codec.hevc.size_of_length_field = VAR_8->val;
  break;
 case 150:
  VAR_11->codec.hevc.prepend_sps_pps_to_idr = VAR_8->val;
  break;
 default:
  FUNC_7(&VAR_10->v4l2_dev, "Invalid control, id=%d, val=%d\n",
       VAR_8->id, VAR_8->val);
  VAR_12 = -VAR_0;
 }
 return VAR_12;
}
