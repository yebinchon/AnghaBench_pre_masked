
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_9, u32 *VAR_10, v4l2_std_id *VAR_11)
{
 int VAR_12 = VAR_2;
 u8 VAR_13;
 v4l2_std_id VAR_14 = VAR_11 ? *VAR_11 : VAR_5;

 VAR_13 = FUNC_0(VAR_9, VAR_0);
 if (!(VAR_13 & 0x20))
  VAR_12 = 0;
 if (!(VAR_13 & 0x01)) {
  VAR_12 |= VAR_1;
  VAR_14 = VAR_8;
 } else {
  if ((VAR_13 & 0x08))
   VAR_14 &= VAR_7;
  else
   VAR_14 &= VAR_6;
 }
 if ((VAR_13 & 0x10))
  VAR_14 &= VAR_3;
 else
  VAR_14 &= VAR_4;
 if (VAR_11)
  *VAR_11 = VAR_14;
 if (VAR_10)
  *VAR_10 = VAR_12;
 return 0;
}
