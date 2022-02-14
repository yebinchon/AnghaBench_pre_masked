
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tda1997x_state *VAR_10)
{
 struct v4l2_subdev *VAR_11 = &VAR_10->sd;
 u8 VAR_12;


 FUNC_1(VAR_11, VAR_5, VAR_2 | VAR_1);
 FUNC_1(VAR_11, VAR_8, VAR_4);
 FUNC_1(VAR_11, VAR_7, VAR_4);
 FUNC_1(VAR_11, VAR_9, VAR_4);

 VAR_12 = FUNC_0(VAR_11, VAR_6);
 VAR_12 &= ~0x06;
 VAR_12 |= 0x02;
 FUNC_1(VAR_11, VAR_6, VAR_12);
 FUNC_1(VAR_11, VAR_5, VAR_0);
 FUNC_1(VAR_11, VAR_8, VAR_3);
 VAR_12 = FUNC_0(VAR_11, VAR_6);
 VAR_12 &= ~0x06;
 FUNC_1(VAR_11, VAR_6, VAR_12);
}
