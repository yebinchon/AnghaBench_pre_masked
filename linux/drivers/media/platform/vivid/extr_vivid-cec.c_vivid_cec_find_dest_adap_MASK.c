
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vivid_dev {struct cec_adapter** cec_tx_adap; struct cec_adapter* cec_rx_adap; } ;
struct cec_adapter {scalar_t__ is_configured; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct cec_adapter*,int) ;

__attribute__((used)) static bool FUNC_1(struct vivid_dev *VAR_1,
         struct cec_adapter *VAR_2, u8 VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3 >= 0xf)
  return 0;

 if (VAR_2 != VAR_1->cec_rx_adap && VAR_1->cec_rx_adap &&
     VAR_1->cec_rx_adap->is_configured &&
     FUNC_0(VAR_1->cec_rx_adap, VAR_3))
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_1->cec_tx_adap[VAR_4]; VAR_4++) {
  if (VAR_2 == VAR_1->cec_tx_adap[VAR_4])
   continue;
  if (!VAR_1->cec_tx_adap[VAR_4]->is_configured)
   continue;
  if (FUNC_0(VAR_1->cec_tx_adap[VAR_4], VAR_3))
   return 1;
 }
 return 0;
}
