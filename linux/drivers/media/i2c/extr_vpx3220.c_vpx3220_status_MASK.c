
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,struct v4l2_subdev*,char*,int) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_7, u32 *VAR_8, v4l2_std_id *VAR_9)
{
 int VAR_10 = VAR_0, VAR_11;
 v4l2_std_id VAR_12 = VAR_9 ? *VAR_9 : VAR_1;

 VAR_11 = FUNC_1(VAR_7, 0x0f3);

 FUNC_0(1, VAR_6, VAR_7, "status: 0x%04x\n", VAR_11);

 if (VAR_11 < 0)
  return VAR_11;

 if ((VAR_11 & 0x20) == 0) {
  VAR_10 = 0;

  switch (VAR_11 & 0x18) {
  case 0x00:
  case 0x10:
  case 0x14:
  case 0x18:
   VAR_12 &= VAR_3;
   break;

  case 0x08:
   VAR_12 &= VAR_4;
   break;

  case 0x04:
  case 0x0c:
  case 0x1c:
   VAR_12 &= VAR_2;
   break;
  }
 } else {
  VAR_12 = VAR_5;
 }
 if (VAR_9)
  *VAR_9 = VAR_12;
 if (VAR_8)
  *VAR_8 = VAR_10;
 return 0;
}
