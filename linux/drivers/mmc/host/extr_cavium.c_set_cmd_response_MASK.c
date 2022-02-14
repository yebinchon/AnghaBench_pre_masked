
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mmc_request {TYPE_1__* cmd; } ;
struct cvm_mmc_host {scalar_t__ base; } ;
struct TYPE_2__ {int* resp; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 scalar_t__ FUNC_2 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct cvm_mmc_host *VAR_2, struct mmc_request *VAR_3,
        u64 VAR_4)
{
 u64 VAR_5, VAR_6;

 if (!(VAR_4 & VAR_1))
  return;

 VAR_6 = FUNC_3(VAR_2->base + FUNC_2(VAR_2));

 switch (FUNC_0(VAR_0, VAR_4)) {
 case 1:
 case 3:
  VAR_3->cmd->resp[0] = (VAR_6 >> 8) & 0xffffffff;
  VAR_3->cmd->resp[1] = 0;
  VAR_3->cmd->resp[2] = 0;
  VAR_3->cmd->resp[3] = 0;
  break;
 case 2:
  VAR_3->cmd->resp[3] = VAR_6 & 0xffffffff;
  VAR_3->cmd->resp[2] = (VAR_6 >> 32) & 0xffffffff;
  VAR_5 = FUNC_3(VAR_2->base + FUNC_1(VAR_2));
  VAR_3->cmd->resp[1] = VAR_5 & 0xffffffff;
  VAR_3->cmd->resp[0] = (VAR_5 >> 32) & 0xffffffff;
  break;
 }
}
