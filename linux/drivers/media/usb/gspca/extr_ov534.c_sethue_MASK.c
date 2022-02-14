
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 if (VAR_3->sensor == VAR_0) {

 } else {
  s16 VAR_4;
  s16 VAR_5;
  VAR_4 = FUNC_1(VAR_2) * 0x80 / 0x7fff;
  VAR_5 = FUNC_0(VAR_2) * 0x80 / 0x7fff;

  if (VAR_4 < 0) {
   FUNC_3(VAR_1, 0xab,
    FUNC_2(VAR_1, 0xab) | 0x2);
   VAR_4 = -VAR_4;
  } else {
   FUNC_3(VAR_1, 0xab,
    FUNC_2(VAR_1, 0xab) & ~0x2);

  }
  FUNC_3(VAR_1, 0xa9, (u8)VAR_5);
  FUNC_3(VAR_1, 0xaa, (u8)VAR_4);
 }
}
