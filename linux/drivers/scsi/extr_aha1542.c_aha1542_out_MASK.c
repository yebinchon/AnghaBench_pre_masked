
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_3, u8 *VAR_4, int VAR_5)
{
 while (VAR_5--) {
  if (!FUNC_4(FUNC_2(VAR_3), VAR_0, 0, VAR_0, 0))
   return 1;
  FUNC_3(*VAR_4++, FUNC_0(VAR_3));
 }
 if (!FUNC_4(FUNC_1(VAR_3), VAR_2, VAR_1, 0, 0))
  return 1;

 return 0;
}
