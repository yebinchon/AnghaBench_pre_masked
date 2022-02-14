
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int cmatrix ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_6,
  s32 VAR_7, s32 VAR_8, s32 VAR_9, s32 VAR_10)
{
 s32 VAR_11, VAR_12 = 180 + VAR_10;
 u8 VAR_13[21];

 FUNC_0(VAR_13, 0, sizeof(VAR_13));
 VAR_13[2] = (VAR_8 * 0x25 / 0x100) + 0x26;
 VAR_13[0] = 0x13 + (VAR_13[2] - 0x26) * 0x13 / 0x25;
 VAR_13[4] = 0x07 + (VAR_13[2] - 0x26) * 0x07 / 0x25;
 VAR_13[18] = VAR_7 - 0x80;

 VAR_11 = (VAR_4[VAR_12] * VAR_9) >> 8;
 VAR_13[6] = VAR_11;
 VAR_13[7] = (VAR_11 >> 8) & 0x0f;

 VAR_11 = (VAR_5[VAR_12] * VAR_9) >> 8;
 VAR_13[8] = VAR_11;
 VAR_13[9] = (VAR_11 >> 8) & 0x0f;

 VAR_11 = (VAR_2[VAR_12] * VAR_9) >> 8;
 VAR_13[10] = VAR_11;
 VAR_13[11] = (VAR_11 >> 8) & 0x0f;

 VAR_11 = (VAR_3[VAR_12] * VAR_9) >> 8;
 VAR_13[12] = VAR_11;
 VAR_13[13] = (VAR_11 >> 8) & 0x0f;

 VAR_11 = (VAR_0[VAR_12] * VAR_9) >> 8;
 VAR_13[14] = VAR_11;
 VAR_13[15] = (VAR_11 >> 8) & 0x0f;

 VAR_11 = (VAR_1[VAR_12] * VAR_9) >> 8;
 VAR_13[16] = VAR_11;
 VAR_13[17] = (VAR_11 >> 8) & 0x0f;

 FUNC_1(VAR_6, 0x10e1, VAR_13, 21);
}
