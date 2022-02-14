
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmio_mmc_host {int sdcard_irq_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tmio_mmc_host*,int ,int) ;

void FUNC_1(struct tmio_mmc_host *VAR_2, u32 VAR_3)
{
 VAR_2->sdcard_irq_mask &= ~(VAR_3 & VAR_1);
 FUNC_0(VAR_2, VAR_0, VAR_2->sdcard_irq_mask);
}
