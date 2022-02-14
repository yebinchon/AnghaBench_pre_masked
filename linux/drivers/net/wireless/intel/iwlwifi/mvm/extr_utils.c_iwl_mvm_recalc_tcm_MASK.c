
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ts; int lock; int work; scalar_t__ paused; scalar_t__ uapsd_nonagg_ts; } ;
struct iwl_mvm {TYPE_1__ tcm; int mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (struct iwl_mvm*,unsigned long,int) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*,int) ;
 int FUNC_3 (struct iwl_mvm*) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (unsigned long,scalar_t__) ;

void FUNC_12(struct iwl_mvm *VAR_3)
{
 unsigned long VAR_4 = VAR_2;
 bool VAR_5 =
  FUNC_11(VAR_4, VAR_3->tcm.uapsd_nonagg_ts +
          FUNC_4(VAR_0));

 FUNC_9(&VAR_3->tcm.lock);
 if (VAR_3->tcm.paused || !FUNC_11(VAR_4, VAR_3->tcm.ts + VAR_1)) {
  FUNC_10(&VAR_3->tcm.lock);
  return;
 }
 FUNC_10(&VAR_3->tcm.lock);

 if (VAR_5 && FUNC_1(VAR_3)) {
  FUNC_5(&VAR_3->mutex);
  if (FUNC_2(VAR_3, 1))
   VAR_5 = 0;
  FUNC_6(&VAR_3->mutex);
 }

 FUNC_9(&VAR_3->tcm.lock);

 if (!VAR_3->tcm.paused && FUNC_11(VAR_4, VAR_3->tcm.ts + VAR_1)) {

  unsigned long VAR_6 = FUNC_0(VAR_3, VAR_4,
          VAR_5);


  FUNC_8();
  VAR_3->tcm.ts = VAR_4;
  if (VAR_6)
   FUNC_7(&VAR_3->tcm.work, VAR_6);
 }
 FUNC_10(&VAR_3->tcm.lock);

 FUNC_3(VAR_3);
}
