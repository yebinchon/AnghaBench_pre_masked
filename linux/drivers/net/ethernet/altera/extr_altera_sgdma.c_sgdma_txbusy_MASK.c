
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_tse_private {int dev; int tx_dma_csr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct altera_tse_private *VAR_2)
{
 int VAR_3 = 0;


 while ((FUNC_0(VAR_2->tx_dma_csr, FUNC_2(VAR_1))
  & VAR_0) && (VAR_3++ < 100))
  FUNC_3(1);

 if (FUNC_0(VAR_2->tx_dma_csr, FUNC_2(VAR_1))
     & VAR_0) {
  FUNC_1(VAR_2->dev, "timeout waiting for tx dma\n");
  return 1;
 }
 return 0;
}
