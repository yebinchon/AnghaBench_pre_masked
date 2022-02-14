
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef size_t u8 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char,char) ;

__attribute__((used)) static int FUNC_1(u8 * VAR_2)
{
 signed char VAR_3, VAR_4;




 if (*((uint *) VAR_2) == 0)
  return (VAR_0);




 if (*((u16 *) VAR_2) == 0 || *((u16 *) VAR_2 + 1) == 0)
  return (VAR_0 - 1);




 VAR_3 = FUNC_0(VAR_1[VAR_2[2]], VAR_1[VAR_2[3]]);
 VAR_4 = FUNC_0(VAR_1[VAR_2[0]], VAR_1[VAR_2[1]]);
 return (FUNC_0(VAR_3, VAR_4));
}
