
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int* data; } ;
struct adv7511_state {TYPE_1__ edid; } ;
typedef int hdmi_header ;


 struct adv7511_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static bool FUNC_2(struct v4l2_subdev *VAR_0, u32 VAR_1)
{
 static const u8 VAR_2[] = {
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00
 };
 struct adv7511_state *VAR_3 = FUNC_0(VAR_0);
 u8 *VAR_4 = VAR_3->edid.data;

 if (VAR_1 != 0)
  return 1;
 return !FUNC_1(VAR_4, VAR_2, sizeof(VAR_2));
}
