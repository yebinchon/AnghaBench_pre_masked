
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int* VAR_0 ;

__attribute__((used)) static u8 FUNC_0(u8 VAR_1, u8 VAR_2)
{
 if (VAR_2 == 0x80)
  return 1;

 if (VAR_2 > 78)
  return 32;


 return 65 * VAR_0[VAR_2] / 100;
}
