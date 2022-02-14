
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ last_produce_idx; scalar_t__ produce_idx; scalar_t__ count; } ;
struct emac_tx_queue {TYPE_1__ tpd; } ;
struct emac_tpd {int * word; } ;
struct emac_adapter {int tpd_size; } ;


 int * FUNC_0 (struct emac_tx_queue*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct emac_adapter *VAR_0,
          struct emac_tx_queue *VAR_1, struct emac_tpd *VAR_2)
{
 u32 *VAR_3;

 VAR_1->tpd.last_produce_idx = VAR_1->tpd.produce_idx;
 VAR_3 = FUNC_0(VAR_1, VAR_0->tpd_size, VAR_1->tpd.produce_idx);

 if (++VAR_1->tpd.produce_idx == VAR_1->tpd.count)
  VAR_1->tpd.produce_idx = 0;

 *(VAR_3++) = VAR_2->word[0];
 *(VAR_3++) = VAR_2->word[1];
 *(VAR_3++) = VAR_2->word[2];
 *VAR_3 = VAR_2->word[3];
}
