
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_qspi {int bytes_to_transfer; int txbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct zynqmp_qspi*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct zynqmp_qspi *VAR_1, int VAR_2)
{
 u32 VAR_3 = 0, VAR_4;

 while ((VAR_1->bytes_to_transfer > 0) && (VAR_3 < VAR_2)) {
  FUNC_0(&VAR_4, VAR_1->txbuf, 4);
  FUNC_1(VAR_1, VAR_0, VAR_4);

  if (VAR_1->bytes_to_transfer >= 4) {
   VAR_1->txbuf += 4;
   VAR_1->bytes_to_transfer -= 4;
  } else {
   VAR_1->txbuf += VAR_1->bytes_to_transfer;
   VAR_1->bytes_to_transfer = 0;
  }
  VAR_3++;
 }
}
