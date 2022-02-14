
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_host {int claimed; } ;
struct mmc_command {int retries; int error; int * data; int resp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;

int FUNC_3(struct mmc_host *VAR_0, struct mmc_command *VAR_1, int VAR_2)
{
 struct mmc_request VAR_3 = {};

 FUNC_0(!VAR_0->claimed);

 FUNC_1(VAR_1->resp, 0, sizeof(VAR_1->resp));
 VAR_1->retries = VAR_2;

 VAR_3.cmd = VAR_1;
 VAR_1->data = ((void*)0);

 FUNC_2(VAR_0, &VAR_3);

 return VAR_1->error;
}
