
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ cam_type; scalar_t__ do_lcd_stop; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 u8 VAR_4 = 7;
 u8 VAR_5 = 8;
 static const u8 VAR_6[] =

  { 0, 4, 8, 12, 1, 2, 3, 5, 6, 9, 7, 10, 13, 11, 14, 15};
 if (VAR_3->cam_type == VAR_0) {
  VAR_4 += 4;
  VAR_5 += 4;
 }


 if (VAR_2 > 0) {
  FUNC_0(VAR_1, VAR_4, 0x00);
 } else {
  FUNC_0(VAR_1, VAR_4, 0x01);
  VAR_2 = 257 - VAR_2;
 }

 if (VAR_3->do_lcd_stop)
  VAR_2 = VAR_6[VAR_2];

 FUNC_0(VAR_1, VAR_5, VAR_2);
}
