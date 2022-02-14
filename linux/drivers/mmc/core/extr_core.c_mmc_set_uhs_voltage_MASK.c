
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_host {TYPE_1__* ops; } ;
struct mmc_command {int flags; int* resp; scalar_t__ arg; int opcode; } ;
struct TYPE_2__ {scalar_t__ (* card_busy ) (struct mmc_host*) ;int start_signal_voltage_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;
 scalar_t__ FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int ) ;
 int FUNC_5 (struct mmc_host*,struct mmc_command*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (struct mmc_host*) ;
 scalar_t__ FUNC_9 (struct mmc_host*) ;

int FUNC_10(struct mmc_host *VAR_7, u32 VAR_8)
{
 struct mmc_command VAR_9 = {};
 int VAR_10 = 0;





 if (!VAR_7->ops->start_signal_voltage_switch)
  return -VAR_2;
 if (!VAR_7->ops->card_busy)
  FUNC_7("%s: cannot verify signal voltage switch\n",
   FUNC_3(VAR_7));

 VAR_9.opcode = VAR_6;
 VAR_9.arg = 0;
 VAR_9.flags = VAR_4 | VAR_3;

 VAR_10 = FUNC_5(VAR_7, &VAR_9, 0);
 if (VAR_10)
  return VAR_10;

 if (!FUNC_1(VAR_7) && (VAR_9.resp[0] & VAR_5))
  return -VAR_1;





 FUNC_0(1);
 if (VAR_7->ops->card_busy && !VAR_7->ops->card_busy(VAR_7)) {
  VAR_10 = -VAR_0;
  goto power_cycle;
 }

 if (FUNC_2(VAR_7)) {




  VAR_10 = -VAR_0;
  goto power_cycle;
 }


 FUNC_0(1);





 if (VAR_7->ops->card_busy && VAR_7->ops->card_busy(VAR_7))
  VAR_10 = -VAR_0;

power_cycle:
 if (VAR_10) {
  FUNC_6("%s: Signal voltage switch failed, "
   "power cycling card\n", FUNC_3(VAR_7));
  FUNC_4(VAR_7, VAR_8);
 }

 return VAR_10;
}
