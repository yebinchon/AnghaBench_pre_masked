
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* ring; } ;
struct TYPE_7__ {TYPE_1__* ring; } ;
struct igc_q_vector {int set_itr; int eims_value; TYPE_4__ tx; TYPE_2__ rx; struct igc_adapter* adapter; } ;
struct TYPE_10__ {int type; } ;
struct igc_hw {TYPE_5__ mac; } ;
struct igc_adapter {int eims_enable_mask; struct igc_hw hw; } ;
struct TYPE_8__ {int reg_idx; } ;
struct TYPE_6__ {int reg_idx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;

 int FUNC_2 (struct igc_hw*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct igc_q_vector *VAR_1, int VAR_2)
{
 struct igc_adapter *VAR_3 = VAR_1->adapter;
 struct igc_hw *VAR_4 = &VAR_3->hw;
 int VAR_5 = VAR_0;
 int VAR_6 = VAR_0;

 if (VAR_1->rx.ring)
  VAR_5 = VAR_1->rx.ring->reg_idx;
 if (VAR_1->tx.ring)
  VAR_6 = VAR_1->tx.ring->reg_idx;

 switch (VAR_4->mac.type) {
 case 128:
  if (VAR_5 > VAR_0)
   FUNC_2(VAR_4, VAR_2,
           VAR_5 >> 1,
           (VAR_5 & 0x1) << 4);
  if (VAR_6 > VAR_0)
   FUNC_2(VAR_4, VAR_2,
           VAR_6 >> 1,
           ((VAR_6 & 0x1) << 4) + 8);
  VAR_1->eims_value = FUNC_0(VAR_2);
  break;
 default:
  FUNC_1(VAR_4->mac.type != 128, "Wrong MAC type\n");
  break;
 }


 VAR_3->eims_enable_mask |= VAR_1->eims_value;


 VAR_1->set_itr = 1;
}
