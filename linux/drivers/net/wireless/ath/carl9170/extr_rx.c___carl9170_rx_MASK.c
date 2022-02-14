
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ar9170 {int dummy; } ;


 int FUNC_0 (struct ar9170*,int*,unsigned int) ;
 int FUNC_1 (struct ar9170*,int*,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ar9170 *VAR_0, u8 *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = 0;


 while (VAR_2 > 2 && VAR_3 < 12 && VAR_1[0] == 0xff && VAR_1[1] == 0xff) {
  VAR_3 += 2;
  VAR_2 -= 2;
  VAR_1 += 2;
 }

 if (FUNC_2(VAR_2 < 4))
  return;


 if (VAR_3 == 12)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
