
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7842_cfg_read_infoframe {char* member_0; int member_1; int member_2; int member_3; } ;


 int FUNC_0 (struct adv7842_cfg_read_infoframe*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 int FUNC_2 (struct v4l2_subdev*,struct adv7842_cfg_read_infoframe*) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_0)
{
 int VAR_1;
 struct adv7842_cfg_read_infoframe VAR_2[] = {
  { "AVI", 0x01, 0xe0, 0x00 },
  { "Audio", 0x02, 0xe3, 0x1c },
  { "SDP", 0x04, 0xe6, 0x2a },
  { "Vendor", 0x10, 0xec, 0x54 }
 };

 if (!(FUNC_1(VAR_0, 0x05) & 0x80)) {
  FUNC_3(VAR_0, "receive DVI-D signal, no infoframes\n");
  return;
 }

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2); VAR_1++)
  FUNC_2(VAR_0, &VAR_2[VAR_1]);
}
