
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int cmd; } ;
struct mmc_host {int dummy; } ;
struct jz4740_mmc_host {int timeout_timer; int waiting; int state; struct mmc_request* req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct jz4740_mmc_host*,int ) ;
 int FUNC_1 (struct jz4740_mmc_host*,int ,int) ;
 int FUNC_2 (struct jz4740_mmc_host*,int ) ;
 struct jz4740_mmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_4, struct mmc_request *VAR_5)
{
 struct jz4740_mmc_host *VAR_6 = FUNC_3(VAR_4);

 VAR_6->req = VAR_5;

 FUNC_2(VAR_6, ~0);
 FUNC_1(VAR_6, VAR_2, 1);

 VAR_6->state = VAR_1;
 FUNC_5(0, &VAR_6->waiting);
 FUNC_4(&VAR_6->timeout_timer, VAR_3 + 5*VAR_0);
 FUNC_0(VAR_6, VAR_5->cmd);
}
