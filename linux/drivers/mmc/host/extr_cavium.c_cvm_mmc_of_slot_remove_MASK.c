
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cvm_mmc_slot {size_t bus_id; int mmc; TYPE_1__* host; } ;
struct TYPE_2__ {int ** slot; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct cvm_mmc_slot *VAR_0)
{
 FUNC_1(VAR_0->mmc);
 VAR_0->host->slot[VAR_0->bus_id] = ((void*)0);
 FUNC_0(VAR_0->mmc);
 return 0;
}
