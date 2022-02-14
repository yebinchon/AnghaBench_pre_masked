
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
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct tda1997x_state *VAR_7, bool VAR_8)
{
 struct v4l2_subdev *VAR_9 = &VAR_7->sd;
 u8 VAR_10;

 if (VAR_8) {

  FUNC_1(VAR_9, VAR_6, VAR_1);

  FUNC_1(VAR_9, VAR_3, VAR_2);

  FUNC_1(VAR_9, VAR_4, VAR_1);

  VAR_10 = FUNC_0(VAR_9, VAR_5);
  VAR_10 &= ~VAR_0;
  FUNC_1(VAR_9, VAR_5, VAR_10);
 } else {


  VAR_10 = FUNC_0(VAR_9, VAR_5);
  VAR_10 |= VAR_0;
  FUNC_1(VAR_9, VAR_5, VAR_10);

  FUNC_1(VAR_9, VAR_4, VAR_2);

  FUNC_1(VAR_9, VAR_3, VAR_1);

  FUNC_1(VAR_9, VAR_6, VAR_2);
 }
}
