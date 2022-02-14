
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef size_t s32 ;


 int FUNC_0 (size_t*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct gspca_dev*,int,size_t) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 if (VAR_3->sensor == VAR_0) {
  int VAR_4;
  static u8 VAR_5[][6] = {
   {0x42, 0x42, 0x00, 0x11, 0x30, 0x41},
   {0x52, 0x52, 0x00, 0x16, 0x3c, 0x52},
   {0x66, 0x66, 0x00, 0x1b, 0x4b, 0x66},
   {0x80, 0x80, 0x00, 0x22, 0x5e, 0x80},
   {0x9a, 0x9a, 0x00, 0x29, 0x71, 0x9a},
   {0xb8, 0xb8, 0x00, 0x31, 0x87, 0xb8},
   {0xdd, 0xdd, 0x00, 0x3b, 0xa2, 0xdd},
  };

  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_5[0]); VAR_4++)
   FUNC_1(VAR_1, 0x4f + VAR_4, VAR_5[VAR_2][VAR_4]);
 } else {
  FUNC_1(VAR_1, 0xa7, VAR_2);
  FUNC_1(VAR_1, 0xa8, VAR_2);
 }
}
