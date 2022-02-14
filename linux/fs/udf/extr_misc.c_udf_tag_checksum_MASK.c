
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tag {int dummy; } ;



u8 FUNC_0(const struct tag *VAR_0)
{
 u8 *VAR_1 = (u8 *)VAR_0;
 u8 VAR_2 = 0;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < sizeof(struct tag); ++VAR_3)
  if (VAR_3 != 4)
   VAR_2 += VAR_1[VAR_3];
 return VAR_2;
}
