
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshsd_host {scalar_t__ ioaddr; struct mmc_command* cmd; TYPE_1__* pdev; struct mmc_data* data; } ;
struct mmc_data {int blocks; int flags; } ;
struct mmc_command {int opcode; int* resp; int arg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct mmc_command*) ;
 int FUNC_5 (struct toshsd_host*) ;

__attribute__((used)) static void FUNC_6(struct toshsd_host *VAR_18, struct mmc_command *VAR_19)
{
 struct mmc_data *VAR_20 = VAR_18->data;
 int VAR_21 = VAR_19->opcode;

 FUNC_0(&VAR_18->pdev->dev, "Command opcode: %d\n", VAR_19->opcode);

 if (VAR_19->opcode == VAR_3) {
  FUNC_2(VAR_17,
     VAR_18->ioaddr + VAR_15);

  VAR_19->resp[0] = VAR_19->opcode;
  VAR_19->resp[1] = 0;
  VAR_19->resp[2] = 0;
  VAR_19->resp[3] = 0;

  FUNC_5(VAR_18);
  return;
 }

 switch (FUNC_4(VAR_19)) {
 case 132:
  VAR_21 |= VAR_12;
  break;

 case 131:
  VAR_21 |= VAR_8;
  break;
 case 130:
  VAR_21 |= VAR_9;
  break;
 case 129:
  VAR_21 |= VAR_10;
  break;
 case 128:
  VAR_21 |= VAR_11;
  break;

 default:
  FUNC_1(&VAR_18->pdev->dev, "Unknown response type %d\n",
   FUNC_4(VAR_19));
  break;
 }

 VAR_18->cmd = VAR_19;

 if (VAR_19->opcode == VAR_0)
  VAR_21 |= VAR_14;

 if (VAR_19->opcode == VAR_2)
  VAR_21 |= (3 << 8);

 if (VAR_20) {
  VAR_21 |= VAR_6;

  if (VAR_20->blocks > 1) {
   FUNC_2(VAR_16,
      VAR_18->ioaddr + VAR_15);
   VAR_21 |= VAR_7;
  }

  if (VAR_20->flags & VAR_1)
   VAR_21 |= VAR_13;


 }


 FUNC_3(VAR_19->arg, VAR_18->ioaddr + VAR_4);
 FUNC_2(VAR_21, VAR_18->ioaddr + VAR_5);
}
