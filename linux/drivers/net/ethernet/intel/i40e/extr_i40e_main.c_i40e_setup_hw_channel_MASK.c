
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_vsi {scalar_t__ next_base_queue; } ;
struct i40e_pf {TYPE_1__* pdev; } ;
struct i40e_channel {int initialized; scalar_t__ num_queue_pairs; int stat_counter_idx; int vsi_number; int seid; int type; scalar_t__ base_queue; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct i40e_pf*,int ,struct i40e_channel*) ;
 int FUNC_3 (struct i40e_pf*,struct i40e_vsi*,struct i40e_channel*) ;

__attribute__((used)) static inline int FUNC_4(struct i40e_pf *VAR_0,
     struct i40e_vsi *VAR_1,
     struct i40e_channel *VAR_2,
     u16 VAR_3, u8 VAR_4)
{
 int VAR_5;

 VAR_2->initialized = 0;
 VAR_2->base_queue = VAR_1->next_base_queue;
 VAR_2->type = VAR_4;


 VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_2);
 if (VAR_5) {
  FUNC_1(&VAR_0->pdev->dev,
    "failed to add_channel using uplink_seid %u\n",
    VAR_3);
  return VAR_5;
 }


 VAR_2->initialized = 1;


 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_5) {
  FUNC_1(&VAR_0->pdev->dev,
    "failed to configure TX rings for channel %u\n",
    VAR_2->seid);
  return VAR_5;
 }


 VAR_1->next_base_queue = VAR_1->next_base_queue + VAR_2->num_queue_pairs;
 FUNC_0(&VAR_0->pdev->dev,
  "Added channel: vsi_seid %u, vsi_number %u, stat_counter_idx %u, num_queue_pairs %u, pf->next_base_queue %d\n",
  VAR_2->seid, VAR_2->vsi_number, VAR_2->stat_counter_idx,
  VAR_2->num_queue_pairs,
  VAR_1->next_base_queue);
 return VAR_5;
}
