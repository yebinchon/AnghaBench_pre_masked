
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ tx_done_old; } ;
struct ixgbevf_ring {TYPE_1__ tx_stats; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ixgbevf_ring*) ;
 scalar_t__ FUNC_2 (struct ixgbevf_ring*) ;
 scalar_t__ FUNC_3 (struct ixgbevf_ring*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_5(struct ixgbevf_ring *VAR_1)
{
 u32 VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3 = VAR_1->tx_stats.tx_done_old;
 u32 VAR_4 = FUNC_3(VAR_1);

 FUNC_1(VAR_1);






 if ((VAR_3 == VAR_2) && VAR_4) {

  return FUNC_4(VAR_0,
     &VAR_1->state);
 }

 FUNC_0(VAR_0, &VAR_1->state);


 VAR_1->tx_stats.tx_done_old = VAR_2;

 return 0;
}
