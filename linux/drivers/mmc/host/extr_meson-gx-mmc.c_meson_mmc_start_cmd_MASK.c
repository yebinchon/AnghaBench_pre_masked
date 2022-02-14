
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct mmc_data {int blocks; unsigned int blksz; int flags; int sg_len; int sg; scalar_t__ bytes_xfered; } ;
struct mmc_command {unsigned int opcode; int arg; struct mmc_data* data; } ;
struct meson_host {unsigned int bounce_buf_size; int bounce_dma_addr; scalar_t__ regs; int bounce_buf; struct mmc_command* cmd; } ;


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
 int FUNC_0 (int ,unsigned int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct mmc_data*) ;
 int FUNC_6 (struct mmc_host*,int) ;
 int FUNC_7 (struct mmc_data*) ;
 int FUNC_8 (struct mmc_host*,unsigned int) ;
 int FUNC_9 (struct mmc_command*,int*) ;
 struct meson_host* FUNC_10 (struct mmc_host*) ;
 int FUNC_11 (int ,int ,int ,unsigned int) ;
 int FUNC_12 () ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct mmc_host *VAR_16, struct mmc_command *VAR_17)
{
 struct meson_host *VAR_18 = FUNC_10(VAR_16);
 struct mmc_data *VAR_19 = VAR_17->data;
 u32 VAR_20 = 0, VAR_21 = 0;
 unsigned int VAR_22 = 0;


 FUNC_2();

 VAR_18->cmd = VAR_17;

 VAR_20 |= FUNC_0(VAR_1, VAR_17->opcode);
 VAR_20 |= VAR_7;
 VAR_20 |= VAR_5;

 FUNC_9(VAR_17, &VAR_20);


 if (VAR_19) {
  VAR_19->bytes_xfered = 0;
  VAR_20 |= VAR_2;
  VAR_20 |= FUNC_0(VAR_8,
          FUNC_4(FUNC_7(VAR_19)));

  if (FUNC_5(VAR_19)) {
   FUNC_6(VAR_16, VAR_20);
   return;
  }

  if (VAR_19->blocks > 1) {
   VAR_20 |= VAR_0;
   VAR_20 |= FUNC_0(VAR_6,
           VAR_19->blocks);
   FUNC_8(VAR_16, VAR_19->blksz);
  } else {
   VAR_20 |= FUNC_0(VAR_6, VAR_19->blksz);
  }

  VAR_22 = VAR_19->blksz * VAR_19->blocks;
  if (VAR_19->flags & VAR_10) {
   VAR_20 |= VAR_3;
   FUNC_1(VAR_22 > VAR_18->bounce_buf_size);
   FUNC_11(VAR_19->sg, VAR_19->sg_len,
       VAR_18->bounce_buf, VAR_22);
   FUNC_3();
  }

  VAR_21 = VAR_18->bounce_dma_addr & VAR_9;
 } else {
  VAR_20 |= FUNC_0(VAR_8,
          FUNC_4(VAR_15));
 }


 VAR_20 |= VAR_4;
 FUNC_13(VAR_20, VAR_18->regs + VAR_12);
 FUNC_13(VAR_21, VAR_18->regs + VAR_13);
 FUNC_13(0, VAR_18->regs + VAR_14);
 FUNC_12();
 FUNC_13(VAR_17->arg, VAR_18->regs + VAR_11);
}
