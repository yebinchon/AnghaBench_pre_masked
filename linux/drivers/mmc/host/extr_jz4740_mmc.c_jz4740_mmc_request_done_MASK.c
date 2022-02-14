
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {scalar_t__ host_cookie; } ;
struct jz4740_mmc_host {int mmc; struct mmc_request* req; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct jz4740_mmc_host*,struct mmc_data*) ;
 int FUNC_1 (int ,struct mmc_request*) ;

__attribute__((used)) static void FUNC_2(struct jz4740_mmc_host *VAR_1)
{
 struct mmc_request *VAR_2;
 struct mmc_data *VAR_3;

 VAR_2 = VAR_1->req;
 VAR_3 = VAR_2->data;
 VAR_1->req = ((void*)0);

 if (VAR_3 && VAR_3->host_cookie == VAR_0)
  FUNC_0(VAR_1, VAR_3);
 FUNC_1(VAR_1->mmc, VAR_2);
}
