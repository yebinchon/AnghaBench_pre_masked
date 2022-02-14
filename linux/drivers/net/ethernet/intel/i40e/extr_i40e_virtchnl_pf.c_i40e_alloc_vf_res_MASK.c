
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_vf {scalar_t__ num_req_queues; size_t lan_vsi_idx; int adq_enabled; int num_tc; int num_queue_pairs; int vf_states; int vf_caps; scalar_t__ trusted; int vf_id; struct i40e_pf* pf; } ;
struct i40e_pf {scalar_t__ queues_left; scalar_t__ num_vf_qps; TYPE_2__* pdev; TYPE_1__** vsi; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ alloc_queue_pairs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct i40e_vf*,int) ;
 int FUNC_3 (struct i40e_vf*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct i40e_vf *VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_4->pf;
 int VAR_6 = 0;
 int VAR_7, VAR_8;

 if (VAR_4->num_req_queues &&
     VAR_4->num_req_queues <= VAR_5->queues_left + VAR_0)
  VAR_5->num_vf_qps = VAR_4->num_req_queues;
 else
  VAR_5->num_vf_qps = VAR_0;


 VAR_7 = FUNC_2(VAR_4, 0);
 if (VAR_7)
  goto error_alloc;
 VAR_6 += VAR_5->vsi[VAR_4->lan_vsi_idx]->alloc_queue_pairs;


 if (VAR_4->adq_enabled) {
  if (VAR_5->queues_left >=
      (VAR_1 - VAR_0)) {

   for (VAR_8 = 1; VAR_8 < VAR_4->num_tc; VAR_8++) {
    VAR_7 = FUNC_2(VAR_4, VAR_8);
    if (VAR_7)
     goto error_alloc;
   }

   VAR_6 = VAR_1;
  } else {
   FUNC_1(&VAR_5->pdev->dev, "VF %d: Not enough queues to allocate, disabling ADq\n",
     VAR_4->vf_id);
   VAR_4->adq_enabled = 0;
  }
 }






 if (VAR_6 > VAR_0)
  VAR_5->queues_left -=
   VAR_6 - VAR_0;

 if (VAR_4->trusted)
  FUNC_4(VAR_3, &VAR_4->vf_caps);
 else
  FUNC_0(VAR_3, &VAR_4->vf_caps);




 VAR_4->num_queue_pairs = VAR_6;


 FUNC_4(VAR_2, &VAR_4->vf_states);

error_alloc:
 if (VAR_7)
  FUNC_3(VAR_4);

 return VAR_7;
}
