
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int target_suspend; int conf_mutex; } ;


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

 FUNC_3(&VAR_2->target_suspend);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2, "failed to issue wow enable: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_4(&VAR_2->target_suspend, 3 * VAR_1);
 if (VAR_3 == 0) {
  FUNC_0(VAR_2, "timed out while waiting for suspend completion\n");
  return -VAR_0;
 }

 return 0;
}
