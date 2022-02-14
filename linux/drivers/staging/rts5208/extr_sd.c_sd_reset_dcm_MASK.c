
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct rtsx_chip *VAR_6, u8 VAR_7)
{
 int VAR_8;

 if (VAR_7 == VAR_5) {
  VAR_8 = FUNC_0(VAR_6, VAR_0, 0xFF,
          VAR_1 | VAR_2);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_0(VAR_6, VAR_0, 0xFF, VAR_2);
  if (VAR_8)
   return VAR_8;
 } else {
  VAR_8 = FUNC_0(VAR_6, VAR_0, 0xFF,
          VAR_1 | VAR_3);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_0(VAR_6, VAR_0, 0xFF, VAR_3);
  if (VAR_8)
   return VAR_8;
 }

 return VAR_4;
}
