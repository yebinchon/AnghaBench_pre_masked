
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, s32 VAR_1)
{
 if (VAR_1) {
  FUNC_1(VAR_0, 0x13,
    FUNC_0(VAR_0, 0x13) | 0x04);
  FUNC_1(VAR_0, 0x64,
    FUNC_0(VAR_0, 0x64) | 0x03);
 } else {
  FUNC_1(VAR_0, 0x13,
    FUNC_0(VAR_0, 0x13) & ~0x04);
  FUNC_1(VAR_0, 0x64,
    FUNC_0(VAR_0, 0x64) & ~0x03);
 }
}
