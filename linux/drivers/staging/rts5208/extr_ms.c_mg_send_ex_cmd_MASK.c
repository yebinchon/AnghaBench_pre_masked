
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
 scalar_t__ FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*,int ,int,int ,scalar_t__*,int) ;
 int FUNC_2 (struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_5, u8 VAR_6, u8 VAR_7)
{
 int VAR_8, VAR_9;
 u8 VAR_10[8];

 VAR_10[0] = VAR_6;
 VAR_10[1] = 0;
 VAR_10[2] = 0;
 VAR_10[3] = 0;
 VAR_10[4] = 0;
 VAR_10[5] = 0;
 VAR_10[6] = VAR_7;
 VAR_10[7] = 0;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_1(VAR_5, VAR_1, 7, VAR_4,
     VAR_10, 8);
  if (VAR_8 == VAR_3)
   break;
 }
 if (VAR_9 == VAR_0)
  return VAR_2;

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_5);
  return VAR_2;
 }

 return VAR_3;
}
