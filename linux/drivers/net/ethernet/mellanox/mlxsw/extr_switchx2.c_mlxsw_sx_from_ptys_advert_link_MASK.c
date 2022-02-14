
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mask; int advertised; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2 & VAR_1[VAR_4].mask)
   VAR_3 |= VAR_1[VAR_4].advertised;
 }
 return VAR_3;
}
