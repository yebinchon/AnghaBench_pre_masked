
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cvm_mmc_slot {int cached_switch; struct cvm_mmc_host* host; int bus_id; } ;
struct cvm_mmc_host {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 int FUNC_2 (struct cvm_mmc_host*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct cvm_mmc_slot *VAR_4)
{
 struct cvm_mmc_host *VAR_5 = VAR_4->host;
 u64 VAR_6, VAR_7;

 VAR_6 = FUNC_4(VAR_4->host->base + FUNC_0(VAR_5));
 VAR_6 &= ~(VAR_3 | VAR_0 |
   VAR_1 | VAR_2);
 FUNC_5(&VAR_6, VAR_4->bus_id);

 VAR_7 = FUNC_4(VAR_4->host->base + FUNC_1(VAR_5));
 FUNC_2(VAR_4->host, VAR_6);

 VAR_4->cached_switch = VAR_6;

 FUNC_3(20);

 FUNC_6(VAR_7, VAR_4->host->base + FUNC_1(VAR_5));
}
