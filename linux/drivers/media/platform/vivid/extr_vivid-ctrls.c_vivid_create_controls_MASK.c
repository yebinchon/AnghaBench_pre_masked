
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_13__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_12__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_11__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_10__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_9__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_8__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct vivid_dev {int* input_brightness; TYPE_7__ sdr_cap_dev; scalar_t__ has_sdr_cap; TYPE_6__ radio_tx_dev; scalar_t__ has_radio_tx; TYPE_5__ radio_rx_dev; scalar_t__ has_radio_rx; TYPE_4__ vbi_out_dev; scalar_t__ has_vbi_out; TYPE_3__ vbi_cap_dev; scalar_t__ has_vbi_cap; TYPE_2__ vid_out_dev; scalar_t__ has_vid_out; TYPE_1__ vid_cap_dev; scalar_t__ has_vid_cap; void* autogain; void* radio_tx_rds_ms; void* radio_tx_rds_tp; void* radio_tx_rds_ta; void* radio_tx_rds_dyn_pty; void* radio_tx_rds_compressed; void* radio_tx_rds_art_head; void* radio_tx_rds_mono_stereo; void* radio_tx_rds_radiotext; void* radio_tx_rds_psname; void* radio_tx_rds_pty; void* radio_tx_rds_pi; void* radio_rx_rds_ms; void* radio_rx_rds_tp; void* radio_rx_rds_ta; void* radio_rx_rds_radiotext; void* radio_rx_rds_psname; void* radio_rx_rds_pty; scalar_t__ has_fb; void* ctrl_tx_edid_present; void* ctrl_tx_rxsense; void* ctrl_tx_hotplug; void* ctrl_display_present; void* ctrl_tx_mode; void* ctrl_tx_rgb_range; scalar_t__ num_hdmi_outputs; void* ctrl_rx_power_present; void* rgb_range_cap; void* real_rgb_range_cap; void* ctrl_dv_timings_signal_mode; void* ctrl_dv_timings; scalar_t__ query_dv_timings_qmenu; scalar_t__ query_dv_timings_size; scalar_t__ num_hdmi_inputs; scalar_t__ has_raw_vbi_cap; void* ctrl_std_signal_mode; void* ctrl_standard; void* ctrl_has_scaler_out; void* ctrl_has_compose_out; void* ctrl_has_crop_out; void* colorspace; void* ctrl_has_scaler_cap; void* ctrl_has_compose_cap; void* ctrl_has_crop_cap; void* test_pattern; void* int_menu; void* bitmask; void* string; void* menu; void* boolean; void* int64; void* int32; void* button; void* alpha; void* gain; void* hue; void* saturation; void* contrast; void* brightness; void* mute; void* volume; struct v4l2_ctrl_handler ctrl_hdl_sdr_cap; struct v4l2_ctrl_handler ctrl_hdl_radio_tx; struct v4l2_ctrl_handler ctrl_hdl_radio_rx; struct v4l2_ctrl_handler ctrl_hdl_vbi_out; struct v4l2_ctrl_handler ctrl_hdl_vbi_cap; struct v4l2_ctrl_handler ctrl_hdl_vid_out; struct v4l2_ctrl_handler ctrl_hdl_vid_cap; struct v4l2_ctrl_handler ctrl_hdl_fb; struct v4l2_ctrl_handler ctrl_hdl_loop_cap; struct v4l2_ctrl_handler ctrl_hdl_sdtv_cap; struct v4l2_ctrl_handler ctrl_hdl_streaming; struct v4l2_ctrl_handler ctrl_hdl_user_aud; struct v4l2_ctrl_handler ctrl_hdl_user_vid; struct v4l2_ctrl_handler ctrl_hdl_user_gen; } ;
struct v4l2_ctrl_config {char* name; char const* const* qmenu; scalar_t__ max; int type; int id; int * ops; } ;
typedef int s64 ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 char const* const* VAR_44 ;
 int FUNC_1 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_handler*,int *,int) ;
 int FUNC_2 (int,void**,int ,int) ;
 int FUNC_3 (int,void**) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_config*,int *) ;
 void* FUNC_6 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 void* FUNC_7 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 int FUNC_8 (void*,char*) ;
 struct v4l2_ctrl_config VAR_45 ;
 struct v4l2_ctrl_config VAR_46 ;
 struct v4l2_ctrl_config VAR_47 ;
 struct v4l2_ctrl_config VAR_48 ;
 struct v4l2_ctrl_config VAR_49 ;
 struct v4l2_ctrl_config VAR_50 ;
 struct v4l2_ctrl_config VAR_51 ;
 struct v4l2_ctrl_config VAR_52 ;
 struct v4l2_ctrl_config VAR_53 ;
 struct v4l2_ctrl_config VAR_54 ;
 struct v4l2_ctrl_config VAR_55 ;
 struct v4l2_ctrl_config VAR_56 ;
 struct v4l2_ctrl_config VAR_57 ;
 struct v4l2_ctrl_config VAR_58 ;
 struct v4l2_ctrl_config VAR_59 ;
 struct v4l2_ctrl_config VAR_60 ;
 struct v4l2_ctrl_config VAR_61 ;
 struct v4l2_ctrl_config VAR_62 ;
 struct v4l2_ctrl_config VAR_63 ;
 struct v4l2_ctrl_config VAR_64 ;
 struct v4l2_ctrl_config VAR_65 ;
 struct v4l2_ctrl_config VAR_66 ;
 struct v4l2_ctrl_config VAR_67 ;
 struct v4l2_ctrl_config VAR_68 ;
 struct v4l2_ctrl_config VAR_69 ;
 struct v4l2_ctrl_config VAR_70 ;
 struct v4l2_ctrl_config VAR_71 ;
 struct v4l2_ctrl_config VAR_72 ;
 struct v4l2_ctrl_config VAR_73 ;
 struct v4l2_ctrl_config VAR_74 ;
 struct v4l2_ctrl_config VAR_75 ;
 struct v4l2_ctrl_config VAR_76 ;
 struct v4l2_ctrl_config VAR_77 ;
 struct v4l2_ctrl_config VAR_78 ;
 struct v4l2_ctrl_config VAR_79 ;
 struct v4l2_ctrl_config VAR_80 ;
 struct v4l2_ctrl_config VAR_81 ;
 struct v4l2_ctrl_config VAR_82 ;
 struct v4l2_ctrl_config VAR_83 ;
 struct v4l2_ctrl_config VAR_84 ;
 struct v4l2_ctrl_config VAR_85 ;
 struct v4l2_ctrl_config VAR_86 ;
 struct v4l2_ctrl_config VAR_87 ;
 struct v4l2_ctrl_config VAR_88 ;
 struct v4l2_ctrl_config VAR_89 ;
 struct v4l2_ctrl_config VAR_90 ;
 struct v4l2_ctrl_config VAR_91 ;
 struct v4l2_ctrl_config VAR_92 ;
 struct v4l2_ctrl_config VAR_93 ;
 struct v4l2_ctrl_config VAR_94 ;
 struct v4l2_ctrl_config VAR_95 ;
 struct v4l2_ctrl_config VAR_96 ;
 struct v4l2_ctrl_config VAR_97 ;
 struct v4l2_ctrl_config VAR_98 ;
 struct v4l2_ctrl_config VAR_99 ;
 struct v4l2_ctrl_config VAR_100 ;
 struct v4l2_ctrl_config VAR_101 ;
 struct v4l2_ctrl_config VAR_102 ;
 struct v4l2_ctrl_config VAR_103 ;
 struct v4l2_ctrl_config VAR_104 ;
 struct v4l2_ctrl_config VAR_105 ;
 struct v4l2_ctrl_config VAR_106 ;
 struct v4l2_ctrl_config VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;

