
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1, s32 VAR_2, s32 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_1;
 u8 VAR_5;

 if (VAR_4->sensor == VAR_0) {
  VAR_5 = FUNC_0(VAR_1, 0x1e);
  VAR_5 &= ~0x30;
  if (VAR_2)
   VAR_5 |= 0x20;
  if (VAR_3)
   VAR_5 |= 0x10;
  FUNC_1(VAR_1, 0x1e, VAR_5);
 } else {
  VAR_5 = FUNC_0(VAR_1, 0x0c);
  VAR_5 &= ~0xc0;
  if (VAR_2 == 0)
   VAR_5 |= 0x40;
  if (VAR_3 == 0)
   VAR_5 |= 0x80;
  FUNC_1(VAR_1, 0x0c, VAR_5);
 }
}
