
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynq_qspi {int rx_bytes; int tx_bytes; scalar_t__ regs; scalar_t__ rxbuf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct zynq_qspi*,int) ;

__attribute__((used)) static void FUNC_3(struct zynq_qspi *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = VAR_1->rx_bytes - VAR_1->tx_bytes;
 VAR_3 = VAR_4 / 4;
 if (VAR_3 > VAR_2)
  VAR_3 = VAR_2;
 if (VAR_1->rxbuf) {
  FUNC_0(VAR_1->regs + VAR_0,
        VAR_1->rxbuf, VAR_3);
  VAR_1->rxbuf += VAR_3 * 4;
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   FUNC_1(VAR_1->regs + VAR_0);
 }
 VAR_1->rx_bytes -= VAR_3 * 4;
 VAR_4 -= VAR_3 * 4;

 if (VAR_4 && VAR_4 < 4 && VAR_3 < VAR_2)
  FUNC_2(VAR_1, VAR_4);
}
