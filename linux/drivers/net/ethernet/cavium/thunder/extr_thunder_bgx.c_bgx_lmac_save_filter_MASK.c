
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u64 ;
struct lmac {size_t dmacs_cfg; scalar_t__ dmacs_count; TYPE_1__* dmacs; } ;
struct TYPE_2__ {scalar_t__ dmac; int vf_map; } ;


 int FUNC_0 (size_t) ;

__attribute__((used)) static int FUNC_1(struct lmac *VAR_0, u64 VAR_1, u8 VAR_2)
{
 u8 VAR_3 = 0;

 if (!VAR_0)
  return -1;
 for (VAR_3 = 0; VAR_3 < VAR_0->dmacs_cfg; VAR_3++) {
  if (VAR_0->dmacs[VAR_3].dmac == VAR_1) {
   VAR_0->dmacs[VAR_3].vf_map |= FUNC_0(VAR_2);
   return -1;
  }
 }

 if (!(VAR_0->dmacs_cfg < VAR_0->dmacs_count))
  return -1;


 VAR_0->dmacs[VAR_0->dmacs_cfg].dmac = VAR_1;
 VAR_0->dmacs[VAR_0->dmacs_cfg].vf_map = FUNC_0(VAR_2);
 VAR_0->dmacs_cfg++;
 return 0;
}
