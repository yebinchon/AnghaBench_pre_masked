
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 () ;
 int FUNC_1 (int volatile,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(u16 VAR_0, u32 *VAR_1,
           volatile u32 *VAR_2)
{
 if (VAR_1) {
  u16 VAR_3;





  FUNC_2();

  VAR_3 = *VAR_1;
  *VAR_1 = VAR_0;







  FUNC_0();

  if (!FUNC_1(*VAR_2, VAR_0, VAR_3))
   return 0;
 }

 return 1;
}
