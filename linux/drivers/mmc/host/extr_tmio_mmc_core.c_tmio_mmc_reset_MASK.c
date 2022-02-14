
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int sdio_irq_mask; TYPE_1__* pdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_4)
{

 FUNC_0(VAR_4, VAR_0, 0x0000);
 FUNC_1(10000, 11000);
 FUNC_0(VAR_4, VAR_0, 0x0001);
 FUNC_1(10000, 11000);

 if (VAR_4->pdata->flags & VAR_3) {
  FUNC_0(VAR_4, VAR_1, VAR_4->sdio_irq_mask);
  FUNC_0(VAR_4, VAR_2, 0x0001);
 }
}
