
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(u8 *VAR_4, u32 VAR_5, u32 *VAR_6)
{
 u16 *VAR_7 = (u16 *)VAR_4 - 1;
 u32 VAR_8 = 0;
 u32 VAR_9 = VAR_5;

 if (VAR_9 == 0)
  VAR_9 = VAR_3;

 if (VAR_6)
  *VAR_6 = 0;

 while (1) {
  u16 VAR_10;
  u16 VAR_11;

  VAR_10 = FUNC_0(*VAR_7--);
  VAR_11 = FUNC_0(*VAR_7--);

  if (VAR_10 != VAR_0
      && VAR_10 != VAR_2
      && VAR_10 != VAR_1)
   break;

  if (VAR_10 == VAR_1
      && VAR_6)
   *VAR_6 = FUNC_1(*(u32 *)(VAR_7 - 1));

  VAR_8 += VAR_11 + (2 * sizeof(u16));
  VAR_7 -= VAR_11 / sizeof(u16);

  if (VAR_8 > VAR_9 - (2 * sizeof(u16)))
   break;
 }


 if (VAR_5 && VAR_8 != VAR_5)
  return 0;

 return VAR_8;
}
