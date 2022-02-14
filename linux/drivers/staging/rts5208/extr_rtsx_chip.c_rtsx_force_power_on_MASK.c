
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct rtsx_chip *VAR_9, u8 VAR_10)
{
 int VAR_11;
 u8 VAR_12 = 0;

 if (VAR_10 & VAR_5)
  VAR_12 |= VAR_6;
 if (VAR_12) {
  VAR_11 = FUNC_2(VAR_9, VAR_0, VAR_12, 0);
  if (VAR_11 != VAR_8)
   return VAR_7;

  if (FUNC_1(VAR_9, 0x5288))
   FUNC_3(200);
 }

 return VAR_8;
}
