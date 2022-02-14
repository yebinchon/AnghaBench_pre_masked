
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtsx_chip*,int ,int,int) ;

int FUNC_1(struct rtsx_chip *VAR_8, u8 VAR_9)
{
 int VAR_10;
 u8 VAR_11 = 0;

 if (VAR_9 & VAR_6)
  VAR_11 |= VAR_7;
 if (VAR_9 & VAR_3)
  VAR_11 |= VAR_4;
 if (VAR_9 & VAR_1)
  VAR_11 |= VAR_2;

 VAR_10 = FUNC_0(VAR_8, VAR_0, VAR_11, VAR_11);
 if (VAR_10)
  return VAR_10;

 return VAR_5;
}
