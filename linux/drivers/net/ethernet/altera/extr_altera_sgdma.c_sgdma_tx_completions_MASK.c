
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_tse_private {int tx_dma_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct altera_tse_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct altera_tse_private*) ;

u32 FUNC_4(struct altera_tse_private *VAR_2)
{
 u32 VAR_3 = 0;

 if (!FUNC_3(VAR_2) &&
     ((FUNC_0(VAR_2->tx_dma_desc, FUNC_2(VAR_1))
      & VAR_0) == 0) &&
     (FUNC_1(VAR_2))) {
  VAR_3 = 1;
 }

 return VAR_3;
}
