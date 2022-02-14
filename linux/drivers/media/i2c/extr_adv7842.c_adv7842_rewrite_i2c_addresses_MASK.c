
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7842_platform_data {int i2c_sdp; int i2c_sdp_io; int i2c_avlink; int i2c_cec; int i2c_infoframe; int i2c_afe; int i2c_repeater; int i2c_edid; int i2c_hdmi; int i2c_cp; int i2c_vdp; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct v4l2_subdev *VAR_0,
  struct adv7842_platform_data *VAR_1)
{
 FUNC_0(VAR_0, 0xf1, VAR_1->i2c_sdp << 1);
 FUNC_0(VAR_0, 0xf2, VAR_1->i2c_sdp_io << 1);
 FUNC_0(VAR_0, 0xf3, VAR_1->i2c_avlink << 1);
 FUNC_0(VAR_0, 0xf4, VAR_1->i2c_cec << 1);
 FUNC_0(VAR_0, 0xf5, VAR_1->i2c_infoframe << 1);

 FUNC_0(VAR_0, 0xf8, VAR_1->i2c_afe << 1);
 FUNC_0(VAR_0, 0xf9, VAR_1->i2c_repeater << 1);
 FUNC_0(VAR_0, 0xfa, VAR_1->i2c_edid << 1);
 FUNC_0(VAR_0, 0xfb, VAR_1->i2c_hdmi << 1);

 FUNC_0(VAR_0, 0xfd, VAR_1->i2c_cp << 1);
 FUNC_0(VAR_0, 0xfe, VAR_1->i2c_vdp << 1);
}
