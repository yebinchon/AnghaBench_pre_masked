
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msdc_host {scalar_t__ base; int lock; int dev; int req_timeout; struct mmc_command* cmd; } ;
struct mmc_request {int dummy; } ;
struct mmc_command {int arg; scalar_t__ error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct mmc_command*) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct msdc_host*,struct mmc_request*,struct mmc_command*) ;
 int FUNC_4 (struct msdc_host*,struct mmc_request*,struct mmc_command*) ;
 int FUNC_5 (struct msdc_host*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_8 ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct msdc_host *VAR_9,
  struct mmc_request *VAR_10, struct mmc_command *VAR_11)
{
 u32 VAR_12;
 unsigned long VAR_13;

 FUNC_0(VAR_9->cmd);
 VAR_9->cmd = VAR_11;

 FUNC_2(VAR_8, &VAR_9->req_timeout, VAR_0);
 if (!FUNC_3(VAR_9, VAR_10, VAR_11))
  return;

 if ((FUNC_6(VAR_9->base + VAR_1) & VAR_3) >> 16 ||
     FUNC_6(VAR_9->base + VAR_1) & VAR_2) {
  FUNC_1(VAR_9->dev, "TX/RX FIFO non-empty before start of IO. Reset\n");
  FUNC_5(VAR_9);
 }

 VAR_11->error = 0;
 VAR_12 = FUNC_4(VAR_9, VAR_10, VAR_11);

 FUNC_8(&VAR_9->lock, VAR_13);
 FUNC_7(VAR_9->base + VAR_4, VAR_7);
 FUNC_9(&VAR_9->lock, VAR_13);

 FUNC_10(VAR_11->arg, VAR_9->base + VAR_5);
 FUNC_10(VAR_12, VAR_9->base + VAR_6);
}
