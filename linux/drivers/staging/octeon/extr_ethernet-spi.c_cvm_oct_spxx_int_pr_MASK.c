
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prtnxa; scalar_t__ abnorm; scalar_t__ spiovr; scalar_t__ clserr; scalar_t__ drwnng; scalar_t__ rsverr; scalar_t__ tpaovr; scalar_t__ diperr; scalar_t__ syncerr; scalar_t__ calerr; scalar_t__ spf; } ;
union cvmx_spxx_int_reg {TYPE_1__ s; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(union cvmx_spxx_int_reg VAR_0, int VAR_1)
{
 if (VAR_0.s.spf)
  FUNC_0("SPI%d: SRX Spi4 interface down\n", VAR_1);
 if (VAR_0.s.calerr)
  FUNC_0("SPI%d: SRX Spi4 Calendar table parity error\n", VAR_1);
 if (VAR_0.s.syncerr)
  FUNC_0("SPI%d: SRX Consecutive Spi4 DIP4 errors have exceeded SPX_ERR_CTL[ERRCNT]\n",
         VAR_1);
 if (VAR_0.s.diperr)
  FUNC_0("SPI%d: SRX Spi4 DIP4 error\n", VAR_1);
 if (VAR_0.s.tpaovr)
  FUNC_0("SPI%d: SRX Selected port has hit TPA overflow\n",
         VAR_1);
 if (VAR_0.s.rsverr)
  FUNC_0("SPI%d: SRX Spi4 reserved control word detected\n",
         VAR_1);
 if (VAR_0.s.drwnng)
  FUNC_0("SPI%d: SRX Spi4 receive FIFO drowning/overflow\n",
         VAR_1);
 if (VAR_0.s.clserr)
  FUNC_0("SPI%d: SRX Spi4 packet closed on non-16B alignment without EOP\n",
         VAR_1);
 if (VAR_0.s.spiovr)
  FUNC_0("SPI%d: SRX Spi4 async FIFO overflow\n", VAR_1);
 if (VAR_0.s.abnorm)
  FUNC_0("SPI%d: SRX Abnormal packet termination (ERR bit)\n",
         VAR_1);
 if (VAR_0.s.prtnxa)
  FUNC_0("SPI%d: SRX Port out of range\n", VAR_1);
}
