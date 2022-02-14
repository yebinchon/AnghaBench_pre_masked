
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usdhi6_host {TYPE_1__* mrq; } ;
struct mmc_command {int * resp; } ;
struct TYPE_2__ {struct mmc_command* stop; } ;


 int VAR_0 ;
 int FUNC_0 (struct usdhi6_host*,int ) ;

__attribute__((used)) static void FUNC_1(struct usdhi6_host *VAR_1)
{
 struct mmc_command *VAR_2 = VAR_1->mrq->stop;
 VAR_2->resp[0] = FUNC_0(VAR_1, VAR_0);
}
