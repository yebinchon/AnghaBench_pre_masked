
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slot {int presence_save; TYPE_1__* hpc_ops; int latch_save; int attention_save; int pwr_save; } ;
struct TYPE_2__ {int (* get_adapter_status ) (struct slot*,int *) ;int (* get_latch_status ) (struct slot*,int *) ;int (* get_attention_status ) (struct slot*,int *) ;int (* get_power_status ) (struct slot*,int *) ;} ;


 int FUNC_0 (struct slot*,int *) ;
 int FUNC_1 (struct slot*,int *) ;
 int FUNC_2 (struct slot*,int *) ;
 int FUNC_3 (struct slot*,int *) ;

__attribute__((used)) static void FUNC_4(struct slot *VAR_0)
{
 VAR_0->hpc_ops->get_power_status(VAR_0, &VAR_0->pwr_save);
 VAR_0->hpc_ops->get_attention_status(VAR_0, &VAR_0->attention_save);
 VAR_0->hpc_ops->get_latch_status(VAR_0, &VAR_0->latch_save);
 VAR_0->hpc_ops->get_adapter_status(VAR_0, &VAR_0->presence_save);
}
