
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40e_vf {int num_tc; size_t lan_vsi_idx; int lan_vsi_id; TYPE_1__* ch; scalar_t__ adq_enabled; struct i40e_pf* pf; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {TYPE_2__** vsi; struct i40e_hw hw; } ;
struct TYPE_4__ {int alloc_queue_pairs; } ;
struct TYPE_3__ {int num_qps; int vsi_id; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct i40e_vf*,int,int) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct i40e_vf *VAR_0)
{
 struct i40e_pf *VAR_1 = VAR_0->pf;
 struct i40e_hw *VAR_2 = &VAR_1->hw;
 u32 VAR_3, VAR_4 = 1;
 u16 VAR_5, VAR_6;
 int VAR_7, VAR_8;

 if (VAR_0->adq_enabled)
  VAR_4 = VAR_0->num_tc;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_0->adq_enabled) {
   VAR_6 = VAR_0->ch[VAR_7].num_qps;
   VAR_5 = VAR_0->ch[VAR_7].vsi_id;
  } else {
   VAR_6 = VAR_1->vsi[VAR_0->lan_vsi_idx]->alloc_queue_pairs;
   VAR_5 = VAR_0->lan_vsi_id;
  }

  for (VAR_8 = 0; VAR_8 < 7; VAR_8++) {
   if (VAR_8 * 2 >= VAR_6) {

    VAR_3 = 0x07FF07FF;
   } else {
    u16 VAR_9 = FUNC_1(VAR_0,
          VAR_5,
          VAR_8 * 2);
    VAR_3 = VAR_9;
    VAR_9 = FUNC_1(VAR_0, VAR_5,
             (VAR_8 * 2) + 1);
    VAR_3 |= VAR_9 << 16;
   }
   FUNC_2(VAR_2,
       FUNC_0(VAR_8, VAR_5),
       VAR_3);
  }
 }
}
