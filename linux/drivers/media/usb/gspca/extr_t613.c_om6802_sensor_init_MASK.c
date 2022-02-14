
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int) ;
 int FUNC_4 (struct gspca_dev*,int*,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_1)
{
 int VAR_2;
 const u8 *VAR_3;
 u8 VAR_4;
 u8 VAR_5[6] = {0x62, 0, 0x64, 0, 0x60, 0x05};
 static const u8 VAR_6[] = {
  0xdf, 0x6d,
  0xdd, 0x18,
  0x5a, 0xe0,
  0x5c, 0x07,
  0x5d, 0xb0,
  0x5e, 0x1e,
  0x60, 0x71,
  0xef, 0x00,
  0xe9, 0x00,
  0xea, 0x00,
  0x90, 0x24,
  0x91, 0xb2,
  0x82, 0x32,
  0xfd, 0x41,
  0x00
 };

 FUNC_4(VAR_1, VAR_0, sizeof VAR_0);
 FUNC_0(100);
 VAR_2 = 4;
 while (--VAR_2 > 0) {
  VAR_4 = FUNC_2(VAR_1, 0x0060);
  if (!(VAR_4 & 0x01))
   break;
  FUNC_0(100);
 }
 VAR_4 = FUNC_2(VAR_1, 0x0063);
 if (VAR_4 != 0x17) {
  FUNC_1("Bad sensor reset %02x\n", VAR_4);

 }

 VAR_3 = VAR_6;
 while (*VAR_3 != 0) {
  VAR_5[1] = *VAR_3++;
  VAR_5[3] = *VAR_3++;
  if (*VAR_3 == 0)
   FUNC_3(VAR_1, 0x3c80);
  FUNC_4(VAR_1, VAR_5, sizeof VAR_5);
  VAR_2 = 4;
  while (--VAR_2 >= 0) {
   FUNC_0(15);
   VAR_4 = FUNC_2(VAR_1, 0x60);
   if (!(VAR_4 & 0x01))
    break;
  }
 }
 FUNC_0(15);
 FUNC_3(VAR_1, 0x3c80);
}
