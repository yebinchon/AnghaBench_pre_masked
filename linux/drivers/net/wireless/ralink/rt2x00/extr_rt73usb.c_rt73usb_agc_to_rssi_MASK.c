
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int lna_gain; scalar_t__ curr_band; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*) ;

__attribute__((used)) static int FUNC_2(struct rt2x00_dev *VAR_3, int VAR_4)
{
 u8 VAR_5 = VAR_3->lna_gain;
 u8 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 switch (VAR_6) {
 case 3:
  VAR_5 += 90;
  break;
 case 2:
  VAR_5 += 74;
  break;
 case 1:
  VAR_5 += 64;
  break;
 default:
  return 0;
 }

 if (VAR_3->curr_band == VAR_0) {
  if (FUNC_1(VAR_3)) {
   if (VAR_6 == 3 || VAR_6 == 2)
    VAR_5 += 10;
  } else {
   if (VAR_6 == 3)
    VAR_5 += 6;
   else if (VAR_6 == 2)
    VAR_5 += 8;
  }
 }

 return FUNC_0(VAR_4, VAR_1) * 2 - VAR_5;
}
