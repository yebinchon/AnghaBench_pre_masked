
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 u8 VAR_2[4] = { 0x8f, 0x24, 0xc3, 0x00 };

 if (VAR_1 < 7) {
  VAR_2[1] = 0x26;
  VAR_2[3] = 0x70 - VAR_1 * 0x10;
 } else {
  VAR_2[3] = 0x00 + ((VAR_1 - 7) * 0x10);
 }

 FUNC_0(VAR_0, VAR_2, sizeof VAR_2);
}
