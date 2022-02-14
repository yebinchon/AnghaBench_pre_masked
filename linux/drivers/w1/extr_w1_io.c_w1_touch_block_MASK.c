
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w1_master {int dummy; } ;


 int FUNC_0 (struct w1_master*) ;
 int FUNC_1 (struct w1_master*,int) ;

void FUNC_2(struct w1_master *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 u8 VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
   if (VAR_4 == 7)
    FUNC_0(VAR_0);
   VAR_5 |= FUNC_1(VAR_0, (VAR_1[VAR_3] >> VAR_4) & 0x1) << VAR_4;
  }

  VAR_1[VAR_3] = VAR_5;
 }
}
