
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int last_produce_idx; } ;
struct emac_tx_queue {TYPE_1__ tpd; } ;
struct emac_adapter {int tpd_size; } ;


 int * FUNC_0 (struct emac_tx_queue*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct emac_adapter *VAR_1,
      struct emac_tx_queue *VAR_2)
{
 u32 *VAR_3 =
  FUNC_0(VAR_2, VAR_1->tpd_size, VAR_2->tpd.last_produce_idx);
 u32 VAR_4;

 VAR_4 = *(VAR_3 + 1);
 VAR_4 |= VAR_0;
 *(VAR_3 + 1) = VAR_4;
}
