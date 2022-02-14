
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_chip*,int,int*) ;
 int FUNC_1 (struct rtsx_chip*,int,int) ;

int FUNC_2(struct rtsx_chip *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_6);
 if (VAR_5 != VAR_1)
  return VAR_0;

 if ((VAR_6 & (1 << VAR_4)) == 0) {
  VAR_6 |= (1 << VAR_4);
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_6);
  if (VAR_5 != VAR_1)
   return VAR_0;
 }

 return VAR_1;
}
