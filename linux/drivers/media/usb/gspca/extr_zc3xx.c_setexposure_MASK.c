
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;




 int FUNC_0 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 switch (VAR_2->sensor) {
 case 129:
  FUNC_0(VAR_0, 0x25, VAR_1 >> 9, 0x00);
  FUNC_0(VAR_0, 0x26, VAR_1 >> 1, 0x00);
  FUNC_0(VAR_0, 0x27, VAR_1 << 7, 0x00);
  break;
 case 128:
  FUNC_0(VAR_0, 0x10, VAR_1, 0x00);
  break;
 }
}
