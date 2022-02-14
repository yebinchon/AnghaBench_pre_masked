
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rtsx_chip*,int ,scalar_t__,scalar_t__) ;

int FUNC_2(struct rtsx_chip *VAR_8, u8 VAR_9)
{
 int VAR_10;
 u8 VAR_11, VAR_12;

 if (FUNC_0(VAR_8, VAR_4) && (VAR_9 == VAR_1)) {
  VAR_11 = VAR_2;
  VAR_12 = VAR_3;
 } else {
  VAR_11 = VAR_5;
  VAR_12 = VAR_6;
 }

 VAR_10 = FUNC_1(VAR_8, VAR_0, VAR_11, VAR_12);
 if (VAR_10)
  return VAR_10;

 return VAR_7;
}
