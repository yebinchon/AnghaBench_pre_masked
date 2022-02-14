
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ speed; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_2)
{
 int VAR_3;
 u32 VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].speed == VAR_2)
   VAR_4 |= 1 << VAR_3;
 }
 return VAR_4;
}
