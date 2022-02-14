
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_data {int bytes_xfered; int blksz; int blocks; } ;
struct mmc_command {int error; int mrq; struct mmc_data* data; } ;
struct meson_host {int mmc; scalar_t__ regs; int dev; struct mmc_command* cmd; } ;
typedef scalar_t__ irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct mmc_data*) ;
 scalar_t__ FUNC_3 (struct mmc_command*) ;
 int FUNC_4 (int ,struct mmc_command*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_14, void *VAR_15)
{
 struct meson_host *VAR_16 = VAR_15;
 struct mmc_command *VAR_17;
 struct mmc_data *VAR_18;
 u32 VAR_19, VAR_20, VAR_21;
 irqreturn_t VAR_22 = VAR_5;

 VAR_19 = FUNC_6(VAR_16->regs + VAR_10);
 VAR_21 = FUNC_6(VAR_16->regs + VAR_12);
 VAR_20 = VAR_21 & VAR_19;

 if (!VAR_20) {
  FUNC_1(VAR_16->dev,
   "Unexpected IRQ! irq_en 0x%08x - status 0x%08x\n",
    VAR_19, VAR_21);
  return VAR_5;
 }

 if (FUNC_0(!VAR_16) || FUNC_0(!VAR_16->cmd))
  return VAR_5;


 FUNC_7(VAR_20, VAR_16->regs + VAR_12);

 VAR_17 = VAR_16->cmd;
 VAR_18 = VAR_17->data;
 VAR_17->error = 0;
 if (VAR_20 & VAR_2) {
  FUNC_1(VAR_16->dev, "CRC Error - status 0x%08x\n", VAR_20);
  VAR_17->error = -VAR_0;
  VAR_22 = VAR_9;
  goto out;
 }

 if (VAR_20 & VAR_8) {
  FUNC_1(VAR_16->dev, "Timeout - status 0x%08x\n", VAR_20);
  VAR_17->error = -VAR_1;
  VAR_22 = VAR_9;
  goto out;
 }

 FUNC_4(VAR_16->mmc, VAR_17);

 if (VAR_20 & VAR_7) {
  FUNC_1(VAR_16->dev, "IRQ: SDIO TODO.\n");
  VAR_22 = VAR_4;
 }

 if (VAR_20 & (VAR_3 | VAR_6)) {
  if (VAR_18 && !VAR_17->error)
   VAR_18->bytes_xfered = VAR_18->blksz * VAR_18->blocks;
  if (FUNC_2(VAR_18) ||
      FUNC_3(VAR_17))
   VAR_22 = VAR_9;
  else
   VAR_22 = VAR_4;
 }

out:
 if (VAR_17->error) {

  u32 VAR_23 = FUNC_6(VAR_16->regs + VAR_11);

  VAR_23 &= ~VAR_13;
  FUNC_7(VAR_23, VAR_16->regs + VAR_11);
 }

 if (VAR_22 == VAR_4)
  FUNC_5(VAR_16->mmc, VAR_17->mrq);

 return VAR_22;
}
