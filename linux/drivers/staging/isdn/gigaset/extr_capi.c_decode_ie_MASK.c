
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(u8 *VAR_0, char *VAR_1)
{
 int VAR_2 = *VAR_0;
 while (VAR_2-- > 0) {

  *VAR_1++ = FUNC_2(FUNC_0(*++VAR_0));
  *VAR_1++ = FUNC_2(FUNC_1(*VAR_0));
 }
}
