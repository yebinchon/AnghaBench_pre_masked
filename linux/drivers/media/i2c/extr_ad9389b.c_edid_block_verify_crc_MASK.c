
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static bool FUNC_0(u8 *VAR_0)
{
 u8 VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 128; VAR_2++)
  VAR_1 += VAR_0[VAR_2];
 return VAR_1 == 0;
}
