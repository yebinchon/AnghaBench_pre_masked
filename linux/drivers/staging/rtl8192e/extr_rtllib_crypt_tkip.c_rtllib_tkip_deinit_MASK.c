
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_tkip_data {int rx_tfm_arc4; int rx_tfm_michael; int tx_tfm_arc4; int tx_tfm_michael; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct rtllib_tkip_data *VAR_1 = VAR_0;

 if (VAR_1) {
  FUNC_0(VAR_1->tx_tfm_michael);
  FUNC_1(VAR_1->tx_tfm_arc4);
  FUNC_0(VAR_1->rx_tfm_michael);
  FUNC_1(VAR_1->rx_tfm_arc4);
 }
 FUNC_2(VAR_0);
}
