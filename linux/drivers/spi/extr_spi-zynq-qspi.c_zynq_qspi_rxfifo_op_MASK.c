
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zynq_qspi {scalar_t__ rx_bytes; scalar_t__ rxbuf; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,unsigned int) ;
 int FUNC_1 (struct zynq_qspi*,int ) ;

__attribute__((used)) static void FUNC_2(struct zynq_qspi *VAR_1, unsigned int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);

 if (VAR_1->rxbuf) {
  FUNC_0(VAR_1->rxbuf, ((u8 *)&VAR_3) + 4 - VAR_2, VAR_2);
  VAR_1->rxbuf += VAR_2;
 }

 VAR_1->rx_bytes -= VAR_2;
 if (VAR_1->rx_bytes < 0)
  VAR_1->rx_bytes = 0;
}
