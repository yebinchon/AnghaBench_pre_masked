
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct jz4740_mmc_host {TYPE_2__* req; int waiting; } ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct TYPE_3__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct jz4740_mmc_host* FUNC_0 (int ,struct timer_list*,int ) ;
 struct jz4740_mmc_host* VAR_2 ;
 int FUNC_1 (struct jz4740_mmc_host*) ;
 int FUNC_2 (struct jz4740_mmc_host*,int ,int) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct jz4740_mmc_host *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 if (!FUNC_3(0, &VAR_5->waiting))
  return;

 FUNC_2(VAR_5, VAR_1, 0);

 VAR_5->req->cmd->error = -VAR_0;
 FUNC_1(VAR_5);
}
