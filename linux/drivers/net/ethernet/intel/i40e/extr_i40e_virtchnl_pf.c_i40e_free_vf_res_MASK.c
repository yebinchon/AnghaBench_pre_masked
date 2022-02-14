
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vf {scalar_t__ num_queue_pairs; int lan_vsi_idx; int num_tc; int vf_id; int vf_states; TYPE_1__* ch; scalar_t__ adq_enabled; scalar_t__ num_mac; scalar_t__ lan_vsi_id; struct i40e_pf* pf; } ;
struct TYPE_4__ {int num_msix_vectors_vf; } ;
struct i40e_hw {TYPE_2__ func_caps; } ;
struct i40e_pf {struct i40e_hw hw; int * vsi; int queues_left; } ;
struct TYPE_3__ {size_t vsi_idx; scalar_t__ vsi_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct i40e_hw*,int,int) ;

__attribute__((used)) static void FUNC_8(struct i40e_vf *VAR_7)
{
 struct i40e_pf *VAR_8 = VAR_7->pf;
 struct i40e_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;




 FUNC_4(VAR_2, &VAR_7->vf_states);




 if (VAR_7->num_queue_pairs > VAR_0) {
  VAR_8->queues_left += VAR_7->num_queue_pairs -
       VAR_0;
 }


 if (VAR_7->lan_vsi_idx) {
  FUNC_6(VAR_8->vsi[VAR_7->lan_vsi_idx]);
  VAR_7->lan_vsi_idx = 0;
  VAR_7->lan_vsi_id = 0;
  VAR_7->num_mac = 0;
 }


 if (VAR_7->adq_enabled && VAR_7->ch[0].vsi_idx) {
  for (VAR_13 = 0; VAR_13 < VAR_7->num_tc; VAR_13++) {




   if (VAR_13)
    FUNC_6(VAR_8->vsi[VAR_7->ch[VAR_13].vsi_idx]);
   VAR_7->ch[VAR_13].vsi_idx = 0;
   VAR_7->ch[VAR_13].vsi_id = 0;
  }
 }
 VAR_14 = VAR_8->hw.func_caps.num_msix_vectors_vf;


 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {

  if (0 == VAR_12)
   VAR_10 = FUNC_0(VAR_7->vf_id);
  else
   VAR_10 = FUNC_1(((VAR_14 - 1) *
            (VAR_7->vf_id))
           + (VAR_12 - 1));
  FUNC_7(VAR_9, VAR_10, VAR_1);
  FUNC_5(VAR_9);
 }


 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {

  if (0 == VAR_12)
   VAR_10 = FUNC_2(VAR_7->vf_id);
  else
   VAR_10 = FUNC_3(((VAR_14 - 1) *
            (VAR_7->vf_id))
           + (VAR_12 - 1));
  VAR_11 = (VAR_6 |
         VAR_5);
  FUNC_7(VAR_9, VAR_10, VAR_11);
  FUNC_5(VAR_9);
 }

 VAR_7->num_queue_pairs = 0;
 FUNC_4(VAR_3, &VAR_7->vf_states);
 FUNC_4(VAR_4, &VAR_7->vf_states);
}
