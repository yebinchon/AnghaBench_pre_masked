
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * trc_root; void* stats_root; } ;


 void* FUNC_0 (char*,int *) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(void)
{
 VAR_0->trc_root = FUNC_0("snic", ((void*)0));

 VAR_0->stats_root = FUNC_0("statistics",
         VAR_0->trc_root);
}
