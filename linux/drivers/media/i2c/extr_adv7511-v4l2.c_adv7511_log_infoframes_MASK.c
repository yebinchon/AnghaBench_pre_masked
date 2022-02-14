
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int member_0; int member_1; int member_2; } ;
struct adv7511_cfg_read_infoframe {char* member_0; int member_1; int member_2; int member_4; TYPE_1__ member_3; } ;


 int FUNC_0 (struct adv7511_cfg_read_infoframe const*) ;
 int FUNC_1 (struct v4l2_subdev*,struct adv7511_cfg_read_infoframe const*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0)
{
 static const struct adv7511_cfg_read_infoframe VAR_1[] = {
  { "AVI", 0x44, 0x10, { 0x82, 2, 13 }, 0x55 },
  { "Audio", 0x44, 0x08, { 0x84, 1, 10 }, 0x73 },
  { "SDP", 0x40, 0x40, { 0x83, 1, 25 }, 0x103 },
 };
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  FUNC_1(VAR_0, &VAR_1[VAR_2]);
}
