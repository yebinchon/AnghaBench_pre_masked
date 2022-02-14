
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int modes ;
struct TYPE_2__ {scalar_t__* advertised; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long*,scalar_t__*,unsigned long const*,int ) ;
 int FUNC_2 (unsigned long*,int ,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static u32 FUNC_3(const unsigned long *VAR_3)
{
 u32 VAR_4, VAR_5 = 0;
 unsigned long VAR_6[2];

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (*VAR_2[VAR_4].advertised == 0)
   continue;
  FUNC_2(VAR_6, 0, sizeof(VAR_6));
  FUNC_1(VAR_6, VAR_2[VAR_4].advertised,
      VAR_3, VAR_1);

  if (VAR_6[0] == VAR_2[VAR_4].advertised[0] &&
      VAR_6[1] == VAR_2[VAR_4].advertised[1])
   VAR_5 |= FUNC_0(VAR_4);
 }
 return VAR_5;
}
