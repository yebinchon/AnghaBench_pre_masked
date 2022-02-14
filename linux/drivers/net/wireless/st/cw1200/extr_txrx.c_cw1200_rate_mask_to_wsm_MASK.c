
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cw1200_common {TYPE_1__* rates; } ;
struct TYPE_2__ {int hw_value; } ;


 int FUNC_0 (int) ;

u32 FUNC_1(struct cw1200_common *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 32; ++VAR_3) {
  if (VAR_1 & FUNC_0(VAR_3))
   VAR_2 |= FUNC_0(VAR_0->rates[VAR_3].hw_value);
 }
 return VAR_2;
}
