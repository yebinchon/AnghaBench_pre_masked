
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vidioc_s_fmt_sliced_vbi_out; int vidioc_g_fmt_sliced_vbi_out; int vidioc_g_sliced_vbi_cap; int * vidioc_g_fmt_vbi_cap; void* vidioc_s_frequency; void* vidioc_g_frequency; void* vidioc_s_tuner; void* vidioc_g_tuner; } ;
struct TYPE_3__ {int * vidioc_g_fmt_vbi_cap; int vidioc_s_audio; int vidioc_g_audio; int vidioc_enumaudio; void* vidioc_s_frequency; void* vidioc_g_frequency; void* vidioc_s_tuner; void* vidioc_g_tuner; int vidioc_s_input; int vidioc_g_input; int vidioc_enum_input; } ;
struct saa7146_ext_vv {int capabilities; TYPE_2__ vbi_ops; TYPE_1__ vid_ops; } ;
struct saa7146_dev {int dummy; } ;
struct av7110 {int vbi_dev; int arm_app; int v4l_dev; scalar_t__ analog_tuner_flags; struct saa7146_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct saa7146_ext_vv VAR_4 ;
 struct saa7146_ext_vv VAR_5 ;
 scalar_t__ FUNC_2 (int *,struct saa7146_dev*,char*,int ) ;
 int FUNC_3 (struct saa7146_dev*,struct saa7146_ext_vv*) ;
 int FUNC_4 (struct saa7146_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;

int FUNC_5(struct av7110 *VAR_19)
{
 struct saa7146_dev* VAR_20 = VAR_19->dev;
 struct saa7146_ext_vv *VAR_21;
 int VAR_22;




 if (VAR_19->analog_tuner_flags)
  VAR_21 = &VAR_4;
 else
  VAR_21 = &VAR_5;
 VAR_22 = FUNC_3(VAR_20, VAR_21);

 if (VAR_22) {
  FUNC_0("cannot init capture device. skipping\n");
  return -VAR_0;
 }
 VAR_21->vid_ops.vidioc_enum_input = VAR_6;
 VAR_21->vid_ops.vidioc_g_input = VAR_11;
 VAR_21->vid_ops.vidioc_s_input = VAR_17;
 VAR_21->vid_ops.vidioc_g_tuner = VAR_13;
 VAR_21->vid_ops.vidioc_s_tuner = VAR_18;
 VAR_21->vid_ops.vidioc_g_frequency = VAR_10;
 VAR_21->vid_ops.vidioc_s_frequency = VAR_16;
 VAR_21->vid_ops.vidioc_enumaudio = VAR_7;
 VAR_21->vid_ops.vidioc_g_audio = VAR_8;
 VAR_21->vid_ops.vidioc_s_audio = VAR_14;
 VAR_21->vid_ops.vidioc_g_fmt_vbi_cap = ((void*)0);

 VAR_21->vbi_ops.vidioc_g_tuner = VAR_13;
 VAR_21->vbi_ops.vidioc_s_tuner = VAR_18;
 VAR_21->vbi_ops.vidioc_g_frequency = VAR_10;
 VAR_21->vbi_ops.vidioc_s_frequency = VAR_16;
 VAR_21->vbi_ops.vidioc_g_fmt_vbi_cap = ((void*)0);
 VAR_21->vbi_ops.vidioc_g_sliced_vbi_cap = VAR_12;
 VAR_21->vbi_ops.vidioc_g_fmt_sliced_vbi_out = VAR_9;
 VAR_21->vbi_ops.vidioc_s_fmt_sliced_vbi_out = VAR_15;

 if (FUNC_1(VAR_19->arm_app) < 0x2623)
  VAR_21->capabilities &= ~VAR_1;

 if (FUNC_2(&VAR_19->v4l_dev, VAR_20, "av7110", VAR_2)) {
  FUNC_0("cannot register capture device. skipping\n");
  FUNC_4(VAR_20);
  return -VAR_0;
 }
 if (FUNC_1(VAR_19->arm_app) >= 0x2623) {
  if (FUNC_2(&VAR_19->vbi_dev, VAR_20, "av7110", VAR_3))
   FUNC_0("cannot register vbi v4l2 device. skipping\n");
 }
 return 0;
}
