
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, s32 VAR_1)
{
 if (VAR_1 < 0) {
  VAR_1 = FUNC_0(VAR_0, 0x42);
  FUNC_1(VAR_0, 0xff, 0x00);
  FUNC_1(VAR_0, 0x42, VAR_1 | 0x40);

  return;
 }
 if (VAR_1 != 0)
  VAR_1 = 1 << (VAR_1 - 1);
 FUNC_1(VAR_0, 0x3f,
   VAR_1);
 VAR_1 = FUNC_0(VAR_0, 0x42);
 FUNC_1(VAR_0, 0xff, 0x00);
 FUNC_1(VAR_0, 0x42, VAR_1 & 0xbf);
}
