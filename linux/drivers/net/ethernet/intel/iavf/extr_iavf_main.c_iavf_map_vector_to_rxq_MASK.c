
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_ring {int itr_setting; int * vsi; struct iavf_ring* next; struct iavf_q_vector* q_vector; } ;
struct TYPE_2__ {int target_itr; int current_itr; scalar_t__ next_update; int count; struct iavf_ring* ring; } ;
struct iavf_q_vector {TYPE_1__ rx; int reg_idx; int ring_mask; } ;
struct iavf_hw {int dummy; } ;
struct iavf_adapter {int vsi; struct iavf_hw hw; struct iavf_ring* rx_rings; struct iavf_q_vector* q_vectors; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct iavf_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct iavf_adapter *VAR_2, int VAR_3, int VAR_4)
{
 struct iavf_q_vector *VAR_5 = &VAR_2->q_vectors[VAR_3];
 struct iavf_ring *VAR_6 = &VAR_2->rx_rings[VAR_4];
 struct iavf_hw *VAR_7 = &VAR_2->hw;

 VAR_6->q_vector = VAR_5;
 VAR_6->next = VAR_5->rx.ring;
 VAR_6->vsi = &VAR_2->vsi;
 VAR_5->rx.ring = VAR_6;
 VAR_5->rx.count++;
 VAR_5->rx.next_update = VAR_1 + 1;
 VAR_5->rx.target_itr = FUNC_2(VAR_6->itr_setting);
 VAR_5->ring_mask |= FUNC_0(VAR_4);
 FUNC_3(VAR_7, FUNC_1(VAR_0, VAR_5->reg_idx),
      VAR_5->rx.current_itr >> 1);
 VAR_5->rx.current_itr = VAR_5->rx.target_itr;
}
