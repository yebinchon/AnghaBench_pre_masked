
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iavf_vsi {TYPE_3__* back; } ;
struct TYPE_5__ {TYPE_1__* ring; } ;
struct iavf_q_vector {int arm_wb_state; int reg_idx; TYPE_2__ tx; } ;
struct TYPE_6__ {int hw; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iavf_vsi *VAR_3,
      struct iavf_q_vector *VAR_4)
{
 u16 VAR_5 = VAR_4->tx.ring[0].flags;
 u32 VAR_6;

 if (!(VAR_5 & VAR_0))
  return;

 if (VAR_4->arm_wb_state)
  return;

 VAR_6 = VAR_2 |
       VAR_1;

 FUNC_1(&VAR_3->back->hw,
      FUNC_0(VAR_4->reg_idx), VAR_6);
 VAR_4->arm_wb_state = 1;
}
