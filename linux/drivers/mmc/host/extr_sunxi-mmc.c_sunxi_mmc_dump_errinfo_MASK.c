
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sunxi_mmc_host {int int_sum; TYPE_2__* mmc; TYPE_1__* mrq; } ;
struct mmc_data {int flags; } ;
struct mmc_command {scalar_t__ opcode; } ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {struct mmc_data* data; struct mmc_command* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct sunxi_mmc_host *VAR_13)
{
 struct mmc_command *VAR_14 = VAR_13->mrq->cmd;
 struct mmc_data *VAR_15 = VAR_13->mrq->data;


 if ((VAR_13->int_sum & VAR_6) ==
  VAR_9 && (VAR_14->opcode == VAR_12 ||
          VAR_14->opcode == VAR_11))
  return;

 FUNC_0(FUNC_1(VAR_13->mmc),
  "smc %d err, cmd %d,%s%s%s%s%s%s%s%s%s%s !!\n",
  VAR_13->mmc->index, VAR_14->opcode,
  VAR_15 ? (VAR_15->flags & VAR_0 ? " WR" : " RD") : "",
  VAR_13->int_sum & VAR_8 ? " RE" : "",
  VAR_13->int_sum & VAR_7 ? " RCE" : "",
  VAR_13->int_sum & VAR_1 ? " DCE" : "",
  VAR_13->int_sum & VAR_9 ? " RTO" : "",
  VAR_13->int_sum & VAR_2 ? " DTO" : "",
  VAR_13->int_sum & VAR_4 ? " FE" : "",
  VAR_13->int_sum & VAR_5 ? " HL" : "",
  VAR_13->int_sum & VAR_10 ? " SBE" : "",
  VAR_13->int_sum & VAR_3 ? " EBE" : ""
  );
}
