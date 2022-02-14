
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 int FUNC_2 (struct tda1997x_state*,int ) ;

__attribute__((used)) static void FUNC_3(struct tda1997x_state *VAR_7, u8 *VAR_8)
{
 struct v4l2_subdev *VAR_9 = &VAR_7->sd;
 u8 VAR_10;

 VAR_10 = FUNC_0(VAR_9, VAR_5);
 FUNC_1(VAR_9, VAR_5, VAR_10);


 if (VAR_10 & VAR_2) {
  FUNC_2(VAR_7, VAR_0);
  VAR_10 &= ~VAR_2;
 }


 if (VAR_10 & VAR_4) {
  FUNC_2(VAR_7, VAR_6);
  VAR_10 &= ~VAR_4;
 }


 if (VAR_10 & VAR_3) {
  FUNC_2(VAR_7, VAR_1);
  VAR_10 &= ~VAR_3;
 }
}
