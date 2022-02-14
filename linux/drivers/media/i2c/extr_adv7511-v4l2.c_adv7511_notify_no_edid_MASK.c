
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7511_state {int have_edid0_ctrl; int cec_adap; } ;
struct adv7511_edid_detect {int present; int phys_addr; int segment; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct adv7511_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct v4l2_subdev*,int ,void*) ;

__attribute__((used)) static void FUNC_5(struct v4l2_subdev *VAR_2)
{
 struct adv7511_state *VAR_3 = FUNC_2(VAR_2);
 struct adv7511_edid_detect VAR_4;


 VAR_4.present = 0;
 VAR_4.segment = FUNC_0(VAR_2, 0xc4);
 VAR_4.phys_addr = VAR_1;
 FUNC_1(VAR_3->cec_adap, VAR_4.phys_addr, 0);
 FUNC_4(VAR_2, VAR_0, (void *)&VAR_4);
 FUNC_3(VAR_3->have_edid0_ctrl, 0x0);
}
