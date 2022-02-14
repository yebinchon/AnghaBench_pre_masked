
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct igb_q_vector {int napi; } ;
struct TYPE_3__ {int doosync; } ;
struct TYPE_4__ {int get_link_status; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igb_adapter {int watchdog_timer; int state; TYPE_1__ stats; int reset_task; struct e1000_hw hw; struct igb_q_vector** q_vector; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct igb_adapter*) ;
 int FUNC_1 (struct igb_q_vector*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct igb_adapter *VAR_11 = VAR_10;
 struct igb_q_vector *VAR_12 = VAR_11->q_vector[0];
 struct e1000_hw *VAR_13 = &VAR_11->hw;

 u32 VAR_14 = FUNC_4(VAR_0);

 FUNC_1(VAR_12);

 if (VAR_14 & VAR_2)
  FUNC_5(&VAR_11->reset_task);

 if (VAR_14 & VAR_1) {

  VAR_11->stats.doosync++;
 }

 if (VAR_14 & (VAR_4 | VAR_3)) {
  VAR_13->mac.get_link_status = 1;
  if (!FUNC_6(VAR_7, &VAR_11->state))
   FUNC_2(&VAR_11->watchdog_timer, VAR_8 + 1);
 }

 if (VAR_14 & VAR_5)
  FUNC_0(VAR_11);

 FUNC_3(&VAR_12->napi);

 return VAR_6;
}
