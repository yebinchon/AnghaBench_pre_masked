
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_warm_reset_counter; } ;
struct ath10k {int data_lock; TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ath10k *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, VAR_0, "boot warm reset\n");

 FUNC_9(&VAR_1->data_lock);
 VAR_1->stats.fw_warm_reset_counter++;
 FUNC_10(&VAR_1->data_lock);

 FUNC_2(VAR_1);






 FUNC_7(VAR_1);
 FUNC_6(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);

 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_6(VAR_1);
 FUNC_1(VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_8(VAR_1, "failed to wait for target init: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_0(VAR_1, VAR_0, "boot warm reset complete\n");

 return 0;
}
