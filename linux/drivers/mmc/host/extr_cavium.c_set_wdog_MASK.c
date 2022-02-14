
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct cvm_mmc_slot {unsigned int clock; TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cvm_mmc_slot *VAR_1, unsigned int VAR_2)
{
 u64 VAR_3;

 if (!VAR_1->clock)
  return;

 if (VAR_2)
  VAR_3 = (VAR_1->clock * VAR_2) / VAR_0;
 else
  VAR_3 = (VAR_1->clock * 850ull) / 1000ull;
 FUNC_1(VAR_3, VAR_1->host->base + FUNC_0(VAR_1->host));
}
