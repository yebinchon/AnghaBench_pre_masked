
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7842_platform_data {int i2c_vdp; int i2c_cp; int i2c_hdmi; int i2c_edid; int i2c_repeater; int i2c_afe; int i2c_sdp; int i2c_sdp_io; int i2c_infoframe; int i2c_cec; int i2c_avlink; } ;
struct adv7842_state {void* i2c_vdp; void* i2c_cp; void* i2c_hdmi; void* i2c_edid; void* i2c_repeater; void* i2c_afe; void* i2c_sdp; void* i2c_sdp_io; void* i2c_infoframe; void* i2c_cec; void* i2c_avlink; struct adv7842_platform_data pdata; } ;


 void* FUNC_0 (struct v4l2_subdev*,char*,int ,int) ;
 struct adv7842_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct adv7842_state *VAR_1 = FUNC_1(VAR_0);
 struct adv7842_platform_data *VAR_2 = &VAR_1->pdata;

 VAR_1->i2c_avlink = FUNC_0(VAR_0, "avlink", VAR_2->i2c_avlink, 0xf3);
 VAR_1->i2c_cec = FUNC_0(VAR_0, "cec", VAR_2->i2c_cec, 0xf4);
 VAR_1->i2c_infoframe = FUNC_0(VAR_0, "infoframe", VAR_2->i2c_infoframe, 0xf5);
 VAR_1->i2c_sdp_io = FUNC_0(VAR_0, "sdp_io", VAR_2->i2c_sdp_io, 0xf2);
 VAR_1->i2c_sdp = FUNC_0(VAR_0, "sdp", VAR_2->i2c_sdp, 0xf1);
 VAR_1->i2c_afe = FUNC_0(VAR_0, "afe", VAR_2->i2c_afe, 0xf8);
 VAR_1->i2c_repeater = FUNC_0(VAR_0, "repeater", VAR_2->i2c_repeater, 0xf9);
 VAR_1->i2c_edid = FUNC_0(VAR_0, "edid", VAR_2->i2c_edid, 0xfa);
 VAR_1->i2c_hdmi = FUNC_0(VAR_0, "hdmi", VAR_2->i2c_hdmi, 0xfb);
 VAR_1->i2c_cp = FUNC_0(VAR_0, "cp", VAR_2->i2c_cp, 0xfd);
 VAR_1->i2c_vdp = FUNC_0(VAR_0, "vdp", VAR_2->i2c_vdp, 0xfe);

 if (!VAR_1->i2c_avlink ||
     !VAR_1->i2c_cec ||
     !VAR_1->i2c_infoframe ||
     !VAR_1->i2c_sdp_io ||
     !VAR_1->i2c_sdp ||
     !VAR_1->i2c_afe ||
     !VAR_1->i2c_repeater ||
     !VAR_1->i2c_edid ||
     !VAR_1->i2c_hdmi ||
     !VAR_1->i2c_cp ||
     !VAR_1->i2c_vdp)
  return -1;

 return 0;
}
