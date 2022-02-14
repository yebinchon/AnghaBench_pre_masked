
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sdhci_host {scalar_t__ sdma_boundary; int tuning_done; int buf_ready_int; int lock; int * cmd; struct mmc_host* mmc; } ;
struct mmc_request {struct mmc_command* cmd; } ;
struct TYPE_2__ {scalar_t__ bus_width; } ;
struct mmc_host {TYPE_1__ ios; } ;
struct mmc_command {scalar_t__ opcode; int flags; struct mmc_request* mrq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sdhci_host*,struct mmc_request*) ;
 int FUNC_3 (struct sdhci_host*,struct mmc_command*) ;
 int FUNC_4 (struct sdhci_host*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int,int ) ;

void FUNC_8(struct sdhci_host *VAR_7, u32 VAR_8)
{
 struct mmc_host *VAR_9 = VAR_7->mmc;
 struct mmc_command VAR_10 = {};
 struct mmc_request VAR_11 = {};
 unsigned long VAR_12;
 u32 VAR_13 = VAR_7->sdma_boundary;

 FUNC_5(&VAR_7->lock, VAR_12);

 VAR_10.opcode = VAR_8;
 VAR_10.flags = VAR_2 | VAR_1;
 VAR_10.mrq = &VAR_11;

 VAR_11.cmd = &VAR_10;





 if (VAR_10.opcode == VAR_3 &&
     VAR_9->ios.bus_width == VAR_0)
  FUNC_4(VAR_7, FUNC_0(VAR_13, 128), VAR_4);
 else
  FUNC_4(VAR_7, FUNC_0(VAR_13, 64), VAR_4);







 FUNC_4(VAR_7, VAR_6, VAR_5);

 FUNC_3(VAR_7, &VAR_10);

 VAR_7->cmd = ((void*)0);

 FUNC_2(VAR_7, &VAR_11);

 VAR_7->tuning_done = 0;

 FUNC_6(&VAR_7->lock, VAR_12);


 FUNC_7(VAR_7->buf_ready_int, (VAR_7->tuning_done == 1),
      FUNC_1(50));

}
