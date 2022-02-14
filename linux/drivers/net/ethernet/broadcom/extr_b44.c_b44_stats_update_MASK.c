
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int syncp; int tx_good_octets; } ;
struct b44 {TYPE_1__ hw_stats; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (struct b44*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct b44 *VAR_4)
{
 unsigned long VAR_5;
 u64 *VAR_6;

 VAR_6 = &VAR_4->hw_stats.tx_good_octets;
 FUNC_1(&VAR_4->hw_stats.syncp);

 for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5 += 4UL) {
  *VAR_6++ += FUNC_0(VAR_4, VAR_5);
 }


 VAR_5 += 8*4UL;

 for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5 += 4UL) {
  *VAR_6++ += FUNC_0(VAR_4, VAR_5);
 }

 FUNC_2(&VAR_4->hw_stats.syncp);
}
