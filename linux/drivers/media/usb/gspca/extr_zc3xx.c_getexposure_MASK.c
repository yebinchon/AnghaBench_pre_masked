
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;




 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static s32 FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 switch (VAR_1->sensor) {
 case 129:
  return (FUNC_0(VAR_0, 0x25) << 9)
   | (FUNC_0(VAR_0, 0x26) << 1)
   | (FUNC_0(VAR_0, 0x27) >> 7);
 case 128:
  return FUNC_0(VAR_0, 0x10);
 default:
  return -1;
 }
}
