
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct bcm2835_power {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct bcm2835_power *VAR_3, u32 VAR_4)
{
 u64 VAR_5;

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_3();


 FUNC_1(VAR_4, FUNC_0(VAR_4) & ~VAR_1);
 while (FUNC_0(VAR_4) & VAR_0) {
  FUNC_2();
  if (FUNC_3() - VAR_5 >= 1000)
   return -VAR_2;
 }

 return 0;
}
