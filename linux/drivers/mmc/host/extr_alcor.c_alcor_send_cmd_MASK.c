
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc_command {int opcode; unsigned long arg; unsigned long busy_timeout; int data; } ;
struct alcor_sdmmc_host {int dev; int timeout_work; struct mmc_command* cmd; struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_0 (struct alcor_sdmmc_host*,struct mmc_command*) ;
 int FUNC_1 (struct alcor_pci_priv*,unsigned long,int ) ;
 int FUNC_2 (struct alcor_pci_priv*,int,int ) ;
 int FUNC_3 (int ,char*,int,unsigned long) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (struct alcor_sdmmc_host*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mmc_command*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(struct alcor_sdmmc_host *VAR_9,
      struct mmc_command *VAR_10, bool VAR_11)
{
 struct alcor_pci_priv *VAR_12 = VAR_9->alcor_pci;
 unsigned long VAR_13 = 0;
 u8 VAR_14 = 0;

 VAR_9->cmd = VAR_10;
 FUNC_0(VAR_9, VAR_10);

 FUNC_3(VAR_9->dev, "send CMD. opcode: 0x%02x, arg; 0x%08x\n",
  VAR_10->opcode, VAR_10->arg);
 FUNC_2(VAR_12, VAR_10->opcode | 0x40, VAR_8);
 FUNC_1(VAR_12, VAR_10->arg, VAR_7);

 switch (FUNC_7(VAR_10)) {
 case 132:
  VAR_14 = VAR_3;
  break;
 case 131:
  VAR_14 = VAR_1;
  break;
 case 130:
  VAR_14 = VAR_1 | VAR_5;
  break;
 case 129:
  VAR_14 = VAR_0;
  break;
 case 128:
  VAR_14 = VAR_2;
  break;
 default:
  FUNC_4(VAR_9->dev, "%s: cmd->flag (0x%02x) is not valid\n",
   FUNC_6(FUNC_5(VAR_9)), FUNC_7(VAR_10));
  break;
 }

 if (VAR_11) {
  if (!VAR_10->data && VAR_10->busy_timeout)
   VAR_13 = VAR_10->busy_timeout;
  else
   VAR_13 = 10000;

  FUNC_9(&VAR_9->timeout_work,
          FUNC_8(VAR_13));
 }

 FUNC_3(VAR_9->dev, "xfer ctrl: 0x%02x; timeout: %lu\n", VAR_14, VAR_13);
 FUNC_2(VAR_12, VAR_14 | VAR_4,
     VAR_6);
}
