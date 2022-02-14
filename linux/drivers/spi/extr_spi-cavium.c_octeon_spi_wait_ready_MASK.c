
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ busy; } ;
union cvmx_mpi_sts {int u64; TYPE_1__ s; } ;
struct octeon_spi {scalar_t__ register_base; } ;


 scalar_t__ FUNC_0 (struct octeon_spi*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct octeon_spi *VAR_0)
{
 union cvmx_mpi_sts VAR_1;
 unsigned int VAR_2 = 0;

 do {
  if (VAR_2++)
   FUNC_1(500);
  VAR_1.u64 = FUNC_2(VAR_0->register_base + FUNC_0(VAR_0));
 } while (VAR_1.s.busy);
}
