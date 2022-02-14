
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eth {int tx_int_status_reg; int tx_int_mask_reg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (struct mtk_eth*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct mtk_eth *VAR_7 = VAR_6;

 if (FUNC_2(VAR_7, VAR_1) & VAR_3) {
  if (FUNC_2(VAR_7, VAR_2) & VAR_3)
   FUNC_0(VAR_5, VAR_6);
 }
 if (FUNC_2(VAR_7, VAR_7->tx_int_mask_reg) & VAR_4) {
  if (FUNC_2(VAR_7, VAR_7->tx_int_status_reg) & VAR_4)
   FUNC_1(VAR_5, VAR_6);
 }

 return VAR_0;
}
