
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;

unsigned FUNC_0(int VAR_2)
{
 int VAR_3;
 unsigned VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[(VAR_2 * VAR_1) + VAR_3])
   VAR_4 |= (1 << VAR_3);
 }

 return VAR_4;
}
