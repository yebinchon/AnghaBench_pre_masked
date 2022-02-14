
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static u8 FUNC_0(u8 *VAR_0, size_t VAR_1)
{
 u8 VAR_2 = 0;
 size_t VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 += VAR_0[VAR_3];

 return 256 - VAR_2;
}
