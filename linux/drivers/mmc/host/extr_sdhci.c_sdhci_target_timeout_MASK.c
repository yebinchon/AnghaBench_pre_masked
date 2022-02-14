
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {scalar_t__ clock; } ;
struct mmc_data {unsigned long long timeout_clks; int timeout_ns; } ;
struct mmc_command {int busy_timeout; } ;


 unsigned int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (unsigned long long,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct sdhci_host *VAR_0,
      struct mmc_command *VAR_1,
      struct mmc_data *VAR_2)
{
 unsigned int VAR_3;


 if (!VAR_2) {
  VAR_3 = VAR_1->busy_timeout * 1000;
 } else {
  VAR_3 = FUNC_0(VAR_2->timeout_ns, 1000);
  if (VAR_0->clock && VAR_2->timeout_clks) {
   unsigned long long VAR_4;






   VAR_4 = 1000000ULL * VAR_2->timeout_clks;
   if (FUNC_1(VAR_4, VAR_0->clock))
    VAR_3++;
   VAR_3 += VAR_4;
  }
 }

 return VAR_3;
}
