
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxcmci_host {int burstlen; scalar_t__ power_mode; int clock; int cmdat; int * dma; scalar_t__ do_dma; int mmc; } ;
struct mmc_ios {scalar_t__ bus_width; scalar_t__ power_mode; int clock; int vdd; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct mxcmci_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mxcmci_host*,int ) ;
 int FUNC_5 (struct mxcmci_host*,int ) ;
 int FUNC_6 (struct mmc_host*) ;
 scalar_t__ FUNC_7 (struct mxcmci_host*) ;
 int FUNC_8 (struct mxcmci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct mmc_host *VAR_7, struct mmc_ios *VAR_8)
{
 struct mxcmci_host *VAR_9 = FUNC_3(VAR_7);
 int VAR_10, VAR_11;





 if (VAR_8->bus_width == VAR_2)
  VAR_10 = 16;
 else
  VAR_10 = 4;

 if (FUNC_7(VAR_9) && VAR_10 != VAR_9->burstlen) {
  VAR_9->burstlen = VAR_10;
  VAR_11 = FUNC_6(VAR_7);
  if (VAR_11) {
   FUNC_0(FUNC_2(VAR_9->mmc),
    "failed to config DMA channel. Falling back to PIO\n");
   FUNC_1(VAR_9->dma);
   VAR_9->do_dma = 0;
   VAR_9->dma = ((void*)0);
  }
 }

 if (VAR_8->bus_width == VAR_2)
  VAR_9->cmdat |= VAR_0;
 else
  VAR_9->cmdat &= ~VAR_0;

 if (VAR_9->power_mode != VAR_8->power_mode) {
  VAR_9->power_mode = VAR_8->power_mode;
  FUNC_5(VAR_9, VAR_8->vdd);

  if (VAR_8->power_mode == VAR_3)
   VAR_9->cmdat |= VAR_1;
 }

 if (VAR_8->clock) {
  FUNC_4(VAR_9, VAR_8->clock);
  FUNC_8(VAR_9, VAR_5, VAR_4);
 } else {
  FUNC_8(VAR_9, VAR_6, VAR_4);
 }

 VAR_9->clock = VAR_8->clock;
}
