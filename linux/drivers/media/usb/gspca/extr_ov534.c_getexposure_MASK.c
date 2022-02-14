
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static s32 FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 if (VAR_2->sensor == VAR_0) {

  return FUNC_0(VAR_1, 0x10);
 } else {
  u8 VAR_3 = FUNC_0(VAR_1, 0x08);
  u8 VAR_4 = FUNC_0(VAR_1, 0x10);
  return (VAR_3 << 8 | VAR_4) >> 1;
 }
}
