
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {struct mmc_command* cmd; struct mmc_command* sbc; TYPE_1__* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_command {scalar_t__ error; } ;
struct meson_mx_mmc_host {scalar_t__ base; struct mmc_request* mrq; scalar_t__ error; } ;
struct TYPE_2__ {int sg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_command*) ;
 struct meson_mx_mmc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 struct meson_mx_mmc_host *VAR_3 = FUNC_2(VAR_1);
 struct mmc_command *VAR_4 = VAR_2->cmd;

 if (!VAR_3->error)
  VAR_3->error = FUNC_0(VAR_1, VAR_2);

 if (VAR_3->error) {
  VAR_4->error = VAR_3->error;
  FUNC_3(VAR_1, VAR_2);
  return;
 }

 VAR_3->mrq = VAR_2;

 if (VAR_2->data)
  FUNC_5(FUNC_4(VAR_2->data->sg),
         VAR_3->base + VAR_0);

 if (VAR_2->sbc)
  FUNC_1(VAR_1, VAR_2->sbc);
 else
  FUNC_1(VAR_1, VAR_2->cmd);
}
