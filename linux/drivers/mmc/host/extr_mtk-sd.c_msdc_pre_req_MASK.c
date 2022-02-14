
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {int dummy; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int host_cookie; } ;


 int VAR_0 ;
 struct msdc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct msdc_host*,struct mmc_request*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 struct msdc_host *VAR_3 = FUNC_0(VAR_1);
 struct mmc_data *VAR_4 = VAR_2->data;

 if (!VAR_4)
  return;

 FUNC_1(VAR_3, VAR_2);
 VAR_4->host_cookie |= VAR_0;
}
