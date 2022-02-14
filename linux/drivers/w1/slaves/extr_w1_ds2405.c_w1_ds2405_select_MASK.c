
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct w1_slave {int reg_num; struct w1_master* master; } ;
struct w1_master {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct w1_master*) ;
 int FUNC_3 (struct w1_master*,int) ;
 int FUNC_4 (struct w1_master*,int ) ;

__attribute__((used)) static int FUNC_5(struct w1_slave *VAR_2, bool VAR_3)
{
 struct w1_master *VAR_4 = VAR_2->master;

 u64 VAR_5 = FUNC_1(*(u64 *)&VAR_2->reg_num);
 unsigned int VAR_6;

 if (FUNC_2(VAR_4) != 0)
  return 0;





 FUNC_4(VAR_4, VAR_3 ? VAR_0 : VAR_1);

 for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
  int VAR_7 = !!(VAR_5 & FUNC_0(VAR_6));
  u8 VAR_8;

  VAR_8 = FUNC_3(VAR_4, VAR_7);

  if ((VAR_8 & (FUNC_0(0) | FUNC_0(1))) ==
      (FUNC_0(0) | FUNC_0(1)))
   return 0;

  if (!!(VAR_8 & FUNC_0(2)) != VAR_7)

   return 0;
 }

 return 1;
}
