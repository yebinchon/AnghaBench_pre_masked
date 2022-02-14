
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {scalar_t__ radio; int std; } ;
struct cx18 {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct cx18*,int,int,int) ;
 int FUNC_2 (struct cx18*) ;
 int FUNC_3 (struct cx18*) ;
 struct cx18_av_state* FUNC_4 (struct v4l2_subdev*) ;
 struct cx18* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_9, v4l2_std_id VAR_10)
{
 struct cx18_av_state *VAR_11 = FUNC_4(VAR_9);
 struct cx18 *VAR_12 = FUNC_5(VAR_9);

 u8 VAR_13 = 0;
 u8 VAR_14 = 0;

 if (VAR_11->radio == 0 && VAR_11->std == VAR_10)
  return 0;

 VAR_11->radio = 0;
 VAR_11->std = VAR_10;


 if (VAR_11->std == VAR_2) {
  VAR_13 = 0x2;
 } else if (VAR_11->std == VAR_1) {
  VAR_13 = 0x3;
 } else if (VAR_11->std == VAR_5) {
  VAR_14 = 1;
  VAR_13 = 0x5;
 } else if (VAR_11->std == VAR_6) {
  VAR_13 = 0x6;
 } else if (VAR_11->std == VAR_7) {
  VAR_13 = 0x7;
 } else if (VAR_11->std == VAR_4) {
  VAR_13 = 0x8;
 } else {

  if (VAR_11->std & VAR_0)
   VAR_13 = 0x1;
  else if (VAR_11->std & VAR_3)
   VAR_13 = 0x4;
  else if (VAR_11->std & VAR_8)
   VAR_13 = 0xc;
 }

 FUNC_0(VAR_9, "changing video std to fmt %i\n", VAR_13);




 if (VAR_13 >= 4 && VAR_13 < 8) {

  FUNC_1(VAR_12, 0x400, ~0xf, 1);

  FUNC_1(VAR_12, 0x47b, ~6, 0);
 }
 FUNC_1(VAR_12, 0x400, ~0x2f, VAR_13 | 0x20);
 FUNC_1(VAR_12, 0x403, ~0x3, VAR_14);
 FUNC_2(VAR_12);
 FUNC_3(VAR_12);
 return 0;
}
