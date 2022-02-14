
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;




 int FUNC_0 (struct gspca_dev*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;
 u8 VAR_3;
 u8 VAR_4[4] = { 0x66, 0x00, 0xa8, 0xe8 };

 switch (VAR_2->sensor) {
 case 129:
  if (VAR_1 != 0)
   VAR_4[3] = 0xa8;
  VAR_3 = 0x41;
  break;
 case 128:
  VAR_3 = 0xca;
  break;
 default:
  VAR_3 = 0x40;
  break;
 }
 switch (VAR_1) {
 case 0:
  VAR_4[3] = 0xf0;
  break;
 case 2:
  VAR_3 &= ~0x40;
  break;
 }
 VAR_4[1] = VAR_3;

 FUNC_0(VAR_0, VAR_4, sizeof VAR_4);
}
