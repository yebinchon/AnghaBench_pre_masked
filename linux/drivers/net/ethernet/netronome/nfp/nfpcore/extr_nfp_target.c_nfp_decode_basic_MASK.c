
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(u64 VAR_3, int *VAR_4, int VAR_5,
       int VAR_6, bool VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;


 if (VAR_5 == VAR_2 || VAR_5 == VAR_1)
  return -VAR_0;

 switch (VAR_6) {
 case 0:
  VAR_10 = VAR_7 ? 34 : 26;
  *VAR_4 = (VAR_3 >> VAR_10) & 0x3F;
  return 0;
 case 1:
  VAR_11 = VAR_7 ? 39 : 31;
  if (VAR_3 & FUNC_0(VAR_11))
   *VAR_4 = VAR_8;
  else
   *VAR_4 = VAR_9;

  return 0;
 case 2:
  VAR_9 &= ~1;
  VAR_8 &= ~1;

  VAR_11 = VAR_7 ? 39 : 31;
  VAR_10 = VAR_11 - 1;

  if (VAR_3 & FUNC_0(VAR_11))
   *VAR_4 = VAR_8 | (int)((VAR_3 >> VAR_10) & 1);
  else
   *VAR_4 = VAR_9 | (int)((VAR_3 >> VAR_10) & 1);

  return 0;
 case 3:
  VAR_9 &= ~3;
  VAR_8 &= ~3;

  VAR_11 = VAR_7 ? 39 : 31;
  VAR_10 = VAR_11 - 2;

  if (VAR_3 & FUNC_0(VAR_11))
   *VAR_4 = VAR_8 | (int)((VAR_3 >> VAR_10) & 3);
  else
   *VAR_4 = VAR_9 | (int)((VAR_3 >> VAR_10) & 3);

  return 0;
 default:
  return -VAR_0;
 }
}
