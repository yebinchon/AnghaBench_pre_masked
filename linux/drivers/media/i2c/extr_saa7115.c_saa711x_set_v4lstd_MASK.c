
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ std; scalar_t__ ident; int audclk_freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int) ;
 int FUNC_4 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static void FUNC_7(struct v4l2_subdev *VAR_18, v4l2_std_id VAR_19)
{
 struct saa711x_state *VAR_20 = FUNC_5(VAR_18);
 if (VAR_19 == VAR_20->std)
  return;

 VAR_20->std = VAR_19;


 if (VAR_19 & VAR_8) {
  FUNC_6(1, VAR_14, VAR_18, "decoder set standard 60 Hz\n");
  if (VAR_20->ident == VAR_0) {
   u8 VAR_21 = FUNC_0(VAR_18, VAR_1);
   VAR_21 &= ~(VAR_6 | VAR_5);
   VAR_21 |= VAR_6;
   FUNC_3(VAR_18, VAR_1, VAR_21);
  } else {
   FUNC_4(VAR_18, VAR_16);
  }
  FUNC_2(VAR_18, 720, 480);
 } else {
  FUNC_6(1, VAR_14, VAR_18, "decoder set standard 50 Hz\n");
  if (VAR_20->ident == VAR_0) {
   u8 VAR_22 = FUNC_0(VAR_18, VAR_1);
   VAR_22 &= ~(VAR_6 | VAR_5);
   FUNC_3(VAR_18, VAR_1, VAR_22);
  } else {
   FUNC_4(VAR_18, VAR_15);
  }
  FUNC_2(VAR_18, 720, 576);
 }
 if (VAR_20->ident <= VAR_4 ||
     VAR_20->ident == VAR_0) {
  u8 VAR_23 = FUNC_0(VAR_18, VAR_2) & 0x8f;

  if (VAR_19 == VAR_11) {
   VAR_23 |= 0x30;
  } else if (VAR_19 == VAR_12) {
   VAR_23 |= 0x20;
  } else if (VAR_19 == VAR_10) {
   VAR_23 |= 0x10;
  } else if (VAR_19 == VAR_9) {
   VAR_23 |= 0x40;
  } else if (VAR_19 & VAR_13) {
   VAR_23 |= 0x50;
  }
  FUNC_3(VAR_18, VAR_2, VAR_23);
 } else {

  int VAR_24 = FUNC_0(VAR_18, VAR_3) & 0x10;

  if (VAR_24 && VAR_20->ident == VAR_7)
   FUNC_4(VAR_18, VAR_17);


  FUNC_1(VAR_18, VAR_20->audclk_freq);
 }
}
