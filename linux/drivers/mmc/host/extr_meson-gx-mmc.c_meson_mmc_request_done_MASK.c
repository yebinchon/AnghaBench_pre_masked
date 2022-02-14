
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int dummy; } ;
struct mmc_host {int dummy; } ;
struct meson_host {int mmc; int * cmd; } ;


 struct meson_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int ,struct mmc_request*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_0,
       struct mmc_request *VAR_1)
{
 struct meson_host *VAR_2 = FUNC_0(VAR_0);

 VAR_2->cmd = ((void*)0);
 FUNC_1(VAR_2->mmc, VAR_1);
}
