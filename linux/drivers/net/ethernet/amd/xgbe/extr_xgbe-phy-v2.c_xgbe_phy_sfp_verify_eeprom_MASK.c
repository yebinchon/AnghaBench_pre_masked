
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static bool FUNC_0(u8 VAR_0, u8 *VAR_1, unsigned int VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = 0; VAR_2; VAR_1++, VAR_2--)
  VAR_3 += *VAR_1;

 return (VAR_3 == VAR_0) ? 1 : 0;
}
