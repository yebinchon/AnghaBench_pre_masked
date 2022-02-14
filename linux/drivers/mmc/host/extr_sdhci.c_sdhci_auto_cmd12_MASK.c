
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; } ;
struct mmc_request {int cap_cmd_during_tfr; int sbc; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct sdhci_host *VAR_1,
        struct mmc_request *VAR_2)
{
 return !VAR_2->sbc && (VAR_1->flags & VAR_0) &&
        !VAR_2->cap_cmd_during_tfr;
}
