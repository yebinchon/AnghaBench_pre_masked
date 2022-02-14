
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; scalar_t__ vfl_dir; int valid_ioctls; scalar_t__ ctrl_handler; struct v4l2_ioctl_ops* ioctl_ops; } ;
struct v4l2_ioctl_ops {scalar_t__ vidioc_g_std; scalar_t__ vidioc_g_parm; scalar_t__ vidioc_s_std; scalar_t__ vidioc_try_fmt_sdr_out; scalar_t__ vidioc_s_fmt_sdr_out; scalar_t__ vidioc_g_fmt_sdr_out; scalar_t__ vidioc_enum_fmt_sdr_out; scalar_t__ vidioc_try_fmt_sdr_cap; scalar_t__ vidioc_s_fmt_sdr_cap; scalar_t__ vidioc_g_fmt_sdr_cap; scalar_t__ vidioc_enum_fmt_sdr_cap; scalar_t__ vidioc_try_fmt_sliced_vbi_out; scalar_t__ vidioc_try_fmt_vbi_out; scalar_t__ vidioc_try_fmt_sliced_vbi_cap; scalar_t__ vidioc_try_fmt_vbi_cap; scalar_t__ vidioc_s_fmt_sliced_vbi_out; scalar_t__ vidioc_s_fmt_vbi_out; scalar_t__ vidioc_s_fmt_sliced_vbi_cap; scalar_t__ vidioc_s_fmt_vbi_cap; scalar_t__ vidioc_g_fmt_sliced_vbi_out; scalar_t__ vidioc_g_fmt_vbi_out; scalar_t__ vidioc_g_fmt_sliced_vbi_cap; scalar_t__ vidioc_g_fmt_vbi_cap; scalar_t__ vidioc_s_selection; scalar_t__ vidioc_g_selection; scalar_t__ vidioc_try_fmt_meta_out; scalar_t__ vidioc_try_fmt_vid_out_overlay; scalar_t__ vidioc_try_fmt_vid_out_mplane; scalar_t__ vidioc_try_fmt_vid_out; scalar_t__ vidioc_try_fmt_meta_cap; scalar_t__ vidioc_try_fmt_vid_overlay; scalar_t__ vidioc_try_fmt_vid_cap_mplane; scalar_t__ vidioc_try_fmt_vid_cap; scalar_t__ vidioc_s_fmt_meta_out; scalar_t__ vidioc_s_fmt_vid_out_overlay; scalar_t__ vidioc_s_fmt_vid_out_mplane; scalar_t__ vidioc_s_fmt_vid_out; scalar_t__ vidioc_s_fmt_meta_cap; scalar_t__ vidioc_s_fmt_vid_overlay; scalar_t__ vidioc_s_fmt_vid_cap_mplane; scalar_t__ vidioc_s_fmt_vid_cap; scalar_t__ vidioc_g_fmt_meta_out; scalar_t__ vidioc_g_fmt_vid_out_overlay; scalar_t__ vidioc_g_fmt_vid_out_mplane; scalar_t__ vidioc_g_fmt_vid_out; scalar_t__ vidioc_g_fmt_meta_cap; scalar_t__ vidioc_g_fmt_vid_overlay; scalar_t__ vidioc_g_fmt_vid_cap_mplane; scalar_t__ vidioc_g_fmt_vid_cap; scalar_t__ vidioc_enum_fmt_meta_out; scalar_t__ vidioc_enum_fmt_vid_out; scalar_t__ vidioc_enum_fmt_meta_cap; scalar_t__ vidioc_enum_fmt_vid_overlay; scalar_t__ vidioc_enum_fmt_vid_cap; scalar_t__ vidioc_g_modulator; scalar_t__ vidioc_g_tuner; scalar_t__ vidioc_enum_freq_bands; scalar_t__ vidioc_querymenu; scalar_t__ vidioc_try_ext_ctrls; scalar_t__ vidioc_s_ext_ctrls; scalar_t__ vidioc_g_ext_ctrls; scalar_t__ vidioc_s_ctrl; scalar_t__ vidioc_g_ctrl; scalar_t__ vidioc_query_ext_ctrl; scalar_t__ vidioc_queryctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct v4l2_ioctl_ops const*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 int VAR_118 ;
 int VAR_119 ;
 int VAR_120 ;
 int VAR_121 ;
 int VAR_122 ;
 int VAR_123 ;
 int VAR_124 ;
 int VAR_125 ;
 int VAR_126 ;
 int VAR_127 ;
 int VAR_128 ;
 int VAR_129 ;
 int VAR_130 ;
 int VAR_131 ;
 int VAR_132 ;
 int VAR_133 ;
 int VAR_134 ;
 int VAR_135 ;
 int VAR_136 ;
 int VAR_137 ;
 int VAR_138 ;
 int VAR_139 ;
 int VAR_140 ;
 int VAR_141 ;
 int VAR_142 ;
 int VAR_143 ;
 int VAR_144 ;
 int VAR_145 ;
 int VAR_146 ;
 int VAR_147 ;
 int VAR_148 ;

__attribute__((used)) static void FUNC_6(struct video_device *VAR_149)
{
 FUNC_0(VAR_90, VAR_0);
 const struct v4l2_ioctl_ops *VAR_150 = VAR_149->ioctl_ops;
 bool VAR_151 = VAR_149->vfl_type == VAR_3;
 bool VAR_152 = VAR_149->vfl_type == VAR_7;
 bool VAR_153 = VAR_149->vfl_type == VAR_4;
 bool VAR_154 = VAR_149->vfl_type == VAR_5;
 bool VAR_155 = VAR_149->vfl_type == VAR_6;
 bool VAR_156 = VAR_149->vfl_dir != VAR_2;
 bool VAR_157 = VAR_149->vfl_dir != VAR_1;

 FUNC_4(VAR_90, VAR_0);



 FUNC_1(VAR_150, VAR_55, VAR_125);
 FUNC_5(FUNC_2(VAR_45), VAR_90);
 FUNC_5(FUNC_2(VAR_81), VAR_90);





 if (VAR_149->ctrl_handler || VAR_150->vidioc_queryctrl)
  FUNC_5(FUNC_2(VAR_56), VAR_90);
 if (VAR_149->ctrl_handler || VAR_150->vidioc_query_ext_ctrl)
  FUNC_5(FUNC_2(VAR_60), VAR_90);
 if (VAR_149->ctrl_handler || VAR_150->vidioc_g_ctrl || VAR_150->vidioc_g_ext_ctrls)
  FUNC_5(FUNC_2(VAR_32), VAR_90);
 if (VAR_149->ctrl_handler || VAR_150->vidioc_s_ctrl || VAR_150->vidioc_s_ext_ctrls)
  FUNC_5(FUNC_2(VAR_68), VAR_90);
 if (VAR_149->ctrl_handler || VAR_150->vidioc_g_ext_ctrls)
  FUNC_5(FUNC_2(VAR_36), VAR_90);
 if (VAR_149->ctrl_handler || VAR_150->vidioc_s_ext_ctrls)
  FUNC_5(FUNC_2(VAR_71), VAR_90);
 if (VAR_149->ctrl_handler || VAR_150->vidioc_try_ext_ctrls)
  FUNC_5(FUNC_2(VAR_87), VAR_90);
 if (VAR_149->ctrl_handler || VAR_150->vidioc_querymenu)
  FUNC_5(FUNC_2(VAR_57), VAR_90);
 FUNC_1(VAR_150, VAR_39, VAR_110);
 FUNC_1(VAR_150, VAR_74, VAR_133);
 FUNC_1(VAR_150, VAR_50, VAR_119);






 FUNC_1(VAR_150, VAR_15, VAR_145);
 FUNC_1(VAR_150, VAR_64, VAR_145);
 FUNC_1(VAR_150, VAR_89, VAR_148);
 if (VAR_150->vidioc_enum_freq_bands || VAR_150->vidioc_g_tuner || VAR_150->vidioc_g_modulator)
  FUNC_5(FUNC_2(VAR_27), VAR_90);

 if (VAR_151 || VAR_155) {

  if ((VAR_156 && (VAR_150->vidioc_enum_fmt_vid_cap ||
          VAR_150->vidioc_enum_fmt_vid_overlay ||
          VAR_150->vidioc_enum_fmt_meta_cap)) ||
      (VAR_157 && (VAR_150->vidioc_enum_fmt_vid_out ||
          VAR_150->vidioc_enum_fmt_meta_out)))
   FUNC_5(FUNC_2(VAR_24), VAR_90);
  if ((VAR_156 && (VAR_150->vidioc_g_fmt_vid_cap ||
          VAR_150->vidioc_g_fmt_vid_cap_mplane ||
          VAR_150->vidioc_g_fmt_vid_overlay ||
          VAR_150->vidioc_g_fmt_meta_cap)) ||
      (VAR_157 && (VAR_150->vidioc_g_fmt_vid_out ||
          VAR_150->vidioc_g_fmt_vid_out_mplane ||
          VAR_150->vidioc_g_fmt_vid_out_overlay ||
          VAR_150->vidioc_g_fmt_meta_out)))
    FUNC_5(FUNC_2(VAR_38), VAR_90);
  if ((VAR_156 && (VAR_150->vidioc_s_fmt_vid_cap ||
          VAR_150->vidioc_s_fmt_vid_cap_mplane ||
          VAR_150->vidioc_s_fmt_vid_overlay ||
          VAR_150->vidioc_s_fmt_meta_cap)) ||
      (VAR_157 && (VAR_150->vidioc_s_fmt_vid_out ||
          VAR_150->vidioc_s_fmt_vid_out_mplane ||
          VAR_150->vidioc_s_fmt_vid_out_overlay ||
          VAR_150->vidioc_s_fmt_meta_out)))
    FUNC_5(FUNC_2(VAR_73), VAR_90);
  if ((VAR_156 && (VAR_150->vidioc_try_fmt_vid_cap ||
          VAR_150->vidioc_try_fmt_vid_cap_mplane ||
          VAR_150->vidioc_try_fmt_vid_overlay ||
          VAR_150->vidioc_try_fmt_meta_cap)) ||
      (VAR_157 && (VAR_150->vidioc_try_fmt_vid_out ||
          VAR_150->vidioc_try_fmt_vid_out_mplane ||
          VAR_150->vidioc_try_fmt_vid_out_overlay ||
          VAR_150->vidioc_try_fmt_meta_out)))
    FUNC_5(FUNC_2(VAR_88), VAR_90);
  FUNC_1(VAR_150, VAR_51, VAR_120);
  FUNC_1(VAR_150, VAR_37, VAR_109);
  FUNC_1(VAR_150, VAR_72, VAR_132);
  FUNC_1(VAR_150, VAR_41, VAR_112);
  FUNC_1(VAR_150, VAR_77, VAR_136);
  FUNC_1(VAR_150, VAR_35, VAR_108);
  FUNC_1(VAR_150, VAR_17, VAR_95);
  FUNC_1(VAR_150, VAR_86, VAR_147);
  FUNC_1(VAR_150, VAR_13, VAR_92);
  FUNC_1(VAR_150, VAR_85, VAR_146);
  FUNC_1(VAR_150, VAR_26, VAR_98);
  FUNC_1(VAR_150, VAR_25, VAR_97);
  if (VAR_150->vidioc_g_selection) {
   FUNC_5(FUNC_2(VAR_31), VAR_90);
   FUNC_5(FUNC_2(VAR_9), VAR_90);
  }
  if (VAR_150->vidioc_s_selection)
   FUNC_5(FUNC_2(VAR_67), VAR_90);
  FUNC_1(VAR_150, VAR_46, VAR_115);
  FUNC_1(VAR_150, VAR_82, VAR_140);
 } else if (VAR_152) {

  if ((VAR_156 && (VAR_150->vidioc_g_fmt_vbi_cap ||
          VAR_150->vidioc_g_fmt_sliced_vbi_cap)) ||
      (VAR_157 && (VAR_150->vidioc_g_fmt_vbi_out ||
          VAR_150->vidioc_g_fmt_sliced_vbi_out)))
   FUNC_5(FUNC_2(VAR_38), VAR_90);
  if ((VAR_156 && (VAR_150->vidioc_s_fmt_vbi_cap ||
          VAR_150->vidioc_s_fmt_sliced_vbi_cap)) ||
      (VAR_157 && (VAR_150->vidioc_s_fmt_vbi_out ||
          VAR_150->vidioc_s_fmt_sliced_vbi_out)))
   FUNC_5(FUNC_2(VAR_73), VAR_90);
  if ((VAR_156 && (VAR_150->vidioc_try_fmt_vbi_cap ||
          VAR_150->vidioc_try_fmt_sliced_vbi_cap)) ||
      (VAR_157 && (VAR_150->vidioc_try_fmt_vbi_out ||
          VAR_150->vidioc_try_fmt_sliced_vbi_out)))
   FUNC_5(FUNC_2(VAR_88), VAR_90);
  FUNC_1(VAR_150, VAR_47, VAR_116);
 } else if (VAR_154 && VAR_156) {

  if (VAR_150->vidioc_enum_fmt_sdr_cap)
   FUNC_5(FUNC_2(VAR_24), VAR_90);
  if (VAR_150->vidioc_g_fmt_sdr_cap)
   FUNC_5(FUNC_2(VAR_38), VAR_90);
  if (VAR_150->vidioc_s_fmt_sdr_cap)
   FUNC_5(FUNC_2(VAR_73), VAR_90);
  if (VAR_150->vidioc_try_fmt_sdr_cap)
   FUNC_5(FUNC_2(VAR_88), VAR_90);
 } else if (VAR_154 && VAR_157) {

  if (VAR_150->vidioc_enum_fmt_sdr_out)
   FUNC_5(FUNC_2(VAR_24), VAR_90);
  if (VAR_150->vidioc_g_fmt_sdr_out)
   FUNC_5(FUNC_2(VAR_38), VAR_90);
  if (VAR_150->vidioc_s_fmt_sdr_out)
   FUNC_5(FUNC_2(VAR_73), VAR_90);
  if (VAR_150->vidioc_try_fmt_sdr_out)
   FUNC_5(FUNC_2(VAR_88), VAR_90);
 }

 if (VAR_151 || VAR_152 || VAR_154 || VAR_155) {

  FUNC_1(VAR_150, VAR_61, VAR_127);
  FUNC_1(VAR_150, VAR_54, VAR_124);
  FUNC_1(VAR_150, VAR_53, VAR_122);
  FUNC_1(VAR_150, VAR_28, VAR_103);
  FUNC_1(VAR_150, VAR_14, VAR_93);
  FUNC_1(VAR_150, VAR_8, VAR_91);
  FUNC_1(VAR_150, VAR_52, VAR_121);
  FUNC_1(VAR_150, VAR_63, VAR_144);
  FUNC_1(VAR_150, VAR_62, VAR_143);
 }

 if (VAR_151 || VAR_152 || VAR_155) {

  if (VAR_150->vidioc_s_std)
   FUNC_5(FUNC_2(VAR_22), VAR_90);
  FUNC_1(VAR_150, VAR_83, VAR_141);
  FUNC_1(VAR_150, VAR_48, VAR_117);
  if (VAR_156) {
   FUNC_1(VAR_150, VAR_58, VAR_126);
   FUNC_1(VAR_150, VAR_20, VAR_99);
   FUNC_1(VAR_150, VAR_40, VAR_111);
   FUNC_1(VAR_150, VAR_76, VAR_135);
   FUNC_1(VAR_150, VAR_18, VAR_101);
   FUNC_1(VAR_150, VAR_29, VAR_104);
   FUNC_1(VAR_150, VAR_65, VAR_128);
   FUNC_1(VAR_150, VAR_59, VAR_123);
   FUNC_1(VAR_150, VAR_70, VAR_131);
  }
  if (VAR_157) {
   FUNC_1(VAR_150, VAR_21, VAR_100);
   FUNC_1(VAR_150, VAR_43, VAR_114);
   FUNC_1(VAR_150, VAR_79, VAR_138);
   FUNC_1(VAR_150, VAR_19, VAR_102);
   FUNC_1(VAR_150, VAR_30, VAR_105);
   FUNC_1(VAR_150, VAR_66, VAR_129);
  }
  if (VAR_150->vidioc_g_parm || (VAR_149->vfl_type == VAR_3 &&
     VAR_150->vidioc_g_std))
   FUNC_5(FUNC_2(VAR_44), VAR_90);
  FUNC_1(VAR_150, VAR_80, VAR_139);
  FUNC_1(VAR_150, VAR_69, VAR_130);
  FUNC_1(VAR_150, VAR_33, VAR_106);
  FUNC_1(VAR_150, VAR_23, VAR_96);
  FUNC_1(VAR_150, VAR_16, VAR_94);
  FUNC_1(VAR_150, VAR_34, VAR_107);
 }
 if (VAR_157 && (VAR_153 || VAR_154)) {

  FUNC_1(VAR_150, VAR_42, VAR_113);
  FUNC_1(VAR_150, VAR_78, VAR_137);
 }
 if (VAR_156) {

  FUNC_1(VAR_150, VAR_49, VAR_118);
  FUNC_1(VAR_150, VAR_84, VAR_142);
  FUNC_1(VAR_150, VAR_75, VAR_134);
 }

 FUNC_3(VAR_149->valid_ioctls, VAR_90, VAR_149->valid_ioctls,
   VAR_0);
}
