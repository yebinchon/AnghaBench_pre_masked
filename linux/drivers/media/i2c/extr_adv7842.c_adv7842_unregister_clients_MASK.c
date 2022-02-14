
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7842_state {int * i2c_vdp; int * i2c_cp; int * i2c_hdmi; int * i2c_edid; int * i2c_repeater; int * i2c_afe; int * i2c_sdp; int * i2c_sdp_io; int * i2c_infoframe; int * i2c_cec; int * i2c_avlink; } ;


 int FUNC_0 (int *) ;
 struct adv7842_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct adv7842_state *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1->i2c_avlink);
 FUNC_0(VAR_1->i2c_cec);
 FUNC_0(VAR_1->i2c_infoframe);
 FUNC_0(VAR_1->i2c_sdp_io);
 FUNC_0(VAR_1->i2c_sdp);
 FUNC_0(VAR_1->i2c_afe);
 FUNC_0(VAR_1->i2c_repeater);
 FUNC_0(VAR_1->i2c_edid);
 FUNC_0(VAR_1->i2c_hdmi);
 FUNC_0(VAR_1->i2c_cp);
 FUNC_0(VAR_1->i2c_vdp);

 VAR_1->i2c_avlink = ((void*)0);
 VAR_1->i2c_cec = ((void*)0);
 VAR_1->i2c_infoframe = ((void*)0);
 VAR_1->i2c_sdp_io = ((void*)0);
 VAR_1->i2c_sdp = ((void*)0);
 VAR_1->i2c_afe = ((void*)0);
 VAR_1->i2c_repeater = ((void*)0);
 VAR_1->i2c_edid = ((void*)0);
 VAR_1->i2c_hdmi = ((void*)0);
 VAR_1->i2c_cp = ((void*)0);
 VAR_1->i2c_vdp = ((void*)0);
}
