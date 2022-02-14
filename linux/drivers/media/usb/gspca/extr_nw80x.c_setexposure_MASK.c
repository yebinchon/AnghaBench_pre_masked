
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int webcam; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;







 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;
 u8 VAR_3[2];

 switch (VAR_2->webcam) {
 case 128:
  VAR_3[0] = ((9 - VAR_1) << 3) | 0x01;
  FUNC_0(VAR_0, 0x1019, VAR_3, 1);
  break;
 case 132:
 case 131:
 case 129:
 case 130:
  VAR_3[0] = VAR_1;
  VAR_3[1] = VAR_1 >> 8;
  FUNC_0(VAR_0, 0x101b, VAR_3, 2);
  break;
 }
}
