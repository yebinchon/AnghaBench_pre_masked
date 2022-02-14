
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {scalar_t__ host_cookie; int sg_len; int sg; } ;
struct alcor_sdmmc_host {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mmc_data*) ;
 struct alcor_sdmmc_host* FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_2,
       struct mmc_request *VAR_3,
       int VAR_4)
{
 struct alcor_sdmmc_host *VAR_5 = FUNC_2(VAR_2);
 struct mmc_data *VAR_6 = VAR_3->data;

 if (!VAR_6)
  return;

 if (VAR_6->host_cookie == VAR_0) {
  FUNC_0(VAR_5->dev,
        VAR_6->sg,
        VAR_6->sg_len,
        FUNC_1(VAR_6));
 }

 VAR_6->host_cookie = VAR_1;
}
