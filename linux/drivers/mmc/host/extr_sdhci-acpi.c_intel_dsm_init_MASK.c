
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct intel_host {int dsm_fns; int hs_caps; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_host*,struct device*,int ,int*) ;
 int FUNC_1 (struct intel_host*,struct device*,int ,int *) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct intel_host *VAR_2, struct device *VAR_3,
      struct mmc_host *VAR_4)
{
 int VAR_5;

 VAR_2->hs_caps = ~0;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_2->dsm_fns);
 if (VAR_5) {
  FUNC_3("%s: DSM not supported, error %d\n",
    FUNC_2(VAR_4), VAR_5);
  return;
 }

 FUNC_3("%s: DSM function mask %#x\n",
   FUNC_2(VAR_4), VAR_2->dsm_fns);

 FUNC_1(VAR_2, VAR_3, VAR_1, &VAR_2->hs_caps);
}
