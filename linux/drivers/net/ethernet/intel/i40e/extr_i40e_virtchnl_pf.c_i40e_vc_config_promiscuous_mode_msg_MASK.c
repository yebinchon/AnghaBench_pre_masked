
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_promisc_info {int flags; int vsi_id; } ;
struct i40e_vf {int vf_id; int vf_states; int vf_caps; struct i40e_pf* pf; } ;
struct i40e_pf {TYPE_1__* pdev; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 (struct i40e_vf*,int ,int,int) ;
 int FUNC_3 (struct i40e_vf*,int ) ;
 int FUNC_4 (struct i40e_vf*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct i40e_vf *VAR_9, u8 *VAR_10)
{
 struct virtchnl_promisc_info *VAR_11 =
     (struct virtchnl_promisc_info *)VAR_10;
 struct i40e_pf *VAR_12 = VAR_9->pf;
 i40e_status VAR_13 = 0;
 bool VAR_14 = 0;
 bool VAR_15 = 0;

 if (!FUNC_7(VAR_4, &VAR_9->vf_states)) {
  VAR_13 = VAR_2;
  goto err_out;
 }
 if (!FUNC_7(VAR_7, &VAR_9->vf_caps)) {
  FUNC_0(&VAR_12->pdev->dev,
   "Unprivileged VF %d is attempting to configure promiscuous mode\n",
   VAR_9->vf_id);




  VAR_13 = 0;
  goto err_out;
 }

 if (VAR_11->flags > VAR_3) {
  VAR_13 = VAR_2;
  goto err_out;
 }

 if (!FUNC_3(VAR_9, VAR_11->vsi_id)) {
  VAR_13 = VAR_2;
  goto err_out;
 }


 if (VAR_11->flags & VAR_0)
  VAR_14 = 1;

 if (VAR_11->flags & VAR_1)
  VAR_15 = 1;
 VAR_13 = FUNC_2(VAR_9, VAR_11->vsi_id, VAR_14,
       VAR_15);
 if (VAR_13)
  goto err_out;

 if (VAR_14) {
  if (!FUNC_6(VAR_5,
          &VAR_9->vf_states))
   FUNC_1(&VAR_12->pdev->dev,
     "VF %d successfully set multicast promiscuous mode\n",
     VAR_9->vf_id);
 } else if (FUNC_5(VAR_5,
          &VAR_9->vf_states))
  FUNC_1(&VAR_12->pdev->dev,
    "VF %d successfully unset multicast promiscuous mode\n",
    VAR_9->vf_id);

 if (VAR_15) {
  if (!FUNC_6(VAR_6,
          &VAR_9->vf_states))
   FUNC_1(&VAR_12->pdev->dev,
     "VF %d successfully set unicast promiscuous mode\n",
     VAR_9->vf_id);
 } else if (FUNC_5(VAR_6,
          &VAR_9->vf_states))
  FUNC_1(&VAR_12->pdev->dev,
    "VF %d successfully unset unicast promiscuous mode\n",
    VAR_9->vf_id);

err_out:

 return FUNC_4(VAR_9,
           VAR_8,
           VAR_13);
}
