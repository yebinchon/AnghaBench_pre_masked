
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int discard_granularity; } ;
struct request_queue {TYPE_1__ limits; } ;
struct mmc_card {int pref_erase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (struct request_queue*,unsigned int) ;
 unsigned int FUNC_2 (struct mmc_card*) ;
 scalar_t__ FUNC_3 (struct mmc_card*) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_2,
        struct mmc_card *VAR_3)
{
 unsigned VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return;

 FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_2, VAR_4);
 VAR_2->limits.discard_granularity = VAR_3->pref_erase << 9;

 if (VAR_3->pref_erase > VAR_4)
  VAR_2->limits.discard_granularity = 0;
 if (FUNC_3(VAR_3))
  FUNC_0(VAR_1, VAR_2);
}
