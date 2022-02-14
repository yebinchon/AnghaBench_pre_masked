
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int pg_tcs; int pfc_tcs; } ;
struct TYPE_13__ {int pfc_mode_enable; TYPE_5__ num_tcs; } ;
struct TYPE_11__ {int pfc_mode_enable; } ;
struct TYPE_9__ {int requested_mode; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_2__ fc; TYPE_1__ mac; } ;
struct ixgbe_adapter {int hw_tcs; int num_q_vectors; int flags; int pdev; TYPE_7__* ring_feature; TYPE_6__ dcb_cfg; TYPE_4__ temp_dcb_cfg; int last_lfc_mode; TYPE_3__ hw; int netdev; } ;
struct TYPE_14__ {int limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_4)
{
 int VAR_5;


 if (!FUNC_1(VAR_4))
  return;







 if (VAR_4->hw_tcs > 1) {
  FUNC_0("Number of DCB TCs exceeds number of available queues. Disabling DCB support.\n");
  FUNC_4(VAR_4->netdev);

  if (VAR_4->hw.mac.type == VAR_3)
   VAR_4->hw.fc.requested_mode = VAR_4->last_lfc_mode;

  VAR_4->flags &= ~VAR_0;
  VAR_4->temp_dcb_cfg.pfc_mode_enable = 0;
  VAR_4->dcb_cfg.pfc_mode_enable = 0;
 }

 VAR_4->hw_tcs = 0;
 VAR_4->dcb_cfg.num_tcs.pg_tcs = 1;
 VAR_4->dcb_cfg.num_tcs.pfc_tcs = 1;


 FUNC_0("Disabling SR-IOV support\n");
 FUNC_2(VAR_4);


 FUNC_0("Disabling RSS support\n");
 VAR_4->ring_feature[VAR_2].limit = 1;




 FUNC_3(VAR_4);
 VAR_4->num_q_vectors = 1;

 VAR_5 = FUNC_5(VAR_4->pdev);
 if (VAR_5)
  FUNC_0("Failed to allocate MSI interrupt, falling back to legacy. Error: %d\n",
      VAR_5);
 else
  VAR_4->flags |= VAR_1;
}
