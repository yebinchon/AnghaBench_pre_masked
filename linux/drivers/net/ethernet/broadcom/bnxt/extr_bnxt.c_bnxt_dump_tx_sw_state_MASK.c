
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fw_ring_id; } ;
struct bnxt_tx_ring_info {int tx_cons; int tx_prod; TYPE_2__ tx_ring_struct; } ;
struct bnxt_napi {int index; TYPE_1__* bp; struct bnxt_tx_ring_info* tx_ring; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt_napi *VAR_0)
{
 struct bnxt_tx_ring_info *VAR_1 = VAR_0->tx_ring;
 int VAR_2 = VAR_0->index;

 if (!VAR_1)
  return;

 FUNC_0(VAR_0->bp->dev, "[%d]: tx{fw_ring: %d prod: %x cons: %x}\n",
      VAR_2, VAR_1->tx_ring_struct.fw_ring_id, VAR_1->tx_prod,
      VAR_1->tx_cons);
}
