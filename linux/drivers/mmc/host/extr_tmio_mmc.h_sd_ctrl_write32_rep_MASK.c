
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmio_mmc_host {int bus_shift; scalar_t__ ctl; } ;


 int FUNC_0 (scalar_t__,int const*,int) ;

__attribute__((used)) static inline void FUNC_1(struct tmio_mmc_host *VAR_0, int VAR_1,
           const u32 *VAR_2, int VAR_3)
{
 FUNC_0(VAR_0->ctl + (VAR_1 << VAR_0->bus_shift), VAR_2, VAR_3);
}
