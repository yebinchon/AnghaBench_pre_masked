
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (int,int) ;

u32 FUNC_2(u16 VAR_1, u16 VAR_2, u8 VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_1,
  VAR_3);

 if (VAR_4 > VAR_0)
  return 0;

 return (VAR_1 * VAR_2 * VAR_3) + FUNC_0(
  VAR_4, VAR_3);
}
