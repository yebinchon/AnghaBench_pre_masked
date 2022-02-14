
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40e_vf {int num_tc; size_t lan_vsi_idx; int lan_vsi_id; int vf_id; TYPE_1__* ch; scalar_t__ adq_enabled; struct i40e_pf* pf; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {TYPE_2__** vsi; struct i40e_hw hw; } ;
struct TYPE_4__ {int alloc_queue_pairs; } ;
struct TYPE_3__ {int num_qps; int vsi_id; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i40e_vf*,int,int) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct i40e_vf *VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_1->pf;
 struct i40e_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4, VAR_5 = 0;
 u32 VAR_6, VAR_7 = 1;
 u16 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 if (VAR_1->adq_enabled)
  VAR_7 = VAR_1->num_tc;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (VAR_1->adq_enabled) {
   VAR_6 = VAR_1->ch[VAR_10].num_qps;
   VAR_8 = VAR_1->ch[VAR_10].vsi_id;
  } else {
   VAR_6 = VAR_2->vsi[VAR_1->lan_vsi_idx]->alloc_queue_pairs;
   VAR_8 = VAR_1->lan_vsi_id;
  }

  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
   VAR_9 = FUNC_1(VAR_1, VAR_8, VAR_11);

   VAR_4 = (VAR_9 & VAR_0);
   FUNC_2(VAR_3, FUNC_0(VAR_5, VAR_1->vf_id),
        VAR_4);
   VAR_5++;
  }
 }
}
