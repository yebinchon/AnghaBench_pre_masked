
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ bytes; scalar_t__ pkts; } ;
struct ice_ring {TYPE_1__ stats; int syncp; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct ice_ring *VAR_0, u64 *VAR_1, u64 *VAR_2)
{
 unsigned int VAR_3;
 *VAR_1 = 0;
 *VAR_2 = 0;

 if (!VAR_0)
  return;
 do {
  VAR_3 = FUNC_0(&VAR_0->syncp);
  *VAR_1 = VAR_0->stats.pkts;
  *VAR_2 = VAR_0->stats.bytes;
 } while (FUNC_1(&VAR_0->syncp, VAR_3));
}
