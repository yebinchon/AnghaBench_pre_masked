
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct virtchnl_vf_res_request {scalar_t__ num_queue_pairs; } ;
struct i40e_vf {scalar_t__ num_queue_pairs; scalar_t__ num_req_queues; int vf_id; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {scalar_t__ queues_left; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,scalar_t__) ;
 int FUNC_1 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct i40e_vf*,int) ;
 int FUNC_3 (struct i40e_vf*) ;
 int FUNC_4 (struct i40e_vf*,int ,int ,scalar_t__*,int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct i40e_vf *VAR_4, u8 *VAR_5)
{
 struct virtchnl_vf_res_request *VAR_6 =
  (struct virtchnl_vf_res_request *)VAR_5;
 u16 VAR_7 = VAR_6->num_queue_pairs;
 u8 VAR_8 = VAR_4->num_queue_pairs;
 struct i40e_pf *VAR_9 = VAR_4->pf;

 if (!FUNC_5(VAR_2, &VAR_4->vf_states))
  return -VAR_0;

 if (VAR_7 > VAR_1) {
  FUNC_0(&VAR_9->pdev->dev,
   "VF %d tried to request more than %d queues.\n",
   VAR_4->vf_id,
   VAR_1);
  VAR_6->num_queue_pairs = VAR_1;
 } else if (VAR_7 - VAR_8 > VAR_9->queues_left) {
  FUNC_1(&VAR_9->pdev->dev,
    "VF %d requested %d more queues, but only %d left.\n",
    VAR_4->vf_id,
    VAR_7 - VAR_8,
    VAR_9->queues_left);
  VAR_6->num_queue_pairs = VAR_9->queues_left + VAR_8;
 } else {

  VAR_4->num_req_queues = VAR_7;
  FUNC_3(VAR_4);
  FUNC_2(VAR_4, 0);
  return 0;
 }

 return FUNC_4(VAR_4, VAR_3, 0,
          (u8 *)VAR_6, sizeof(*VAR_6));
}
