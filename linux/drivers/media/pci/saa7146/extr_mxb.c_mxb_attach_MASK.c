
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct saa7146_pci_extension_data {int dummy; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {int vbi_dev; int video_dev; } ;
struct TYPE_4__ {int vidioc_s_register; int vidioc_g_register; int vidioc_s_audio; int vidioc_g_audio; int vidioc_enumaudio; int vidioc_s_frequency; int vidioc_g_frequency; int vidioc_s_tuner; int vidioc_g_tuner; int vidioc_querystd; int vidioc_s_input; int vidioc_g_input; int vidioc_enum_input; } ;
struct TYPE_5__ {TYPE_1__ vid_ops; } ;


 int FUNC_0 (char*,struct saa7146_dev*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct saa7146_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct saa7146_dev*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct saa7146_dev*) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int *,struct saa7146_dev*,char*,int ) ;
 int FUNC_7 (struct saa7146_dev*,TYPE_2__*) ;
 int FUNC_8 (struct saa7146_dev*) ;
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
 TYPE_2__ VAR_16 ;

__attribute__((used)) static int FUNC_9(struct saa7146_dev *VAR_17, struct saa7146_pci_extension_data *VAR_18)
{
 struct mxb *VAR_19;

 FUNC_0("dev:%p\n", VAR_17);

 FUNC_7(VAR_17, &VAR_16);
 if (FUNC_4(VAR_17)) {
  FUNC_8(VAR_17);
  return -1;
 }
 VAR_19 = (struct mxb *)VAR_17->ext_priv;

 VAR_16.vid_ops.vidioc_enum_input = VAR_3;
 VAR_16.vid_ops.vidioc_g_input = VAR_7;
 VAR_16.vid_ops.vidioc_s_input = VAR_13;
 VAR_16.vid_ops.vidioc_querystd = VAR_10;
 VAR_16.vid_ops.vidioc_g_tuner = VAR_9;
 VAR_16.vid_ops.vidioc_s_tuner = VAR_15;
 VAR_16.vid_ops.vidioc_g_frequency = VAR_6;
 VAR_16.vid_ops.vidioc_s_frequency = VAR_12;
 VAR_16.vid_ops.vidioc_enumaudio = VAR_4;
 VAR_16.vid_ops.vidioc_g_audio = VAR_5;
 VAR_16.vid_ops.vidioc_s_audio = VAR_11;




 if (FUNC_6(&VAR_19->video_dev, VAR_17, "mxb", VAR_0)) {
  FUNC_1("cannot register capture v4l2 device. skipping.\n");
  FUNC_8(VAR_17);
  return -1;
 }


 if (FUNC_2(VAR_17)) {
  if (FUNC_6(&VAR_19->vbi_dev, VAR_17, "mxb", VAR_1)) {
   FUNC_1("cannot register vbi v4l2 device. skipping.\n");
  }
 }

 FUNC_5("found Multimedia eXtension Board #%d\n", VAR_2);

 VAR_2++;
 FUNC_3(VAR_17);
 return 0;
}
