
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmio_mmc_host {int sdcard_irq_setbit_mask; int bus_shift; scalar_t__ ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct tmio_mmc_host *VAR_2,
      int VAR_3, u32 VAR_4)
{
 if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
  VAR_4 |= VAR_2->sdcard_irq_setbit_mask;

 FUNC_0(VAR_4 & 0xffff, VAR_2->ctl + (VAR_3 << VAR_2->bus_shift));
 FUNC_0(VAR_4 >> 16, VAR_2->ctl + ((VAR_3 + 2) << VAR_2->bus_shift));
}
