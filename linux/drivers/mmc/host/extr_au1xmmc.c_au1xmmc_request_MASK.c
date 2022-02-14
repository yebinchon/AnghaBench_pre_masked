
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* cmd; int data; } ;
struct mmc_host {int dummy; } ;
struct au1xmmc_host {scalar_t__ status; struct mmc_request* mrq; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int FUNC_0 (struct au1xmmc_host*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct au1xmmc_host*) ;
 int FUNC_4 (struct au1xmmc_host*,int ) ;
 int FUNC_5 (struct au1xmmc_host*,int ,TYPE_1__*,int ) ;
 int FUNC_6 () ;
 struct au1xmmc_host* FUNC_7 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_8(struct mmc_host* VAR_3, struct mmc_request* VAR_4)
{
 struct au1xmmc_host *VAR_5 = FUNC_7(VAR_3);
 int VAR_6 = 0;

 FUNC_1(FUNC_6());
 FUNC_1(VAR_5->status != VAR_2);

 VAR_5->mrq = VAR_4;
 VAR_5->status = VAR_1;


 if (0 == FUNC_2(VAR_3)) {
  VAR_4->cmd->error = -VAR_0;
  FUNC_3(VAR_5);
  return;
 }

 if (VAR_4->data) {
  FUNC_0(VAR_5);
  VAR_6 = FUNC_4(VAR_5, VAR_4->data);
 }

 if (!VAR_6)
  VAR_6 = FUNC_5(VAR_5, 0, VAR_4->cmd, VAR_4->data);

 if (VAR_6) {
  VAR_4->cmd->error = VAR_6;
  FUNC_3(VAR_5);
 }
}
