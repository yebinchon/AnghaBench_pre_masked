
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_command {int arg; } ;
struct atmel_mci {TYPE_1__* pdev; struct mmc_command* cmd; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_command*) ;
 int FUNC_1 (struct atmel_mci*,int ,int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct atmel_mci *VAR_2,
  struct mmc_command *VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_2->cmd);
 VAR_2->cmd = VAR_3;

 FUNC_2(&VAR_2->pdev->dev,
   "start command: ARGR=0x%08x CMDR=0x%08x\n",
   VAR_3->arg, VAR_4);

 FUNC_1(VAR_2, VAR_0, VAR_3->arg);
 FUNC_1(VAR_2, VAR_1, VAR_4);
}
