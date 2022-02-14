
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ calpar0; scalar_t__ calpar1; scalar_t__ ovrbst; scalar_t__ datovr; scalar_t__ diperr; scalar_t__ nosync; scalar_t__ unxfrm; scalar_t__ frmerr; scalar_t__ syncerr; } ;
union cvmx_stxx_int_reg {TYPE_1__ s; } ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void FUNC_1(union cvmx_stxx_int_reg VAR_0, int VAR_1)
{
 if (VAR_0.s.syncerr)
  FUNC_0("SPI%d: STX Interface encountered a fatal error\n",
         VAR_1);
 if (VAR_0.s.frmerr)
  FUNC_0("SPI%d: STX FRMCNT has exceeded STX_DIP_CNT[MAXFRM]\n",
         VAR_1);
 if (VAR_0.s.unxfrm)
  FUNC_0("SPI%d: STX Unexpected framing sequence\n", VAR_1);
 if (VAR_0.s.nosync)
  FUNC_0("SPI%d: STX ERRCNT has exceeded STX_DIP_CNT[MAXDIP]\n",
         VAR_1);
 if (VAR_0.s.diperr)
  FUNC_0("SPI%d: STX DIP2 error on the Spi4 Status channel\n",
         VAR_1);
 if (VAR_0.s.datovr)
  FUNC_0("SPI%d: STX Spi4 FIFO overflow error\n", VAR_1);
 if (VAR_0.s.ovrbst)
  FUNC_0("SPI%d: STX Transmit packet burst too big\n", VAR_1);
 if (VAR_0.s.calpar1)
  FUNC_0("SPI%d: STX Calendar Table Parity Error Bank%d\n",
         VAR_1, 1);
 if (VAR_0.s.calpar0)
  FUNC_0("SPI%d: STX Calendar Table Parity Error Bank%d\n",
         VAR_1, 0);
}
