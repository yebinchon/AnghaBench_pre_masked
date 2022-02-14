
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {scalar_t__ num_started_vdevs; int hw; int conf_mutex; } ;


 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ath10k *VAR_0)
{
 int VAR_1;

 FUNC_5(&VAR_0->conf_mutex);

 FUNC_2(VAR_0);

 if (!FUNC_0(VAR_0))
  return;

 if (VAR_0->num_started_vdevs > 0)
  return;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {





  FUNC_3(VAR_0, "failed to start CAC: %d\n", VAR_1);
  FUNC_4(VAR_0->hw);
 }
}
