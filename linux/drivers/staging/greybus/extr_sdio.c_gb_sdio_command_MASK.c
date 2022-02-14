
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mmc_data {int blksz; int blocks; } ;
struct mmc_command {int error; void** resp; int arg; int opcode; } ;
struct gb_sdio_host {int connection; int mmc; TYPE_1__* mrq; } ;
struct gb_sdio_command_response {int * resp; } ;
struct gb_sdio_command_request {int cmd_flags; int cmd_type; void* data_blksz; void* data_blocks; int cmd_arg; int cmd; int member_0; } ;
typedef int response ;
typedef int request ;
struct TYPE_2__ {struct mmc_data* data; } ;


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
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,struct gb_sdio_command_request*,int,struct gb_sdio_command_response*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct mmc_command*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mmc_command*) ;

__attribute__((used)) static int FUNC_8(struct gb_sdio_host *VAR_11, struct mmc_command *VAR_12)
{
 struct gb_sdio_command_request VAR_13 = {0};
 struct gb_sdio_command_response VAR_14;
 struct mmc_data *VAR_15 = VAR_11->mrq->data;
 u8 VAR_16;
 u8 VAR_17;
 int VAR_18;
 int VAR_19;

 switch (FUNC_7(VAR_12)) {
 case 132:
  VAR_16 = VAR_5;
  break;
 case 131:
  VAR_16 = VAR_7;
  break;
 case 130:
  VAR_16 = VAR_6;
  break;
 case 129:
  VAR_16 = VAR_8;
  break;
 case 128:
  VAR_16 = VAR_9;
  break;
 default:
  FUNC_2(FUNC_6(VAR_11->mmc), "cmd flag invalid 0x%04x\n",
   FUNC_7(VAR_12));
  VAR_19 = -VAR_0;
  goto out;
 }

 switch (FUNC_5(VAR_12)) {
 case 134:
  VAR_17 = VAR_3;
  break;
 case 133:
  VAR_17 = VAR_4;
  break;
 case 136:
  VAR_17 = VAR_1;
  break;
 case 135:
  VAR_17 = VAR_2;
  break;
 default:
  FUNC_2(FUNC_6(VAR_11->mmc), "cmd type invalid 0x%04x\n",
   FUNC_5(VAR_12));
  VAR_19 = -VAR_0;
  goto out;
 }

 VAR_13.cmd = VAR_12->opcode;
 VAR_13.cmd_flags = VAR_16;
 VAR_13.cmd_type = VAR_17;
 VAR_13.cmd_arg = FUNC_1(VAR_12->arg);

 if (VAR_15) {
  VAR_13.data_blocks = FUNC_0(VAR_15->blocks);
  VAR_13.data_blksz = FUNC_0(VAR_15->blksz);
 }

 VAR_19 = FUNC_3(VAR_11->connection, VAR_10,
    &VAR_13, sizeof(VAR_13), &VAR_14,
    sizeof(VAR_14));
 if (VAR_19 < 0)
  goto out;


 if (VAR_16 == VAR_5)
  goto out;


 if (VAR_16 & VAR_8)
  for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
   VAR_12->resp[VAR_18] = FUNC_4(VAR_14.resp[VAR_18]);
 else
  VAR_12->resp[0] = FUNC_4(VAR_14.resp[0]);

out:
 VAR_12->error = VAR_19;
 return VAR_19;
}
