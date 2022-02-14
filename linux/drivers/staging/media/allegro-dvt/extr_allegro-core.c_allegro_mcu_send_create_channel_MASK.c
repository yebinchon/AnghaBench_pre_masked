
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int type; } ;
struct mcu_msg_create_channel {int src_mode; int constraint_set_flags; int sps_param; int pps_param; int enc_option; int beta_offset; int tc_offset; int num_slices; int* me_range; int max_tu_size; int min_tu_size; int max_transfo_depth_intra; int max_transfo_depth_inter; int initial_rem_delay; int cpb_size; int framerate; int clk_ratio; int max_bitrate; int initial_qp; int min_qp; int max_qp; int ip_delta; int pb_delta; int golden_delta; int golden_ref_frequency; int rate_control_option; int gop_ctrl_mode; int freq_ird; int gdr_mode; int subframe_latency; int lda_control_mode; int gop_length; scalar_t__ freq_lt; scalar_t__ golden_ref; int target_bitrate; int rate_control_mode; void* min_cu_size; void* max_cu_size; scalar_t__ tier; int level; int codec; int profile; int colorspace; int format; int height; int width; int user_id; TYPE_1__ header; } ;
struct allegro_dev {int mbox_command; } ;
struct allegro_channel {int cpb_size; int bitrate_peak; int gop_size; int bitrate; int bitrate_mode; int level; int codec; int profile; int colorspace; int pixelformat; int height; int width; int user_id; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct allegro_dev*,int *,struct mcu_msg_create_channel*,int) ;
 int FUNC_2 (struct allegro_dev*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct mcu_msg_create_channel*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct allegro_dev *VAR_6,
        struct allegro_channel *VAR_7)
{
 struct mcu_msg_create_channel VAR_8;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.header.type = VAR_4;
 VAR_8.header.length = sizeof(VAR_8) - sizeof(VAR_8.header);

 VAR_8.user_id = VAR_7->user_id;
 VAR_8.width = VAR_7->width;
 VAR_8.height = VAR_7->height;
 VAR_8.format = FUNC_9(VAR_7->pixelformat);
 VAR_8.colorspace = FUNC_6(VAR_7->colorspace);
 VAR_8.src_mode = 0x0;
 VAR_8.profile = FUNC_10(VAR_7->profile);
 VAR_8.constraint_set_flags = FUNC_0(1);
 VAR_8.codec = FUNC_8(VAR_7->codec);
 VAR_8.level = FUNC_7(VAR_7->level);
 VAR_8.tier = 0;
 VAR_8.sps_param = FUNC_0(20) | 0x4a;
 VAR_8.pps_param = FUNC_0(2);
 VAR_8.enc_option = VAR_3 | VAR_2 |
    VAR_1 | VAR_0;
 VAR_8.beta_offset = -1;
 VAR_8.tc_offset = -1;
 VAR_8.num_slices = 1;
 VAR_8.me_range[0] = 8;
 VAR_8.me_range[1] = 8;
 VAR_8.me_range[2] = 16;
 VAR_8.me_range[3] = 16;
 VAR_8.max_cu_size = FUNC_3(VAR_5);
 VAR_8.min_cu_size = FUNC_3(8);
 VAR_8.max_tu_size = 2;
 VAR_8.min_tu_size = 2;
 VAR_8.max_transfo_depth_intra = 1;
 VAR_8.max_transfo_depth_inter = 1;

 VAR_8.rate_control_mode =
  FUNC_5(VAR_7->bitrate_mode);

 VAR_8.initial_rem_delay =
  ((VAR_7->cpb_size * 1000) / VAR_7->bitrate_peak) * 90000;

 VAR_8.cpb_size =
  ((VAR_7->cpb_size * 1000) / VAR_7->bitrate_peak) * 90000;
 VAR_8.framerate = 25;
 VAR_8.clk_ratio = 1000;
 VAR_8.target_bitrate = VAR_7->bitrate;
 VAR_8.max_bitrate = VAR_7->bitrate_peak;
 VAR_8.initial_qp = 25;
 VAR_8.min_qp = 10;
 VAR_8.max_qp = 51;
 VAR_8.ip_delta = -1;
 VAR_8.pb_delta = -1;
 VAR_8.golden_ref = 0;
 VAR_8.golden_delta = 2;
 VAR_8.golden_ref_frequency = 10;
 VAR_8.rate_control_option = 0x00000000;

 VAR_8.gop_ctrl_mode = 0x00000000;
 VAR_8.freq_ird = 0x7fffffff;
 VAR_8.freq_lt = 0;
 VAR_8.gdr_mode = 0x00000000;
 VAR_8.gop_length = VAR_7->gop_size;
 VAR_8.subframe_latency = 0x00000000;
 VAR_8.lda_control_mode = 0x700d0000;

 FUNC_1(VAR_6, &VAR_6->mbox_command, &VAR_8, sizeof(VAR_8));
 FUNC_2(VAR_6);

 return 0;
}
