
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {scalar_t__* advertised; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__*,unsigned long const*,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static u32 FUNC_2(const unsigned long *VAR_3)
{
 u32 VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (*VAR_2[VAR_4].advertised == 0)
   continue;
  if (FUNC_1(VAR_2[VAR_4].advertised,
          VAR_3,
          VAR_1))
   VAR_5 |= FUNC_0(VAR_4);
 }

 return VAR_5;
}
