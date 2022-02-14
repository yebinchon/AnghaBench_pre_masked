
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_tuner {int audmode; int index; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct av7110 {int current_input; int analog_tuner_flags; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct av7110*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, const struct v4l2_tuner *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct av7110 *VAR_6 = (struct av7110 *)VAR_5->ext_priv;
 u16 VAR_7, VAR_8;
 FUNC_0(2, "VIDIOC_S_TUNER: %d\n", VAR_4->index);

 if (!VAR_6->analog_tuner_flags || VAR_6->current_input != 1)
  return -VAR_0;

 switch (VAR_4->audmode) {
 case 128:
  FUNC_0(2, "VIDIOC_S_TUNER: V4L2_TUNER_MODE_STEREO\n");
  VAR_7 = 0x3001;
  VAR_8 = 0x0020;
  break;
 case 130:
  FUNC_0(2, "VIDIOC_S_TUNER: V4L2_TUNER_MODE_LANG1_LANG2\n");
  VAR_7 = 0x3000;
  VAR_8 = 0x0020;
  break;
 case 131:
  FUNC_0(2, "VIDIOC_S_TUNER: V4L2_TUNER_MODE_LANG1\n");
  VAR_7 = 0x3000;
  VAR_8 = 0x0000;
  break;
 case 129:
  FUNC_0(2, "VIDIOC_S_TUNER: V4L2_TUNER_MODE_LANG2\n");
  VAR_7 = 0x3000;
  VAR_8 = 0x0010;
  break;
 default:
  FUNC_0(2, "VIDIOC_S_TUNER: TDA9840_SET_MONO\n");
  VAR_7 = 0x3000;
  VAR_8 = 0x0030;
  break;
 }
 FUNC_1(VAR_6, VAR_1, 0x000e, VAR_7);
 FUNC_1(VAR_6, VAR_1, 0x0008, VAR_8);
 FUNC_1(VAR_6, VAR_1, 0x0009, VAR_8);
 FUNC_1(VAR_6, VAR_1, 0x000a, VAR_8);
 return 0;
}
