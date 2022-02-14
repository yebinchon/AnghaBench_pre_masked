
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_mmc_host {int wait_dma; int int_sum; int sdio_imask; int mmc; int lock; struct mmc_request* mrq; } ;
struct mmc_request {int dummy; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int ,char*,struct mmc_request*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sunxi_mmc_host*,int ) ;
 int FUNC_3 (int ,struct mmc_request*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sunxi_mmc_host*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct sunxi_mmc_host*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_11, void *VAR_12)
{
 struct sunxi_mmc_host *VAR_13 = VAR_12;
 struct mmc_request *VAR_14;
 u32 VAR_15, VAR_16;
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 irqreturn_t VAR_19 = VAR_0;

 FUNC_6(&VAR_13->lock);

 VAR_16 = FUNC_2(VAR_13, VAR_1);
 VAR_15 = FUNC_2(VAR_13, VAR_3);

 FUNC_0(FUNC_1(VAR_13->mmc), "irq: rq %p mi %08x idi %08x\n",
  VAR_13->mrq, VAR_15, VAR_16);

 VAR_14 = VAR_13->mrq;
 if (VAR_14) {
  if (VAR_16 & VAR_6)
   VAR_13->wait_dma = 0;

  VAR_13->int_sum |= VAR_15;


  if ((VAR_13->int_sum & VAR_9) &&
    !(VAR_13->int_sum & VAR_5))
   FUNC_5(VAR_13, VAR_2,
       VAR_13->sdio_imask | VAR_5);

  else if (VAR_13->int_sum & VAR_8)
   VAR_17 = 1;
  else if ((VAR_13->int_sum & VAR_7) &&
    !VAR_13->wait_dma)
   VAR_17 = 1;
 }

 if (VAR_15 & VAR_10)
  VAR_18 = 1;

 FUNC_5(VAR_13, VAR_4, VAR_15);
 FUNC_5(VAR_13, VAR_1, VAR_16);

 if (VAR_17)
  VAR_19 = FUNC_8(VAR_13);

 FUNC_7(&VAR_13->lock);

 if (VAR_17 && VAR_19 == VAR_0)
  FUNC_3(VAR_13->mmc, VAR_14);

 if (VAR_18)
  FUNC_4(VAR_13->mmc);

 return VAR_19;
}
