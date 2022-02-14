
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3 = 100, VAR_4 = VAR_2;

 if (!FUNC_1(VAR_0))
  return 0;
 while (--VAR_3 > 0) {
  if ((FUNC_0() & VAR_1) == VAR_4)
   return 1;
  FUNC_2(50);
 }
 VAR_2 = FUNC_0() & VAR_1;
 return 1;
}
