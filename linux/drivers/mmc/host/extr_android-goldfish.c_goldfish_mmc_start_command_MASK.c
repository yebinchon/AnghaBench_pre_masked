
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_command {int opcode; int flags; int arg; } ;
struct goldfish_mmc_host {scalar_t__ bus_mode; TYPE_1__* data; struct mmc_command* cmd; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (struct goldfish_mmc_host*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct mmc_command*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct goldfish_mmc_host*) ;
 int FUNC_5 (struct mmc_command*) ;

__attribute__((used)) static void
FUNC_6(struct goldfish_mmc_host *VAR_12, struct mmc_command *VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 VAR_12->cmd = VAR_13;

 VAR_15 = 0;
 VAR_16 = 0;


 switch (FUNC_5(VAR_13)) {
 case 132:
  break;
 case 131:
 case 130:

  VAR_15 = 1;
  break;
 case 129:
  VAR_15 = 2;
  break;
 case 128:
  VAR_15 = 3;
  break;
 default:
  FUNC_1(FUNC_3(FUNC_4(VAR_12)),
   "Invalid response type: %04x\n", FUNC_5(VAR_13));
  break;
 }

 if (FUNC_2(VAR_13) == VAR_3)
  VAR_16 = VAR_9;
 else if (FUNC_2(VAR_13) == VAR_4)
  VAR_16 = VAR_10;
 else if (FUNC_2(VAR_13) == VAR_5)
  VAR_16 = VAR_11;
 else
  VAR_16 = VAR_8;

 VAR_14 = VAR_13->opcode | (VAR_15 << 8) | (VAR_16 << 12);

 if (VAR_12->bus_mode == VAR_1)
  VAR_14 |= 1 << 6;

 if (VAR_13->flags & VAR_7)
  VAR_14 |= 1 << 11;

 if (VAR_12->data && !(VAR_12->data->flags & VAR_6))
  VAR_14 |= 1 << 15;

 FUNC_0(VAR_12, VAR_0, VAR_13->arg);
 FUNC_0(VAR_12, VAR_2, VAR_14);
}
