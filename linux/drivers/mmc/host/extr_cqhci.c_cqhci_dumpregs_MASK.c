
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int dummy; } ;
struct cqhci_host {TYPE_1__* ops; struct mmc_host* mmc; } ;
struct TYPE_2__ {int (* dumpregs ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct cqhci_host*,int ) ;
 int FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct cqhci_host *VAR_22)
{
 struct mmc_host *VAR_23 = VAR_22->mmc;

 FUNC_0("============ CQHCI REGISTER DUMP ===========\n");

 FUNC_0("Caps:      0x%08x | Version:  0x%08x\n",
     FUNC_1(VAR_22, VAR_0),
     FUNC_1(VAR_22, VAR_21));
 FUNC_0("Config:    0x%08x | Control:  0x%08x\n",
     FUNC_1(VAR_22, VAR_1),
     FUNC_1(VAR_22, VAR_5));
 FUNC_0("Int stat:  0x%08x | Int enab: 0x%08x\n",
     FUNC_1(VAR_22, VAR_9),
     FUNC_1(VAR_22, VAR_11));
 FUNC_0("Int sig:   0x%08x | Int Coal: 0x%08x\n",
     FUNC_1(VAR_22, VAR_10),
     FUNC_1(VAR_22, VAR_8));
 FUNC_0("TDL base:  0x%08x | TDL up32: 0x%08x\n",
     FUNC_1(VAR_22, VAR_18),
     FUNC_1(VAR_22, VAR_19));
 FUNC_0("Doorbell:  0x%08x | TCN:      0x%08x\n",
     FUNC_1(VAR_22, VAR_17),
     FUNC_1(VAR_22, VAR_16));
 FUNC_0("Dev queue: 0x%08x | Dev Pend: 0x%08x\n",
     FUNC_1(VAR_22, VAR_7),
     FUNC_1(VAR_22, VAR_6));
 FUNC_0("Task clr:  0x%08x | SSC1:     0x%08x\n",
     FUNC_1(VAR_22, VAR_15),
     FUNC_1(VAR_22, VAR_13));
 FUNC_0("SSC2:      0x%08x | DCMD rsp: 0x%08x\n",
     FUNC_1(VAR_22, VAR_14),
     FUNC_1(VAR_22, VAR_3));
 FUNC_0("RED mask:  0x%08x | TERRI:    0x%08x\n",
     FUNC_1(VAR_22, VAR_12),
     FUNC_1(VAR_22, VAR_20));
 FUNC_0("Resp idx:  0x%08x | Resp arg: 0x%08x\n",
     FUNC_1(VAR_22, VAR_4),
     FUNC_1(VAR_22, VAR_2));

 if (VAR_22->ops->dumpregs)
  VAR_22->ops->dumpregs(VAR_23);
 else
  FUNC_0(": ===========================================\n");
}
