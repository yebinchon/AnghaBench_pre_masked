
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pxamci_host {int mrq; int dma_chan_tx; TYPE_1__* data; scalar_t__ base; struct mmc_command* cmd; } ;
struct mmc_command {int* resp; int flags; int error; int opcode; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct pxamci_host*,int ) ;
 int FUNC_4 (struct pxamci_host*,int ) ;
 int FUNC_5 (struct pxamci_host*,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct pxamci_host *VAR_10, unsigned int VAR_11)
{
 struct mmc_command *VAR_12 = VAR_10->cmd;
 int VAR_13;
 u32 VAR_14;

 if (!VAR_12)
  return 0;

 VAR_10->cmd = ((void*)0);





 VAR_14 = FUNC_6(VAR_10->base + VAR_5) & 0xffff;
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  u32 VAR_15 = FUNC_6(VAR_10->base + VAR_5) & 0xffff;
  u32 VAR_16 = FUNC_6(VAR_10->base + VAR_5) & 0xffff;
  VAR_12->resp[VAR_13] = VAR_14 << 24 | VAR_15 << 8 | VAR_16 >> 8;
  VAR_14 = VAR_16;
 }

 if (VAR_11 & VAR_9) {
  VAR_12->error = -VAR_3;
 } else if (VAR_11 & VAR_8 && VAR_12->flags & VAR_7) {






  if (FUNC_0() &&
      (VAR_12->flags & VAR_6 && VAR_12->resp[0] & 0x80000000))
   FUNC_2("ignoring CRC from command %d - *risky*\n", VAR_12->opcode);
  else
   VAR_12->error = -VAR_1;
 }

 FUNC_3(VAR_10, VAR_2);
 if (VAR_10->data && !VAR_12->error) {
  FUNC_4(VAR_10, VAR_0);




  if (FUNC_0() && VAR_10->data->flags & VAR_4)
   FUNC_1(VAR_10->dma_chan_tx);
 } else {
  FUNC_5(VAR_10, VAR_10->mrq);
 }

 return 1;
}
