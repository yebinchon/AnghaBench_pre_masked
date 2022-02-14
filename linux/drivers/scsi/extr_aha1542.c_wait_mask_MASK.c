
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline bool FUNC_2(u16 VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3, int VAR_4)
{
 bool VAR_5 = 1;

 if (VAR_4 == 0) {
  VAR_4 = 3000000;
  VAR_5 = 0;
 }

 while (1) {
  u8 VAR_6 = FUNC_0(VAR_0) & VAR_1;
  if ((VAR_6 & VAR_2) == VAR_2 && ((VAR_6 & VAR_3) == 0))
   break;
  if (VAR_5)
   FUNC_1(1);
  if (--VAR_4 == 0)
   return 0;
 }

 return 1;
}
