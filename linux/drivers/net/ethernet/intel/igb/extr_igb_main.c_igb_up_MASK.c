
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int eee_disable; } ;
struct TYPE_7__ {TYPE_2__ _82575; } ;
struct TYPE_5__ {int get_link_status; } ;
struct e1000_hw {TYPE_3__ dev_spec; TYPE_1__ mac; } ;
struct igb_adapter {int num_q_vectors; int flags; int eee_advert; int watchdog_task; int netdev; scalar_t__ vfs_allocated_count; TYPE_4__** q_vector; int state; struct e1000_hw hw; } ;
struct TYPE_8__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(struct igb_adapter *VAR_9)
{
 struct e1000_hw *VAR_10 = &VAR_9->hw;
 int VAR_11;


 FUNC_2(VAR_9);

 FUNC_0(VAR_8, &VAR_9->state);

 for (VAR_11 = 0; VAR_11 < VAR_9->num_q_vectors; VAR_11++)
  FUNC_5(&(VAR_9->q_vector[VAR_11]->napi));

 if (VAR_9->flags & VAR_5)
  FUNC_3(VAR_9);
 else
  FUNC_1(VAR_9->q_vector[0], 0);


 FUNC_7(VAR_3);
 FUNC_7(VAR_2);
 FUNC_4(VAR_9);


 if (VAR_9->vfs_allocated_count) {
  u32 VAR_12 = FUNC_7(VAR_0);

  VAR_12 |= VAR_1;
  FUNC_9(VAR_0, VAR_12);
 }

 FUNC_6(VAR_9->netdev);


 VAR_10->mac.get_link_status = 1;
 FUNC_8(&VAR_9->watchdog_task);

 if ((VAR_9->flags & VAR_4) &&
     (!VAR_10->dev_spec._82575.eee_disable))
  VAR_9->eee_advert = VAR_7 | VAR_6;

 return 0;
}
