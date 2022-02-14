
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct atmel_mci_slot {int sdio_irq; struct atmel_mci* host; } ;
struct atmel_mci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atmel_mci*,int ,int ) ;
 struct atmel_mci_slot* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_2, int VAR_3)
{
 struct atmel_mci_slot *VAR_4 = FUNC_1(VAR_2);
 struct atmel_mci *VAR_5 = VAR_4->host;

 if (VAR_3)
  FUNC_0(VAR_5, VAR_1, VAR_4->sdio_irq);
 else
  FUNC_0(VAR_5, VAR_0, VAR_4->sdio_irq);
}
