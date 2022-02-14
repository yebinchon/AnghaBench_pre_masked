
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {struct v4l2_subdev sd; int client; scalar_t__ hdmi_status; scalar_t__ mptrw_in_progress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 int FUNC_2 (struct tda1997x_state*,int *) ;
 int VAR_10 ;
 int FUNC_3 (struct v4l2_subdev*,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct tda1997x_state *VAR_11, u8 *VAR_12)
{
 struct v4l2_subdev *VAR_13 = &VAR_11->sd;
 u8 VAR_14, VAR_15;

 VAR_15 = FUNC_0(VAR_13, VAR_7);
 FUNC_1(VAR_13, VAR_7, VAR_15);

 if (VAR_15 & VAR_2) {

  if (VAR_11->mptrw_in_progress)
   VAR_11->mptrw_in_progress = 0;
 }

 if (VAR_15 & VAR_4) {

  VAR_14 = FUNC_0(VAR_13, VAR_6);
  VAR_14 |= VAR_3;
  FUNC_1(VAR_13, VAR_6, VAR_14);
  VAR_14 &= ~VAR_3;
  FUNC_1(VAR_13, VAR_6, VAR_14);


  VAR_11->hdmi_status = 0;
 }


 VAR_14 = FUNC_0(VAR_13, VAR_8);
 if (((VAR_14 & VAR_5) != VAR_0)
    || (VAR_15 & VAR_2)) {
  VAR_15 &= ~VAR_1;
 }

 if (VAR_15 & (VAR_1 | VAR_4)) {
  VAR_14 = FUNC_0(VAR_13, VAR_8);
  if ((VAR_14 & VAR_5) != VAR_0) {
   FUNC_4(VAR_11->client, "BAD SUS STATUS\n");
   return;
  }
  if (VAR_9)
   FUNC_2(VAR_11, ((void*)0));

  FUNC_3(&VAR_11->sd, &VAR_10);
 }
}
