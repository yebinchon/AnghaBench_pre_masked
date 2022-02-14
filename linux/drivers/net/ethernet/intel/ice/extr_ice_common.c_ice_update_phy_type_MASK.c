
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(u64 *VAR_2, u64 *VAR_3,
      u16 VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;
 int VAR_7;
 u16 VAR_8;


 for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++) {
  VAR_6 = FUNC_0(VAR_7);
  VAR_8 = FUNC_1(VAR_6, 0);

  if (VAR_4 & VAR_8)
   *VAR_2 |= FUNC_0(VAR_7);
 }


 for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++) {
  VAR_5 = FUNC_0(VAR_7);
  VAR_8 = FUNC_1(0, VAR_5);

  if (VAR_4 & VAR_8)
   *VAR_3 |= FUNC_0(VAR_7);
 }
}
