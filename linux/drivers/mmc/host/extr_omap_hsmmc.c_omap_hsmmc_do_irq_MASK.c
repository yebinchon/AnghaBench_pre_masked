
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_hsmmc_host {TYPE_2__* mrq; scalar_t__ cmd; int base; int mmc; scalar_t__ response_busy; struct mmc_data* data; } ;
struct mmc_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sbc; } ;
struct TYPE_3__ {int error; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct omap_hsmmc_host*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct omap_hsmmc_host*,scalar_t__) ;
 int FUNC_7 (struct omap_hsmmc_host*,int) ;
 int FUNC_8 (struct omap_hsmmc_host*,struct mmc_data*) ;

__attribute__((used)) static void FUNC_9(struct omap_hsmmc_host *VAR_20, int VAR_21)
{
 struct mmc_data *VAR_22;
 int VAR_23 = 0, VAR_24 = 0;
 int VAR_25 = 0;

 VAR_22 = VAR_20->data;
 FUNC_3(FUNC_5(VAR_20->mmc), "IRQ Status is %x\n", VAR_21);

 if (VAR_21 & VAR_16) {
  FUNC_7(VAR_20, VAR_21);

  if (VAR_21 & (VAR_11 | VAR_8 | VAR_10))
   VAR_23 = 1;
  if (VAR_20->data || VAR_20->response_busy) {
   VAR_24 = !VAR_23;
   VAR_20->response_busy = 0;
  }
  if (VAR_21 & (VAR_11 | VAR_14))
   FUNC_4(VAR_20, -VAR_17, VAR_23);
  else if (VAR_21 & (VAR_8 | VAR_12 | VAR_13 | VAR_10 |
       VAR_7))
   FUNC_4(VAR_20, -VAR_15, VAR_23);

  if (VAR_21 & VAR_3) {
   u32 VAR_26;
   VAR_26 = FUNC_0(VAR_20->base, VAR_0);
   if (!(VAR_26 & VAR_5) && VAR_20->mrq->sbc) {
    VAR_23 = 1;
    if (VAR_26 & VAR_6)
     VAR_25 = -VAR_17;
    else if (VAR_26 & (VAR_1 | VAR_2 | VAR_4))
     VAR_25 = -VAR_15;
    VAR_20->mrq->sbc->error = VAR_25;
    FUNC_4(VAR_20, VAR_25, VAR_23);
   }
   FUNC_2(FUNC_5(VAR_20->mmc), "AC12 err: 0x%x\n", VAR_26);
  }
 }

 FUNC_1(VAR_20->base, VAR_18, VAR_21);
 if (VAR_23 || ((VAR_21 & VAR_9) && VAR_20->cmd))
  FUNC_6(VAR_20, VAR_20->cmd);
 if ((VAR_24 || (VAR_21 & VAR_19)) && VAR_20->mrq)
  FUNC_8(VAR_20, VAR_22);
}
