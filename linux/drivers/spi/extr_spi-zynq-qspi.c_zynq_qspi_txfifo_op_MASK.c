
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_qspi {unsigned int txbuf; unsigned int tx_bytes; } ;






 int FUNC_0 (int*,unsigned int,unsigned int) ;
 int FUNC_1 (struct zynq_qspi*,unsigned int const,int) ;

__attribute__((used)) static void FUNC_2(struct zynq_qspi *VAR_0, unsigned int VAR_1)
{
 static const unsigned int VAR_2[4] = {
  130, 129,
  128, 131 };
 u32 VAR_3;

 if (VAR_0->txbuf) {
  VAR_3 = 0xffffffff;
  FUNC_0(&VAR_3, VAR_0->txbuf, VAR_1);
  VAR_0->txbuf += VAR_1;
 } else {
  VAR_3 = 0;
 }

 VAR_0->tx_bytes -= VAR_1;
 FUNC_1(VAR_0, VAR_2[VAR_1 - 1], VAR_3);
}
