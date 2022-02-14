
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
struct nicvf {TYPE_3__* qs; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_8__ {size_t index; } ;
struct TYPE_7__ {int rq_cnt; int sq_cnt; TYPE_2__* sq; TYPE_1__* rq; } ;
struct TYPE_6__ {int stats; } ;
struct TYPE_5__ {int stats; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (struct nicvf*,int) ;
 int FUNC_1 (struct nicvf*,int) ;

__attribute__((used)) static void FUNC_2(struct nicvf *VAR_2,
     struct ethtool_stats *VAR_3, u64 **VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_2)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_2->qs->rq_cnt; VAR_6++) {
  FUNC_0(VAR_2, VAR_6);
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   *((*VAR_4)++) = ((u64 *)&VAR_2->qs->rq[VAR_6].stats)
     [VAR_1[VAR_5].index];
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->qs->sq_cnt; VAR_6++) {
  FUNC_1(VAR_2, VAR_6);
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   *((*VAR_4)++) = ((u64 *)&VAR_2->qs->sq[VAR_6].stats)
     [VAR_1[VAR_5].index];
 }
}
