
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmio_mmc_host {int bus_shift; } ;
struct renesas_sdhi {scalar_t__ scc_ctl; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct tmio_mmc_host *VAR_0,
      struct renesas_sdhi *VAR_1,
      int VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_3, VAR_1->scc_ctl + (VAR_2 << VAR_0->bus_shift));
}
