
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynq_qspi {int tx_bytes; scalar_t__ regs; scalar_t__ txbuf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct zynq_qspi*,int) ;

__attribute__((used)) static void FUNC_3(struct zynq_qspi *VAR_1, int VAR_2,
          bool VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_5 = VAR_1->tx_bytes;
 if (VAR_5 && VAR_5 < 4) {




  if (VAR_3)
   FUNC_2(VAR_1, VAR_5);

  return;
 }

 VAR_4 = VAR_5 / 4;
 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;

 if (VAR_1->txbuf) {
  FUNC_0(VAR_1->regs + VAR_0,
         VAR_1->txbuf, VAR_4);
  VAR_1->txbuf += VAR_4 * 4;
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   FUNC_1(0, VAR_1->regs +
       VAR_0);
 }

 VAR_1->tx_bytes -= VAR_4 * 4;
}
