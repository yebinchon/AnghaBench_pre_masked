
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int monitor_started; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,...) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,char*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ath10k *VAR_2)
{
 bool VAR_3;
 bool VAR_4;
 int VAR_5;

 FUNC_7(&VAR_2->conf_mutex);

 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_0,
     "mac monitor recalc started? %d needed? %d allowed? %d\n",
     VAR_2->monitor_started, VAR_3, VAR_4);

 if (FUNC_0(VAR_3 && !VAR_4)) {
  if (VAR_2->monitor_started) {
   FUNC_1(VAR_2, VAR_0, "mac monitor stopping disallowed monitor\n");

   VAR_5 = FUNC_5(VAR_2);
   if (VAR_5)
    FUNC_6(VAR_2, "failed to stop disallowed monitor: %d\n",
         VAR_5);

  }

  return -VAR_1;
 }

 if (VAR_3 == VAR_2->monitor_started)
  return 0;

 if (VAR_3)
  return FUNC_4(VAR_2);
 else
  return FUNC_5(VAR_2);
}
