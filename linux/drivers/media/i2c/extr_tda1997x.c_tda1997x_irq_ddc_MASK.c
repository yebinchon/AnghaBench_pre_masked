
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int detect_tx_5v_ctrl; scalar_t__ mptrw_in_progress; struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct tda1997x_state *VAR_3, u8 *VAR_4)
{
 struct v4l2_subdev *VAR_5 = &VAR_3->sd;
 u8 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 FUNC_1(VAR_5, VAR_2, VAR_6);
 if (VAR_6 & VAR_1) {

  if (VAR_3->mptrw_in_progress)
   VAR_3->mptrw_in_progress = 0;
 }


 if (VAR_6 & VAR_0) {
  FUNC_3(VAR_3->detect_tx_5v_ctrl,
     FUNC_2(VAR_5));
 }
}
