
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int get_link_status; } ;
struct igc_hw {TYPE_1__ mac; } ;
struct igc_adapter {int num_q_vectors; int watchdog_task; int netdev; TYPE_2__** q_vector; scalar_t__ msix_entries; int state; struct igc_hw hw; } ;
struct TYPE_4__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct igc_adapter*) ;
 int FUNC_3 (struct igc_adapter*) ;
 int FUNC_4 (struct igc_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct igc_adapter *VAR_2)
{
 struct igc_hw *VAR_3 = &VAR_2->hw;
 int VAR_4 = 0;


 FUNC_2(VAR_2);

 FUNC_0(VAR_1, &VAR_2->state);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_q_vectors; VAR_4++)
  FUNC_5(&VAR_2->q_vector[VAR_4]->napi);

 if (VAR_2->msix_entries)
  FUNC_3(VAR_2);
 else
  FUNC_1(VAR_2->q_vector[0], 0);


 FUNC_7(VAR_0);
 FUNC_4(VAR_2);

 FUNC_6(VAR_2->netdev);


 VAR_3->mac.get_link_status = 1;
 FUNC_8(&VAR_2->watchdog_task);
}
