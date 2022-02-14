
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_davinci_host {scalar_t__ do_dma; int mmc; scalar_t__ base; } ;
struct TYPE_2__ {int error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_3 ;
 int FUNC_2 (struct mmc_davinci_host*,struct mmc_request*) ;
 int FUNC_3 (struct mmc_davinci_host*,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 struct mmc_davinci_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_request*) ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_4, struct mmc_request *VAR_5)
{
 struct mmc_davinci_host *VAR_6 = FUNC_5(VAR_4);
 unsigned long VAR_7 = VAR_3 + FUNC_7(900);
 u32 VAR_8 = 0;




 while (FUNC_9(VAR_3, VAR_7)) {
  VAR_8 = FUNC_8(VAR_6->base + VAR_0);
  if (!(VAR_8 & VAR_2))
   break;
  FUNC_0();
 }
 if (VAR_8 & VAR_2) {
  FUNC_1(FUNC_4(VAR_6->mmc), "still BUSY? bad ... \n");
  VAR_5->cmd->error = -VAR_1;
  FUNC_6(VAR_4, VAR_5);
  return;
 }

 VAR_6->do_dma = 0;
 FUNC_2(VAR_6, VAR_5);
 FUNC_3(VAR_6, VAR_5->cmd);
}
