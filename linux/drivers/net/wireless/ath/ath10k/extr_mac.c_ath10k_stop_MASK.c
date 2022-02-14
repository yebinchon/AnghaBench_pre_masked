
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_2__ {int timeout; } ;
struct ath10k {scalar_t__ state; int restart_work; TYPE_1__ scan; int set_coverage_class_work; int conf_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1)
{
 struct ath10k *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_2);

 FUNC_4(&VAR_2->conf_mutex);
 if (VAR_2->state != VAR_0) {
  FUNC_1(VAR_2);
  VAR_2->state = VAR_0;
 }
 FUNC_5(&VAR_2->conf_mutex);

 FUNC_3(&VAR_2->set_coverage_class_work);
 FUNC_2(&VAR_2->scan.timeout);
 FUNC_3(&VAR_2->restart_work);
}
