
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_command {int opcode; int arg; TYPE_1__* data; } ;
struct cvm_mmc_slot {int bus_id; struct cvm_mmc_host* host; } ;
struct cvm_mmc_host {int dma_active; scalar_t__ base; int dev; int (* int_enable ) (struct cvm_mmc_host*,int) ;struct mmc_request* current_req; int (* acquire_bus ) (struct cvm_mmc_host*) ;} ;
struct cvm_mmc_cr_mods {int ctype_xor; int rtype_xor; } ;
struct TYPE_2__ {int flags; int blocks; int blksz; scalar_t__ timeout_ns; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct cvm_mmc_host*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct cvm_mmc_host*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct mmc_request*) ;
 void FUNC_5 (struct mmc_host*,struct mmc_request*) ;
 struct cvm_mmc_cr_mods FUNC_6 (struct mmc_command*) ;
 int FUNC_7 (struct cvm_mmc_slot*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct cvm_mmc_host*,struct mmc_request*) ;
 int FUNC_10 (struct cvm_mmc_host*,struct mmc_request*) ;
 scalar_t__ FUNC_11 (struct mmc_command*) ;
 struct cvm_mmc_slot* FUNC_12 (struct mmc_host*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int*,int ) ;
 int FUNC_15 (struct cvm_mmc_slot*,scalar_t__) ;
 int FUNC_16 (struct cvm_mmc_host*) ;
 int FUNC_17 (struct cvm_mmc_host*,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_20(struct mmc_host *VAR_16, struct mmc_request *VAR_17)
{
 struct cvm_mmc_slot *VAR_18 = FUNC_12(VAR_16);
 struct cvm_mmc_host *VAR_19 = VAR_18->host;
 struct mmc_command *VAR_20 = VAR_17->cmd;
 struct cvm_mmc_cr_mods VAR_21;
 u64 VAR_22, VAR_23;
 int VAR_24 = 100;
 VAR_19->acquire_bus(VAR_19);

 if (VAR_20->opcode == VAR_14 ||
     VAR_20->opcode == VAR_15)
  return FUNC_5(VAR_16, VAR_17);

 FUNC_7(VAR_18);

 VAR_21 = FUNC_6(VAR_20);

 FUNC_4(VAR_19->current_req);
 VAR_19->current_req = VAR_17;

 if (VAR_20->data) {
  if (VAR_20->data->flags & VAR_13)
   FUNC_9(VAR_19, VAR_17);
  else
   FUNC_10(VAR_19, VAR_17);

  if (VAR_20->data->timeout_ns)
   FUNC_15(VAR_18, VAR_20->data->timeout_ns);
 } else
  FUNC_15(VAR_18, 0);

 VAR_19->dma_active = 0;
 VAR_19->int_enable(VAR_19, VAR_6 | VAR_7);

 VAR_22 = FUNC_0(VAR_5, 1) |
    FUNC_0(VAR_1, VAR_21.ctype_xor) |
    FUNC_0(VAR_4, VAR_21.rtype_xor) |
    FUNC_0(VAR_2, VAR_20->opcode) |
    FUNC_0(VAR_0, VAR_20->arg);
 FUNC_14(&VAR_22, VAR_18->bus_id);
 if (VAR_20->data && FUNC_11(VAR_20) == VAR_12)
  VAR_22 |= FUNC_0(VAR_3,
    64 - ((VAR_20->data->blocks * VAR_20->data->blksz) / 8));

 FUNC_19(0, VAR_19->base + FUNC_3(VAR_19));

retry:
 VAR_23 = FUNC_13(VAR_19->base + FUNC_2(VAR_19));
 if (VAR_23 & VAR_10 ||
     VAR_23 & VAR_8 ||
     VAR_23 & VAR_11 ||
     VAR_23 & VAR_9) {
  FUNC_18(10);
  if (--VAR_24)
   goto retry;
 }
 if (!VAR_24)
  FUNC_8(VAR_19->dev, "Bad status: %llx before command write\n", VAR_23);
 FUNC_19(VAR_22, VAR_19->base + FUNC_1(VAR_19));
}
