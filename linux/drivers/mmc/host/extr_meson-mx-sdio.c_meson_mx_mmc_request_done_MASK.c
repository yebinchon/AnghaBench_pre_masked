
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int dummy; } ;
struct meson_mx_mmc_host {int mmc; int * cmd; struct mmc_request* mrq; } ;


 int FUNC_0 (int ,struct mmc_request*) ;

__attribute__((used)) static void FUNC_1(struct meson_mx_mmc_host *VAR_0)
{
 struct mmc_request *VAR_1;

 VAR_1 = VAR_0->mrq;

 VAR_0->mrq = ((void*)0);
 VAR_0->cmd = ((void*)0);

 FUNC_0(VAR_0->mmc, VAR_1);
}