int FUNC_9(struct vivid_dev *VAR_112, bool VAR_113,
  bool VAR_114, bool VAR_115,
  bool VAR_116, bool VAR_117)
{
 struct v4l2_ctrl_handler *VAR_118 = &VAR_112->ctrl_hdl_user_gen;
 struct v4l2_ctrl_handler *VAR_119 = &VAR_112->ctrl_hdl_user_vid;
 struct v4l2_ctrl_handler *VAR_120 = &VAR_112->ctrl_hdl_user_aud;
 struct v4l2_ctrl_handler *VAR_121 = &VAR_112->ctrl_hdl_streaming;
 struct v4l2_ctrl_handler *VAR_122 = &VAR_112->ctrl_hdl_sdtv_cap;
 struct v4l2_ctrl_handler *VAR_123 = &VAR_112->ctrl_hdl_loop_cap;
 struct v4l2_ctrl_handler *VAR_124 = &VAR_112->ctrl_hdl_fb;
 struct v4l2_ctrl_handler *VAR_125 = &VAR_112->ctrl_hdl_vid_cap;
 struct v4l2_ctrl_handler *VAR_126 = &VAR_112->ctrl_hdl_vid_out;
 struct v4l2_ctrl_handler *VAR_127 = &VAR_112->ctrl_hdl_vbi_cap;
 struct v4l2_ctrl_handler *VAR_128 = &VAR_112->ctrl_hdl_vbi_out;
 struct v4l2_ctrl_handler *VAR_129 = &VAR_112->ctrl_hdl_radio_rx;
 struct v4l2_ctrl_handler *VAR_130 = &VAR_112->ctrl_hdl_radio_tx;
 struct v4l2_ctrl_handler *VAR_131 = &VAR_112->ctrl_hdl_sdr_cap;
 struct v4l2_ctrl_config VAR_132 = {
  .ops = &VAR_111,
  .id = VAR_42,
  .name = "DV Timings",
  .type = VAR_38,
 };
 int VAR_133;

 FUNC_4(VAR_118, 10);
 FUNC_5(VAR_118, &VAR_50, ((void*)0));
 FUNC_4(VAR_119, 9);
 FUNC_5(VAR_119, &VAR_50, ((void*)0));
 FUNC_4(VAR_120, 2);
 FUNC_5(VAR_120, &VAR_50, ((void*)0));
 FUNC_4(VAR_121, 8);
 FUNC_5(VAR_121, &VAR_50, ((void*)0));
 FUNC_4(VAR_122, 2);
 FUNC_5(VAR_122, &VAR_50, ((void*)0));
 FUNC_4(VAR_123, 1);
 FUNC_5(VAR_123, &VAR_50, ((void*)0));
 FUNC_4(VAR_124, 1);
 FUNC_5(VAR_124, &VAR_50, ((void*)0));
 FUNC_4(VAR_125, 55);
 FUNC_5(VAR_125, &VAR_50, ((void*)0));
 FUNC_4(VAR_126, 26);
 if (!VAR_115 || VAR_112->has_fb || VAR_112->num_hdmi_outputs)
  FUNC_5(VAR_126, &VAR_50, ((void*)0));
 FUNC_4(VAR_127, 21);
 FUNC_5(VAR_127, &VAR_50, ((void*)0));
 FUNC_4(VAR_128, 19);
 if (!VAR_115)
  FUNC_5(VAR_128, &VAR_50, ((void*)0));
 FUNC_4(VAR_129, 17);
 FUNC_5(VAR_129, &VAR_50, ((void*)0));
 FUNC_4(VAR_130, 17);
 FUNC_5(VAR_130, &VAR_50, ((void*)0));
 FUNC_4(VAR_131, 19);
 FUNC_5(VAR_131, &VAR_50, ((void*)0));


 VAR_112->volume = FUNC_6(VAR_120, ((void*)0),
  VAR_4, 0, 255, 1, 200);
 VAR_112->mute = FUNC_6(VAR_120, ((void*)0),
  VAR_3, 0, 1, 1, 0);
 if (VAR_112->has_vid_cap) {
  VAR_112->brightness = FUNC_6(VAR_119, &VAR_110,
   VAR_6, 0, 255, 1, 128);
  for (VAR_133 = 0; VAR_133 < VAR_0; VAR_133++)
   VAR_112->input_brightness[VAR_133] = 128;
  VAR_112->contrast = FUNC_6(VAR_119, &VAR_110,
   VAR_7, 0, 255, 1, 128);
  VAR_112->saturation = FUNC_6(VAR_119, &VAR_110,
   VAR_36, 0, 255, 1, 128);
  VAR_112->hue = FUNC_6(VAR_119, &VAR_110,
   VAR_17, -128, 128, 1, 0);
  FUNC_6(VAR_119, &VAR_110,
   VAR_16, 0, 1, 1, 0);
  FUNC_6(VAR_119, &VAR_110,
   VAR_37, 0, 1, 1, 0);
  VAR_112->autogain = FUNC_6(VAR_119, &VAR_110,
   VAR_5, 0, 1, 1, 1);
  VAR_112->gain = FUNC_6(VAR_119, &VAR_110,
   VAR_15, 0, 255, 1, 100);
  VAR_112->alpha = FUNC_6(VAR_119, &VAR_110,
   VAR_2, 0, 255, 1, 0);
 }
 VAR_112->button = FUNC_5(VAR_118, &VAR_49, ((void*)0));
 VAR_112->int32 = FUNC_5(VAR_118, &VAR_69, ((void*)0));
 VAR_112->int64 = FUNC_5(VAR_118, &VAR_70, ((void*)0));
 VAR_112->boolean = FUNC_5(VAR_118, &VAR_47, ((void*)0));
 VAR_112->menu = FUNC_5(VAR_118, &VAR_75, ((void*)0));
 VAR_112->string = FUNC_5(VAR_118, &VAR_97, ((void*)0));
 VAR_112->bitmask = FUNC_5(VAR_118, &VAR_46, ((void*)0));
 VAR_112->int_menu = FUNC_5(VAR_118, &VAR_71, ((void*)0));
 FUNC_5(VAR_118, &VAR_101, ((void*)0));
 FUNC_5(VAR_118, &VAR_100, ((void*)0));
 FUNC_5(VAR_118, &VAR_102, ((void*)0));

 if (VAR_112->has_vid_cap) {

  struct v4l2_ctrl_config VAR_134 = {
   .ops = &VAR_111,
   .id = VAR_43,
   .name = "Test Pattern",
   .type = VAR_38,
   .max = VAR_1,
   .qmenu = VAR_44,
  };

  VAR_112->test_pattern = FUNC_5(VAR_125,
    &VAR_134, ((void*)0));
  FUNC_5(VAR_125, &VAR_78, ((void*)0));
  FUNC_5(VAR_125, &VAR_65, ((void*)0));
  FUNC_5(VAR_125, &VAR_104, ((void*)0));
  FUNC_5(VAR_125, &VAR_76, ((void*)0));
  FUNC_5(VAR_125, &VAR_91, ((void*)0));
  FUNC_5(VAR_125, &VAR_92, ((void*)0));
  FUNC_5(VAR_125, &VAR_64, ((void*)0));
  FUNC_5(VAR_125, &VAR_105, ((void*)0));
  FUNC_5(VAR_125, &VAR_68, ((void*)0));
  FUNC_5(VAR_125, &VAR_67, ((void*)0));
  FUNC_5(VAR_125, &VAR_87, ((void*)0));
  if (VAR_113) {
   VAR_112->ctrl_has_crop_cap = FUNC_5(VAR_125,
    &VAR_60, ((void*)0));
   VAR_112->ctrl_has_compose_cap = FUNC_5(VAR_125,
    &VAR_58, ((void*)0));
   VAR_112->ctrl_has_scaler_cap = FUNC_5(VAR_125,
    &VAR_62, ((void*)0));
  }

  FUNC_5(VAR_125, &VAR_99, ((void*)0));
  VAR_112->colorspace = FUNC_5(VAR_125,
   &VAR_52, ((void*)0));
  FUNC_5(VAR_125, &VAR_106, ((void*)0));
  FUNC_5(VAR_125, &VAR_107, ((void*)0));
  FUNC_5(VAR_125, &VAR_66, ((void*)0));
  FUNC_5(VAR_125, &VAR_79, ((void*)0));
  FUNC_5(VAR_125, &VAR_45, ((void*)0));
 }

 if (VAR_112->has_vid_out && VAR_114) {
  VAR_112->ctrl_has_crop_out = FUNC_5(VAR_126,
   &VAR_61, ((void*)0));
  VAR_112->ctrl_has_compose_out = FUNC_5(VAR_126,
   &VAR_59, ((void*)0));
  VAR_112->ctrl_has_scaler_out = FUNC_5(VAR_126,
   &VAR_63, ((void*)0));
 }







 if (!VAR_115) {
  FUNC_5(VAR_118, &VAR_53, ((void*)0));
  FUNC_5(VAR_121, &VAR_55, ((void*)0));
  FUNC_5(VAR_121, &VAR_77, ((void*)0));
  FUNC_5(VAR_121, &VAR_81, ((void*)0));
  FUNC_5(VAR_121, &VAR_48, ((void*)0));
  FUNC_5(VAR_121, &VAR_94, ((void*)0));
  FUNC_5(VAR_121, &VAR_80, ((void*)0));



  FUNC_5(VAR_121, &VAR_90, ((void*)0));
  FUNC_5(VAR_121, &VAR_98, ((void*)0));
 }

 if (VAR_116 && (VAR_112->has_vid_cap || VAR_112->has_vbi_cap)) {
  if (VAR_112->has_vid_cap)
   FUNC_5(VAR_125, &VAR_95, ((void*)0));
  VAR_112->ctrl_std_signal_mode = FUNC_5(VAR_122,
   &VAR_96, ((void*)0));
  VAR_112->ctrl_standard = FUNC_5(VAR_122,
   &VAR_93, ((void*)0));
  if (VAR_112->ctrl_std_signal_mode)
   FUNC_3(2, &VAR_112->ctrl_std_signal_mode);
  if (VAR_112->has_raw_vbi_cap)
   FUNC_5(VAR_127, &VAR_103, ((void*)0));
 }

 if (VAR_112->num_hdmi_inputs) {
  s64 VAR_135 = FUNC_0(VAR_112->num_hdmi_inputs - 1, 0);

  VAR_112->ctrl_dv_timings_signal_mode = FUNC_5(VAR_125,
     &VAR_57, ((void*)0));

  VAR_132.max = VAR_112->query_dv_timings_size - 1;
  VAR_132.qmenu =
   (const char * const *)VAR_112->query_dv_timings_qmenu;
  VAR_112->ctrl_dv_timings = FUNC_5(VAR_125,
   &VAR_132, ((void*)0));
  if (VAR_112->ctrl_dv_timings_signal_mode)
   FUNC_3(2, &VAR_112->ctrl_dv_timings_signal_mode);

  FUNC_5(VAR_125, &VAR_56, ((void*)0));
  FUNC_5(VAR_125, &VAR_74, ((void*)0));
  VAR_112->real_rgb_range_cap = FUNC_5(VAR_125,
   &VAR_72, ((void*)0));
  VAR_112->rgb_range_cap = FUNC_7(VAR_125,
   &VAR_111,
   VAR_9, VAR_40,
   0, VAR_39);
  VAR_112->ctrl_rx_power_present = FUNC_6(VAR_125,
   ((void*)0), VAR_8, 0, VAR_135,
   0, VAR_135);

 }
 if (VAR_112->num_hdmi_outputs) {
  s64 VAR_136 = FUNC_0(VAR_112->num_hdmi_outputs - 1, 0);





  VAR_112->ctrl_tx_rgb_range = FUNC_7(VAR_126, ((void*)0),
   VAR_13, VAR_40,
   0, VAR_39);
  VAR_112->ctrl_tx_mode = FUNC_7(VAR_126, ((void*)0),
   VAR_12, VAR_41,
   0, VAR_41);
  VAR_112->ctrl_display_present = FUNC_5(VAR_126,
   &VAR_54, ((void*)0));
  VAR_112->ctrl_tx_hotplug = FUNC_6(VAR_126,
   ((void*)0), VAR_11, 0, VAR_136,
   0, VAR_136);
  VAR_112->ctrl_tx_rxsense = FUNC_6(VAR_126,
   ((void*)0), VAR_14, 0, VAR_136,
   0, VAR_136);
  VAR_112->ctrl_tx_edid_present = FUNC_6(VAR_126,
   ((void*)0), VAR_10, 0, VAR_136,
   0, VAR_136);
 }
 if ((VAR_112->has_vid_cap && VAR_112->has_vid_out) ||
     (VAR_112->has_vbi_cap && VAR_112->has_vbi_out))
  FUNC_5(VAR_123, &VAR_73, ((void*)0));

 if (VAR_112->has_fb)
  FUNC_5(VAR_124, &VAR_51, ((void*)0));

 if (VAR_112->has_radio_rx) {
  FUNC_5(VAR_129, &VAR_82, ((void*)0));
  FUNC_5(VAR_129, &VAR_83, ((void*)0));
  FUNC_5(VAR_129, &VAR_84, ((void*)0));
  FUNC_5(VAR_129, &VAR_85, ((void*)0));
  FUNC_6(VAR_129, &VAR_108,
   VAR_18, 0, 1, 1, 1);
  VAR_112->radio_rx_rds_pty = FUNC_6(VAR_129,
   &VAR_108,
   VAR_21, 0, 31, 1, 0);
  VAR_112->radio_rx_rds_psname = FUNC_6(VAR_129,
   &VAR_108,
   VAR_20, 0, 8, 8, 0);
  VAR_112->radio_rx_rds_radiotext = FUNC_6(VAR_129,
   &VAR_108,
   VAR_22, 0, 64, 64, 0);
  VAR_112->radio_rx_rds_ta = FUNC_6(VAR_129,
   &VAR_108,
   VAR_23, 0, 1, 1, 0);
  VAR_112->radio_rx_rds_tp = FUNC_6(VAR_129,
   &VAR_108,
   VAR_24, 0, 1, 1, 0);
  VAR_112->radio_rx_rds_ms = FUNC_6(VAR_129,
   &VAR_108,
   VAR_19, 0, 1, 1, 1);
 }
 if (VAR_112->has_radio_tx) {
  FUNC_5(VAR_130,
   &VAR_86, ((void*)0));
  VAR_112->radio_tx_rds_pi = FUNC_6(VAR_130,
   &VAR_109,
   VAR_30, 0, 0xffff, 1, 0x8088);
  VAR_112->radio_tx_rds_pty = FUNC_6(VAR_130,
   &VAR_109,
   VAR_32, 0, 31, 1, 3);
  VAR_112->radio_tx_rds_psname = FUNC_6(VAR_130,
   &VAR_109,
   VAR_31, 0, 8, 8, 0);
  if (VAR_112->radio_tx_rds_psname)
   FUNC_8(VAR_112->radio_tx_rds_psname, "VIVID-TX");
  VAR_112->radio_tx_rds_radiotext = FUNC_6(VAR_130,
   &VAR_109,
   VAR_33, 0, 64 * 2, 64, 0);
  if (VAR_112->radio_tx_rds_radiotext)
   FUNC_8(VAR_112->radio_tx_rds_radiotext,
          "This is a VIVID default Radio Text template text, change at will");
  VAR_112->radio_tx_rds_mono_stereo = FUNC_6(VAR_130,
   &VAR_109,
   VAR_28, 0, 1, 1, 1);
  VAR_112->radio_tx_rds_art_head = FUNC_6(VAR_130,
   &VAR_109,
   VAR_25, 0, 1, 1, 0);
  VAR_112->radio_tx_rds_compressed = FUNC_6(VAR_130,
   &VAR_109,
   VAR_26, 0, 1, 1, 0);
  VAR_112->radio_tx_rds_dyn_pty = FUNC_6(VAR_130,
   &VAR_109,
   VAR_27, 0, 1, 1, 0);
  VAR_112->radio_tx_rds_ta = FUNC_6(VAR_130,
   &VAR_109,
   VAR_34, 0, 1, 1, 0);
  VAR_112->radio_tx_rds_tp = FUNC_6(VAR_130,
   &VAR_109,
   VAR_35, 0, 1, 1, 1);
  VAR_112->radio_tx_rds_ms = FUNC_6(VAR_130,
   &VAR_109,
   VAR_29, 0, 1, 1, 1);
 }
 if (VAR_112->has_sdr_cap) {
  FUNC_5(VAR_131,
   &VAR_89, ((void*)0));
 }
 if (VAR_118->error)
  return VAR_118->error;
 if (VAR_119->error)
  return VAR_119->error;
 if (VAR_120->error)
  return VAR_120->error;
 if (VAR_121->error)
  return VAR_121->error;
 if (VAR_131->error)
  return VAR_131->error;
 if (VAR_123->error)
  return VAR_123->error;

 if (VAR_112->autogain)
  FUNC_2(2, &VAR_112->autogain, 0, 1);

 if (VAR_112->has_vid_cap) {
  FUNC_1(VAR_125, VAR_118, ((void*)0), 0);
  FUNC_1(VAR_125, VAR_119, ((void*)0), 0);
  FUNC_1(VAR_125, VAR_120, ((void*)0), 0);
  FUNC_1(VAR_125, VAR_121, ((void*)0), 0);
  FUNC_1(VAR_125, VAR_122, ((void*)0), 0);
  FUNC_1(VAR_125, VAR_123, ((void*)0), 0);
  FUNC_1(VAR_125, VAR_124, ((void*)0), 0);
  if (VAR_125->error)
   return VAR_125->error;
  VAR_112->vid_cap_dev.ctrl_handler = VAR_125;
 }
 if (VAR_112->has_vid_out) {
  FUNC_1(VAR_126, VAR_118, ((void*)0), 0);
  FUNC_1(VAR_126, VAR_120, ((void*)0), 0);
  FUNC_1(VAR_126, VAR_121, ((void*)0), 0);
  FUNC_1(VAR_126, VAR_124, ((void*)0), 0);
  if (VAR_126->error)
   return VAR_126->error;
  VAR_112->vid_out_dev.ctrl_handler = VAR_126;
 }
 if (VAR_112->has_vbi_cap) {
  FUNC_1(VAR_127, VAR_118, ((void*)0), 0);
  FUNC_1(VAR_127, VAR_121, ((void*)0), 0);
  FUNC_1(VAR_127, VAR_122, ((void*)0), 0);
  FUNC_1(VAR_127, VAR_123, ((void*)0), 0);
  if (VAR_127->error)
   return VAR_127->error;
  VAR_112->vbi_cap_dev.ctrl_handler = VAR_127;
 }
 if (VAR_112->has_vbi_out) {
  FUNC_1(VAR_128, VAR_118, ((void*)0), 0);
  FUNC_1(VAR_128, VAR_121, ((void*)0), 0);
  if (VAR_128->error)
   return VAR_128->error;
  VAR_112->vbi_out_dev.ctrl_handler = VAR_128;
 }
 if (VAR_112->has_radio_rx) {
  FUNC_1(VAR_129, VAR_118, ((void*)0), 0);
  FUNC_1(VAR_129, VAR_120, ((void*)0), 0);
  if (VAR_129->error)
   return VAR_129->error;
  VAR_112->radio_rx_dev.ctrl_handler = VAR_129;
 }
 if (VAR_112->has_radio_tx) {
  FUNC_1(VAR_130, VAR_118, ((void*)0), 0);
  FUNC_1(VAR_130, VAR_120, ((void*)0), 0);
  if (VAR_130->error)
   return VAR_130->error;
  VAR_112->radio_tx_dev.ctrl_handler = VAR_130;
 }
 if (VAR_112->has_sdr_cap) {
  FUNC_1(VAR_131, VAR_118, ((void*)0), 0);
  FUNC_1(VAR_131, VAR_121, ((void*)0), 0);
  if (VAR_131->error)
   return VAR_131->error;
  VAR_112->sdr_cap_dev.ctrl_handler = VAR_131;
 }
 return 0;
}
