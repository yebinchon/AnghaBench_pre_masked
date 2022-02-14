
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 switch (VAR_2) {
 case 32000: VAR_3 = 4096; break;
 case 44100: VAR_3 = 6272; break;
 case 48000: VAR_3 = 6144; break;
 case 88200: VAR_3 = 12544; break;
 case 96000: VAR_3 = 12288; break;
 case 176400: VAR_3 = 25088; break;
 case 192000: VAR_3 = 24576; break;
 default:
  return -VAR_0;
 }


 FUNC_0(VAR_1, 0x01, (VAR_3 >> 16) & 0xf);
 FUNC_0(VAR_1, 0x02, (VAR_3 >> 8) & 0xff);
 FUNC_0(VAR_1, 0x03, VAR_3 & 0xff);

 return 0;
}
