
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int temperature; int wmi_sync; } ;
struct ath10k {TYPE_1__ thermal; int data_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath10k *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->data_lock);
 VAR_0->thermal.temperature = VAR_1;
 FUNC_2(&VAR_0->data_lock);
 FUNC_0(&VAR_0->thermal.wmi_sync);
}
