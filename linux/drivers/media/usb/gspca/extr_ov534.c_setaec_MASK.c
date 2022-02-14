
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
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 u8 VAR_4;

 VAR_4 = VAR_3->sensor == VAR_0 ?
   0x05 :
   0x01;
 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_1, 0x13,
    FUNC_0(VAR_1, 0x13) | VAR_4);
  break;
 case 128:
  FUNC_1(VAR_1, 0x13,
    FUNC_0(VAR_1, 0x13) & ~VAR_4);
  break;
 }
}
