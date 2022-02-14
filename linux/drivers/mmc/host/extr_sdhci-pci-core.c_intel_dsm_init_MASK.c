
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct intel_host {int d3_retune; int dsm_fns; int drv_strength; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_host*,struct device*,int ,int*) ;
 int FUNC_1 (struct intel_host*,struct device*,int ,int *) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct intel_host *VAR_3, struct device *VAR_4,
      struct mmc_host *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 VAR_3->d3_retune = 1;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_2, &VAR_3->dsm_fns);
 if (VAR_6) {
  FUNC_3("%s: DSM not supported, error %d\n",
    FUNC_2(VAR_5), VAR_6);
  return;
 }

 FUNC_3("%s: DSM function mask %#x\n",
   FUNC_2(VAR_5), VAR_3->dsm_fns);

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1, &VAR_7);
 VAR_3->drv_strength = VAR_6 ? 0 : VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_0, &VAR_7);
 VAR_3->d3_retune = VAR_6 ? 1 : !!VAR_7;
}
