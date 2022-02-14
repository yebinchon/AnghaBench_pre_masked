
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ consume_idx; scalar_t__ count; } ;
struct emac_rx_queue {TYPE_1__ rrd; } ;
struct emac_rrd {int * word; } ;
struct emac_adapter {int netdev; int rrd_size; } ;


 int * FUNC_0 (struct emac_rx_queue*,int ,scalar_t__) ;
 int FUNC_1 (struct emac_rrd*) ;
 int FUNC_2 (struct emac_rrd*) ;
 int FUNC_3 (struct emac_rrd*,int ) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct emac_adapter *VAR_0,
    struct emac_rx_queue *VAR_1,
    struct emac_rrd *VAR_2)
{
 u32 *VAR_3 = FUNC_0(VAR_1, VAR_0->rrd_size, VAR_1->rrd.consume_idx);

 VAR_2->word[3] = *(VAR_3 + 3);

 if (!FUNC_2(VAR_2))
  return 0;

 VAR_2->word[4] = 0;
 VAR_2->word[5] = 0;

 VAR_2->word[0] = *(VAR_3++);
 VAR_2->word[1] = *(VAR_3++);
 VAR_2->word[2] = *(VAR_3++);

 if (FUNC_5(FUNC_1(VAR_2) != 1)) {
  FUNC_4(VAR_0->netdev,
      "error: multi-RFD not support yet! nor:%lu\n",
      FUNC_1(VAR_2));
 }


 FUNC_3(VAR_2, 0);
 *VAR_3 = VAR_2->word[3];

 if (++VAR_1->rrd.consume_idx == VAR_1->rrd.count)
  VAR_1->rrd.consume_idx = 0;

 return 1;
}
