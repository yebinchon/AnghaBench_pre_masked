
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wakeup_completed; } ;
struct ath10k {TYPE_1__ wow; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,...) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_2->conf_mutex);

 FUNC_3(&VAR_2->wow.wakeup_completed);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2, "failed to send wow wakeup indication: %d\n",
       VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_4(&VAR_2->wow.wakeup_completed, 3 * VAR_1);
 if (VAR_3 == 0) {
  FUNC_0(VAR_2, "timed out while waiting for wow wakeup completion\n");
  return -VAR_0;
 }

 return 0;
}
