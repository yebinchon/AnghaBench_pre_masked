
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_ring {int queue_index; int netdev; TYPE_1__* q_vector; int state; scalar_t__ ch; } ;
struct TYPE_2__ {int v_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct i40e_ring *VAR_1)
{
 int VAR_2;

 if (!VAR_1->q_vector || !VAR_1->netdev || VAR_1->ch)
  return;


 if (FUNC_3(VAR_0, VAR_1->state))
  return;

 VAR_2 = FUNC_0(VAR_1->q_vector->v_idx, -1);
 FUNC_2(VAR_1->netdev, FUNC_1(VAR_2),
       VAR_1->queue_index);
}
