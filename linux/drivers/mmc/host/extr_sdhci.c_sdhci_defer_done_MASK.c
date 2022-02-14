
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; scalar_t__ pending_reset; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {scalar_t__ host_cookie; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct sdhci_host *VAR_2,
        struct mmc_request *VAR_3)
{
 struct mmc_data *VAR_4 = VAR_3->data;

 return VAR_2->pending_reset ||
        ((VAR_2->flags & VAR_1) && VAR_4 &&
  VAR_4->host_cookie == VAR_0);
}
