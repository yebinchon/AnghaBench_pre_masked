
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct TYPE_5__ {int Opcode; } ;
struct TYPE_6__ {scalar_t__* raw8; TYPE_2__ hdr; } ;
struct ngene_command {int in_len; int out_len; TYPE_3__ cmd; } ;
struct ngene {int cmd_done; int BootFirmware; int PAFWInterfaceBuffer; scalar_t__* ngenetohost; int prev_cmd; int cmd_wq; int cmd_lock; scalar_t__* CmdDoneByte; scalar_t__* FWInterfaceBuffer; int icounts; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct ngene*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct ngene *VAR_12, struct ngene_command *VAR_13)
{
 struct device *VAR_14 = &VAR_12->pci_dev->dev;
 int VAR_15;
 u8 *VAR_16;

 VAR_12->cmd_done = 0;

 if (VAR_13->cmd.hdr.Opcode == VAR_1) {
  VAR_12->BootFirmware = 1;
  VAR_12->icounts = FUNC_4(VAR_9);
  FUNC_5(0, VAR_5);
  FUNC_5(0, VAR_6);
  FUNC_5(0, VAR_10);
  FUNC_5(0, VAR_11);
  FUNC_5(0, VAR_7);
  FUNC_5(0, VAR_8);
 } else if (VAR_13->cmd.hdr.Opcode == VAR_0) {
  u64 VAR_17 = VAR_12->PAFWInterfaceBuffer;

  FUNC_5(VAR_17 & 0xffffffff, VAR_5);
  FUNC_5(VAR_17 >> 32, VAR_6);
  FUNC_5((VAR_17 + 256) & 0xffffffff, VAR_10);
  FUNC_5((VAR_17 + 256) >> 32, VAR_11);
  FUNC_5((VAR_17 + 512) & 0xffffffff, VAR_7);
  FUNC_5((VAR_17 + 512) >> 32, VAR_8);
 }

 FUNC_2(VAR_12->FWInterfaceBuffer, VAR_13->cmd.raw8, VAR_13->in_len + 2);

 if (VAR_12->BootFirmware)
  FUNC_3(VAR_3, VAR_13->cmd.raw8, VAR_13->in_len + 2);

 FUNC_6(&VAR_12->cmd_lock);
 VAR_16 = VAR_12->ngenetohost + VAR_13->out_len;
 if (!VAR_13->out_len)
  VAR_16++;
 *VAR_16 = 0;
 VAR_12->ngenetohost[0] = 0;
 VAR_12->ngenetohost[1] = 0;
 VAR_12->CmdDoneByte = VAR_16;
 FUNC_7(&VAR_12->cmd_lock);


 FUNC_5(1, VAR_2);

 VAR_15 = FUNC_8(VAR_12->cmd_wq, VAR_12->cmd_done == 1, 2 * VAR_4);
 if (!VAR_15) {


  FUNC_0(VAR_14, "Command timeout cmd=%02x prev=%02x\n",
   VAR_13->cmd.hdr.Opcode, VAR_12->prev_cmd);
  FUNC_1(VAR_12);
  return -1;
 }
 if (VAR_13->cmd.hdr.Opcode == VAR_0)
  VAR_12->BootFirmware = 0;

 VAR_12->prev_cmd = VAR_13->cmd.hdr.Opcode;

 if (!VAR_13->out_len)
  return 0;

 FUNC_2(VAR_13->cmd.raw8, VAR_12->ngenetohost, VAR_13->out_len);

 return 0;
}
