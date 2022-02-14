
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint ;



uint
FUNC_0(
 uint *VAR_0,
 unsigned long VAR_1)
{
 uint VAR_2;
 unsigned long VAR_3;

 VAR_3 = (VAR_1 + VAR_0[0] - 1) / VAR_0[0];
 for (VAR_2 = 1; VAR_3 > 1; VAR_2++)
  VAR_3 = (VAR_3 + VAR_0[1] - 1) / VAR_0[1];
 return VAR_2;
}
