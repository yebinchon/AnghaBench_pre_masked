
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ftgmac100 {int tx_q_entries; int txdes0_edotr_mask; } ;



__attribute__((used)) static u32 FUNC_0(struct ftgmac100 *VAR_0,
         unsigned int VAR_1)
{
 if (VAR_1 == (VAR_0->tx_q_entries - 1))
  return VAR_0->txdes0_edotr_mask;
 else
  return 0;
}
