
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cvm_mmc_slot {size_t bus_id; int cached_switch; int cached_rca; int dat_cnt; int cmd_cnt; struct cvm_mmc_host* host; } ;
struct cvm_mmc_host {size_t last_slot; scalar_t__ base; struct cvm_mmc_slot** slot; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 scalar_t__ FUNC_2 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct cvm_mmc_host*) ;
 int FUNC_4 (struct cvm_mmc_host*,int) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int*,size_t) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct cvm_mmc_slot *VAR_2)
{
 struct cvm_mmc_host *VAR_3 = VAR_2->host;
 struct cvm_mmc_slot *VAR_4;
 u64 VAR_5, VAR_6;

 if (VAR_2->bus_id == VAR_3->last_slot)
  return;

 if (VAR_3->last_slot >= 0 && VAR_3->slot[VAR_3->last_slot]) {
  VAR_4 = VAR_3->slot[VAR_3->last_slot];
  VAR_4->cached_switch = FUNC_5(VAR_3->base + FUNC_3(VAR_3));
  VAR_4->cached_rca = FUNC_5(VAR_3->base + FUNC_1(VAR_3));
 }

 FUNC_7(VAR_2->cached_rca, VAR_3->base + FUNC_1(VAR_3));
 VAR_6 = VAR_2->cached_switch;
 FUNC_6(&VAR_6, VAR_2->bus_id);
 FUNC_4(VAR_3, VAR_6);

 VAR_5 = FUNC_0(VAR_0, VAR_2->cmd_cnt) |
       FUNC_0(VAR_1, VAR_2->dat_cnt);
 FUNC_7(VAR_5, VAR_3->base + FUNC_2(VAR_3));

 VAR_3->last_slot = VAR_2->bus_id;
}
