
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;

int FUNC_3(struct rtsx_chip *VAR_9, int VAR_10)
{
 u32 VAR_11, VAR_12;

 if (VAR_10 == VAR_3) {
  VAR_11 = VAR_4;
 } else if (VAR_10 == VAR_0) {
  VAR_11 = VAR_1;
 } else if (VAR_10 == VAR_7) {
  VAR_11 = VAR_8;
 } else {
  FUNC_0(FUNC_1(VAR_9), "Wrong card type: 0x%x\n", VAR_10);
  return VAR_5;
 }

 VAR_12 = FUNC_2(VAR_9, VAR_2);
 if (!(VAR_12 & VAR_11))
  return VAR_5;

 return VAR_6;
}
