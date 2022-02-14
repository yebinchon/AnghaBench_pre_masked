
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct tnum {int dummy; } ;


 struct tnum FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 struct tnum VAR_0 ;

struct tnum FUNC_2(u64 VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_1 ^ VAR_2, VAR_4;
 u8 VAR_5 = FUNC_1(VAR_3);


 if (VAR_5 > 63)
  return VAR_0;




 VAR_4 = (1ULL << VAR_5) - 1;
 return FUNC_0(VAR_1 & ~VAR_4, VAR_4);
}
