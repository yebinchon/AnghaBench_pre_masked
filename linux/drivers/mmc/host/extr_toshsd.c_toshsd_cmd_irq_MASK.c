
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct toshsd_host {scalar_t__ data; TYPE_1__* pdev; scalar_t__ ioaddr; struct mmc_command* cmd; } ;
struct mmc_command {int flags; int error; int opcode; scalar_t__ resp; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct toshsd_host*) ;

__attribute__((used)) static void FUNC_4(struct toshsd_host *VAR_10)
{
 struct mmc_command *VAR_11 = VAR_10->cmd;
 u8 *VAR_12;
 u16 VAR_13;

 if (!VAR_10->cmd) {
  FUNC_1(&VAR_10->pdev->dev, "Spurious CMD irq\n");
  return;
 }
 VAR_12 = (u8 *)VAR_11->resp;
 VAR_10->cmd = ((void*)0);

 if (VAR_11->flags & VAR_1 && VAR_11->flags & VAR_0) {

  VAR_12[12] = 0xff;
  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_2);
  VAR_12[13] = VAR_13 & 0xff;
  VAR_12[14] = VAR_13 >> 8;
  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_3);
  VAR_12[15] = VAR_13 & 0xff;
  VAR_12[8] = VAR_13 >> 8;
  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_4);
  VAR_12[9] = VAR_13 & 0xff;
  VAR_12[10] = VAR_13 >> 8;
  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_5);
  VAR_12[11] = VAR_13 & 0xff;
  VAR_12[4] = VAR_13 >> 8;
  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_6);
  VAR_12[5] = VAR_13 & 0xff;
  VAR_12[6] = VAR_13 >> 8;
  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_7);
  VAR_12[7] = VAR_13 & 0xff;
  VAR_12[0] = VAR_13 >> 8;
  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_8);
  VAR_12[1] = VAR_13 & 0xff;
  VAR_12[2] = VAR_13 >> 8;
  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_9);
  VAR_12[3] = VAR_13 & 0xff;
 } else if (VAR_11->flags & VAR_1) {

  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_2);
  VAR_12[0] = VAR_13 & 0xff;
  VAR_12[1] = VAR_13 >> 8;
  VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_3);
  VAR_12[2] = VAR_13 & 0xff;
  VAR_12[3] = VAR_13 >> 8;
 }

 FUNC_0(&VAR_10->pdev->dev, "Command IRQ complete %d %d %x\n",
  VAR_11->opcode, VAR_11->error, VAR_11->flags);



 if (VAR_10->data)
  return;

 FUNC_3(VAR_10);
}
