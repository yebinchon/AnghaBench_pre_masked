
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int lock; int done; int dma_issue; int dma_on; TYPE_1__* data; struct mmc_command* cmd; } ;
struct mmc_command {int* resp; int flags; int error; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tmio_mmc_host*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tmio_mmc_host*,int ) ;
 int FUNC_7 (struct tmio_mmc_host*,int ) ;

__attribute__((used)) static void FUNC_8(struct tmio_mmc_host *VAR_13, unsigned int VAR_14)
{
 struct mmc_command *VAR_15 = VAR_13->cmd;
 int VAR_16, VAR_17;

 FUNC_3(&VAR_13->lock);

 if (!VAR_13->cmd) {
  FUNC_0("Spurious CMD irq\n");
  goto out;
 }






 for (VAR_16 = 3, VAR_17 = VAR_0 ; VAR_16 >= 0 ; VAR_16--, VAR_17 += 4)
  VAR_15->resp[VAR_16] = FUNC_2(VAR_13, VAR_17);

 if (VAR_15->flags & VAR_4) {
  VAR_15->resp[0] = (VAR_15->resp[0] << 8) | (VAR_15->resp[1] >> 24);
  VAR_15->resp[1] = (VAR_15->resp[1] << 8) | (VAR_15->resp[2] >> 24);
  VAR_15->resp[2] = (VAR_15->resp[2] << 8) | (VAR_15->resp[3] >> 24);
  VAR_15->resp[3] <<= 8;
 } else if (VAR_15->flags & VAR_6) {
  VAR_15->resp[0] = VAR_15->resp[3];
 }

 if (VAR_14 & VAR_9)
  VAR_15->error = -VAR_2;
 else if ((VAR_14 & VAR_11 && VAR_15->flags & VAR_5) ||
   VAR_14 & VAR_12 ||
   VAR_14 & VAR_10)
  VAR_15->error = -VAR_1;





 if (VAR_13->data && (!VAR_15->error || VAR_15->error == -VAR_1)) {
  if (VAR_13->data->flags & VAR_3) {
   if (!VAR_13->dma_on) {
    FUNC_7(VAR_13, VAR_7);
   } else {
    FUNC_6(VAR_13,
         VAR_7);
    FUNC_5(&VAR_13->dma_issue);
   }
  } else {
   if (!VAR_13->dma_on) {
    FUNC_7(VAR_13, VAR_8);
   } else {
    FUNC_6(VAR_13,
         VAR_8);
    FUNC_5(&VAR_13->dma_issue);
   }
  }
 } else {
  FUNC_1(&VAR_13->done);
 }

out:
 FUNC_4(&VAR_13->lock);
}
