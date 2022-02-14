
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {unsigned int sdcard_irq_mask; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct tmio_mmc_host*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (struct tmio_mmc_host*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct tmio_mmc_host*) ;
 unsigned int FUNC_3 (struct tmio_mmc_host*,int ) ;
 int FUNC_4 (struct tmio_mmc_host*,int ,unsigned int) ;

irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct tmio_mmc_host *VAR_6 = VAR_5;
 unsigned int VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_6, VAR_0);
 VAR_7 = VAR_8 & VAR_3 & ~VAR_6->sdcard_irq_mask;


 FUNC_4(VAR_6, VAR_0, VAR_3);

 if (FUNC_0(VAR_6, VAR_7, VAR_8))
  return VAR_1;
 if (FUNC_1(VAR_6, VAR_7, VAR_8))
  return VAR_1;

 if (FUNC_2(VAR_6))
  return VAR_1;

 return VAR_2;
}
