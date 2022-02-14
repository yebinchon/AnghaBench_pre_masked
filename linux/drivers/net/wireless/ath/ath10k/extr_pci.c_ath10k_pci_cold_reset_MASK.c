
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int fw_cold_reset_counter; } ;
struct ath10k {int data_lock; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,int ) ;
 int FUNC_2 (struct ath10k*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2, VAR_0, "boot cold reset\n");

 FUNC_4(&VAR_2->data_lock);

 VAR_2->stats.fw_cold_reset_counter++;

 FUNC_5(&VAR_2->data_lock);


 VAR_3 = FUNC_1(VAR_2, VAR_1);
 VAR_3 |= 1;
 FUNC_2(VAR_2, VAR_1, VAR_3);






 FUNC_3(20);


 VAR_3 &= ~1;
 FUNC_2(VAR_2, VAR_1, VAR_3);

 FUNC_3(20);

 FUNC_0(VAR_2, VAR_0, "boot cold reset complete\n");

 return 0;
}
