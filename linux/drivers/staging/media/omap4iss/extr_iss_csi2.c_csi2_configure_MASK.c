
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_subdev {struct iss_v4l2_subdevs_group* host_priv; } ;
struct media_pad {int entity; } ;
struct TYPE_7__ {int crc; int vpclk_div; } ;
struct TYPE_8__ {TYPE_1__ csi2; } ;
struct iss_v4l2_subdevs_group {TYPE_2__ bus; } ;
struct iss_csi2_timing_cfg {int force_rx_mode; int stop_state_16x; int stop_state_4x; int stop_state_counter; } ;
struct TYPE_11__ {int ecc_enable; int frame_mode; int vp_out_ctrl; scalar_t__ if_enable; } ;
struct TYPE_10__ {scalar_t__ bpl_padding; scalar_t__ bpl_value; } ;
struct iss_csi2_device {int dpcm_decompress; TYPE_6__* contexts; TYPE_5__ ctrl; TYPE_4__ video_out; TYPE_3__* formats; scalar_t__ frame_skip; int * pads; struct iss_csi2_timing_cfg* timing; } ;
struct TYPE_12__ {int eof_enabled; int eol_enabled; scalar_t__ data_offset; int format_id; scalar_t__ enabled; } ;
struct TYPE_9__ {scalar_t__ code; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iss_csi2_device*,TYPE_6__*) ;
 int FUNC_1 (struct iss_csi2_device*) ;
 int FUNC_2 (struct iss_csi2_device*,int) ;
 int FUNC_3 (struct iss_csi2_device*,int) ;
 int FUNC_4 (struct iss_csi2_device*,int) ;
 int FUNC_5 (struct iss_csi2_device*,TYPE_5__*) ;
 int FUNC_6 (struct iss_csi2_device*,struct iss_csi2_timing_cfg*) ;
 int VAR_4 ;
 struct media_pad* FUNC_7 (int *) ;
 struct v4l2_subdev* FUNC_8 (int ) ;
 int FUNC_9 (struct v4l2_subdev*,struct v4l2_subdev*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_10(struct iss_csi2_device *VAR_5)
{
 const struct iss_v4l2_subdevs_group *VAR_6;
 struct iss_csi2_timing_cfg *VAR_7 = &VAR_5->timing[0];
 struct v4l2_subdev *VAR_8;
 struct media_pad *VAR_9;







 if (VAR_5->contexts[0].enabled || VAR_5->ctrl.if_enable)
  return -VAR_2;

 VAR_9 = FUNC_7(&VAR_5->pads[VAR_0]);
 VAR_8 = FUNC_8(VAR_9->entity);
 VAR_6 = VAR_8->host_priv;

 VAR_5->frame_skip = 0;
 FUNC_9(VAR_8, VAR_8, VAR_4, &VAR_5->frame_skip);

 VAR_5->ctrl.vp_out_ctrl = VAR_6->bus.csi2.vpclk_div;
 VAR_5->ctrl.frame_mode = VAR_3;
 VAR_5->ctrl.ecc_enable = VAR_6->bus.csi2.crc;

 VAR_7->force_rx_mode = 1;
 VAR_7->stop_state_16x = 1;
 VAR_7->stop_state_4x = 1;
 VAR_7->stop_state_counter = 0x1ff;






 if (VAR_5->formats[VAR_0].code !=
     VAR_5->formats[VAR_1].code)
  VAR_5->dpcm_decompress = 1;
 else
  VAR_5->dpcm_decompress = 0;

 VAR_5->contexts[0].format_id = FUNC_1(VAR_5);

 if (VAR_5->video_out.bpl_padding == 0)
  VAR_5->contexts[0].data_offset = 0;
 else
  VAR_5->contexts[0].data_offset = VAR_5->video_out.bpl_value;
 VAR_5->contexts[0].eof_enabled = 1;
 VAR_5->contexts[0].eol_enabled = 1;

 FUNC_2(VAR_5, 1);
 FUNC_3(VAR_5, 1);
 FUNC_4(VAR_5, 1);


 FUNC_6(VAR_5, VAR_7);
 FUNC_5(VAR_5, &VAR_5->ctrl);
 FUNC_0(VAR_5, &VAR_5->contexts[0]);

 return 0;
}
