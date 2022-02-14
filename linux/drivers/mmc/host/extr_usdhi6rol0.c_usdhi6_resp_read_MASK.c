
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usdhi6_host {int irq_status; int mmc; TYPE_1__* mrq; } ;
struct mmc_command {int* resp; scalar_t__ opcode; } ;
struct TYPE_2__ {struct mmc_command* cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_command*) ;
 int FUNC_4 (struct usdhi6_host*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct usdhi6_host *VAR_7)
{
 struct mmc_command *VAR_8 = VAR_7->mrq->cmd;
 u32 *VAR_9 = VAR_8->resp, VAR_10 = 0;
 int VAR_11;
 if (FUNC_3(VAR_8) == VAR_2)
  return;

 if (!(VAR_7->irq_status & VAR_4)) {
  FUNC_1(FUNC_2(VAR_7->mmc),
   "CMD%d: response expected but is missing!\n", VAR_8->opcode);
  return;
 }

 if (FUNC_3(VAR_8) & VAR_1)
  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   if (VAR_11)
    VAR_9[3 - VAR_11] = VAR_10 >> 24;
   VAR_10 = FUNC_4(VAR_7, VAR_5 + VAR_11 * 8);
   VAR_9[3 - VAR_11] |= VAR_10 << 8;
  }
 else if (VAR_8->opcode == VAR_0 ||
   VAR_8->opcode == VAR_3)

  VAR_9[0] = FUNC_4(VAR_7, VAR_6);
 else
  VAR_9[0] = FUNC_4(VAR_7, VAR_5);

 FUNC_0(FUNC_2(VAR_7->mmc), "Response 0x%x\n", VAR_9[0]);
}
