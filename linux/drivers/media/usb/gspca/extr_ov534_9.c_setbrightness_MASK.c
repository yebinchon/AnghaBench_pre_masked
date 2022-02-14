
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s8 ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 u8 VAR_4;
 s8 VAR_5;

 if (VAR_3->sensor == VAR_0) {
  VAR_5 = VAR_2;
  VAR_4 = 0x76;
  VAR_4 += VAR_5;
  FUNC_0(VAR_1, 0x24, VAR_4);
  VAR_4 = 0x6a;
  VAR_4 += VAR_5;
  FUNC_0(VAR_1, 0x25, VAR_4);
  if (VAR_5 < -40)
   VAR_4 = 0x71;
  else if (VAR_5 < 20)
   VAR_4 = 0x94;
  else
   VAR_4 = 0xe6;
  FUNC_0(VAR_1, 0x26, VAR_4);
 } else {
  VAR_4 = VAR_2;
  if (VAR_4 < 8)
   VAR_4 = 15 - VAR_4;
  else
   VAR_4 = VAR_4 - 8;
  FUNC_0(VAR_1, 0x55,
    0x0f | (VAR_4 << 4));
 }
}
