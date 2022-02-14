
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int flags; int bounce_buffer; } ;
struct mmc_request {TYPE_1__* data; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int host_cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_3, struct mmc_request *VAR_4)
{
 struct sdhci_host *VAR_5 = FUNC_0(VAR_3);

 VAR_4->data->host_cookie = VAR_1;






 if (VAR_5->flags & VAR_2 && !VAR_5->bounce_buffer)
  FUNC_1(VAR_5, VAR_4->data, VAR_0);
}
