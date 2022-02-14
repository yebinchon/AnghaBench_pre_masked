
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;




 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;
 u8 VAR_3;

 switch (VAR_2->sensor) {
 case 129:
  VAR_3 = 0;
  FUNC_0(VAR_0, 0x03, &VAR_3, 1);
  if (VAR_1 < 0)
   VAR_3 = 0x6a;
  else
   VAR_3 = 0xb5 + VAR_1 * 3;
  FUNC_0(VAR_0, 0x61, &VAR_3, 1);
  break;
 case 128:
  if (VAR_1 < 0)
   VAR_3 = 0x7e;
  else
   VAR_3 = 0x60 + VAR_1 * 0x0f;
  FUNC_0(VAR_0, 0x59, &VAR_3, 1);
  break;
 }
}
