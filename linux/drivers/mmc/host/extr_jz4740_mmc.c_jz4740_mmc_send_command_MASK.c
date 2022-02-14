
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_command {int flags; int arg; int opcode; TYPE_1__* data; } ;
struct jz4740_mmc_host {int cmdat; scalar_t__ version; scalar_t__ base; scalar_t__ use_dma; struct mmc_command* cmd; } ;
struct TYPE_2__ {int flags; int blocks; int blksz; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;




 int FUNC_0 (struct jz4740_mmc_host*) ;
 int FUNC_1 (struct jz4740_mmc_host*,int) ;
 int FUNC_2 (struct mmc_command*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct jz4740_mmc_host *VAR_19,
 struct mmc_command *VAR_20)
{
 uint32_t VAR_21 = VAR_19->cmdat;

 VAR_19->cmdat &= ~VAR_3;
 FUNC_0(VAR_19);

 VAR_19->cmd = VAR_20;

 if (VAR_20->flags & VAR_18)
  VAR_21 |= VAR_0;

 switch (FUNC_2(VAR_20)) {
 case 130:
 case 131:
  VAR_21 |= VAR_4;
  break;
 case 129:
  VAR_21 |= VAR_5;
  break;
 case 128:
  VAR_21 |= VAR_6;
  break;
 default:
  break;
 }

 if (VAR_20->data) {
  VAR_21 |= VAR_1;
  if (VAR_20->data->flags & VAR_17)
   VAR_21 |= VAR_7;
  if (VAR_19->use_dma) {
   if (VAR_19->version >= VAR_10) {
    FUNC_4(VAR_8 | VAR_9,
           VAR_19->base + VAR_15);
   } else {
    VAR_21 |= VAR_2;
   }
  } else if (VAR_19->version >= VAR_10) {
   FUNC_4(0, VAR_19->base + VAR_15);
  }

  FUNC_5(VAR_20->data->blksz, VAR_19->base + VAR_12);
  FUNC_5(VAR_20->data->blocks, VAR_19->base + VAR_16);
 }

 FUNC_3(VAR_20->opcode, VAR_19->base + VAR_13);
 FUNC_4(VAR_20->arg, VAR_19->base + VAR_11);
 FUNC_4(VAR_21, VAR_19->base + VAR_14);

 FUNC_1(VAR_19, 1);
}
