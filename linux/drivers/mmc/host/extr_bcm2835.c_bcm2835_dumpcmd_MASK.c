
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_command {int error; int * resp; int flags; int arg; int opcode; } ;
struct device {int dummy; } ;
struct bcm2835_host {struct mmc_command* cmd; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,char,char const*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bcm2835_host *VAR_0, struct mmc_command *VAR_1,
       const char *VAR_2)
{
 struct device *VAR_3 = &VAR_0->pdev->dev;

 if (!VAR_1)
  return;

 FUNC_0(VAR_3, "%c%s op %d arg 0x%x flags 0x%x - resp %08x %08x %08x %08x, err %d\n",
  (VAR_1 == VAR_0->cmd) ? '>' : ' ',
  VAR_2, VAR_1->opcode, VAR_1->arg, VAR_1->flags,
  VAR_1->resp[0], VAR_1->resp[1], VAR_1->resp[2], VAR_1->resp[3],
  VAR_1->error);
}
