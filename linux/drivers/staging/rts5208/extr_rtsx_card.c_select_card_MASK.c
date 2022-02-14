
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int cur_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtsx_chip*,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int,int ) ;

int FUNC_2(struct rtsx_chip *VAR_11, int VAR_12)
{
 int VAR_13;

 if (VAR_11->cur_card != VAR_12) {
  u8 VAR_14;

  if (VAR_12 == VAR_3)
   VAR_14 = VAR_4;
  else if (VAR_12 == VAR_1)
   VAR_14 = VAR_2;
  else if (VAR_12 == VAR_9)
   VAR_14 = VAR_10;
  else if (VAR_12 == VAR_5)
   VAR_14 = VAR_6;
  else
   return VAR_7;

  VAR_13 = FUNC_1(VAR_11, VAR_0, 0x07, VAR_14);
  if (VAR_13)
   return VAR_13;
  VAR_11->cur_card = VAR_12;

  VAR_13 = FUNC_0(VAR_11, VAR_12);
  if (VAR_13 != VAR_8)
   return VAR_7;
 }

 return VAR_8;
}
