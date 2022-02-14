
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 switch (VAR_2) {
 case 32000: VAR_3 = 0x30; break;
 case 44100: VAR_3 = 0x00; break;
 case 48000: VAR_3 = 0x20; break;
 case 88200: VAR_3 = 0x80; break;
 case 96000: VAR_3 = 0xa0; break;
 case 176400: VAR_3 = 0xc0; break;
 case 192000: VAR_3 = 0xe0; break;
 default:
  return -VAR_0;
 }


 FUNC_0(VAR_1, 0x15, 0xf, VAR_3);

 return 0;
}
