
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef size_t s32 ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, s32 VAR_1)
{
 u8 VAR_2, VAR_3, VAR_4;
 static const u8 VAR_5[5][2] = {
  {0x14, 0x38},
  {0x1e, 0x54},
  {0x28, 0x70},
  {0x32, 0x8c},
  {0x48, 0x90}
 };

 VAR_2 = VAR_5[VAR_1][0];
 VAR_3 = VAR_5[VAR_1][1];
 VAR_4 = VAR_2 + VAR_3;
 FUNC_1(VAR_0, 0x4f, VAR_4);
 FUNC_1(VAR_0, 0x50, VAR_4);
 FUNC_1(VAR_0, 0x51, 0x00);
 FUNC_1(VAR_0, 0x52, VAR_2);
 FUNC_1(VAR_0, 0x53, VAR_3);
 FUNC_1(VAR_0, 0x54, VAR_4);
 FUNC_1(VAR_0, 0x58, 0x1a);

 VAR_2 = FUNC_0(VAR_0, 0x41);
 FUNC_1(VAR_0, 0xff, 0x00);
 FUNC_1(VAR_0, 0x41, VAR_2);
}
