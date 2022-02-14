
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cvm_mmc_slot {unsigned long long bus_id; int clock; int cached_switch; TYPE_1__* mmc; struct cvm_mmc_host* host; } ;
struct cvm_mmc_host {unsigned long long emm_cfg; int sys_freq; scalar_t__ base; } ;
struct TYPE_2__ {int f_min; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 scalar_t__ FUNC_2 (struct cvm_mmc_host*) ;
 scalar_t__ FUNC_3 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct cvm_mmc_slot*,int ) ;
 int FUNC_5 (struct cvm_mmc_host*,int ) ;
 int FUNC_6 (int *,unsigned long long) ;
 int FUNC_7 (struct cvm_mmc_slot*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct cvm_mmc_slot *VAR_3)
{
 struct cvm_mmc_host *VAR_4 = VAR_3->host;
 u64 VAR_5;


 VAR_4->emm_cfg |= (1ull << VAR_3->bus_id);
 FUNC_9(VAR_4->emm_cfg, VAR_3->host->base + FUNC_1(VAR_4));
 FUNC_8(10);


 FUNC_4(VAR_3, VAR_3->mmc->f_min);
 VAR_5 = FUNC_0(VAR_2, 10);
 VAR_5 |= FUNC_0(VAR_0,
     (VAR_4->sys_freq / VAR_3->clock) / 2);
 VAR_5 |= FUNC_0(VAR_1,
     (VAR_4->sys_freq / VAR_3->clock) / 2);


 FUNC_6(&VAR_5, VAR_3->bus_id);
 FUNC_5(VAR_4, VAR_5);

 VAR_3->cached_switch = VAR_5;







 FUNC_7(VAR_3, 0);
 FUNC_9(0xe4390080ull, VAR_4->base + FUNC_3(VAR_4));
 FUNC_9(1, VAR_4->base + FUNC_2(VAR_4));
 return 0;
}
