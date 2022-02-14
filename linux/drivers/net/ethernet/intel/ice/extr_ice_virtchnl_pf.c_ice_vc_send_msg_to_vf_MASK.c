
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_vf {scalar_t__ num_inval_msgs; int vf_id; int num_valid_msgs; int vf_states; struct ice_pf* pf; } ;
struct TYPE_5__ {scalar_t__ sq_last_status; } ;
struct TYPE_6__ {TYPE_2__ mailboxq; } ;
struct ice_pf {TYPE_3__ hw; TYPE_1__* pdev; int num_alloc_vfs; } ;
typedef enum virtchnl_status_code { ____Placeholder_virtchnl_status_code } virtchnl_status_code ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int ,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,int,int,int *,int ,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ice_vf *VAR_5, u32 VAR_6,
        enum virtchnl_status_code VAR_7, u8 *VAR_8, u16 VAR_9)
{
 enum ice_status VAR_10;
 struct ice_pf *VAR_11;


 if (!VAR_5 || VAR_5->vf_id >= VAR_5->pf->num_alloc_vfs)
  return -VAR_0;

 VAR_11 = VAR_5->pf;


 if (VAR_7) {
  VAR_5->num_inval_msgs++;
  FUNC_1(&VAR_11->pdev->dev, "VF %d failed opcode %d, retval: %d\n",
    VAR_5->vf_id, VAR_6, VAR_7);
  if (VAR_5->num_inval_msgs > VAR_3) {
   FUNC_0(&VAR_11->pdev->dev,
    "Number of invalid messages exceeded for VF %d\n",
    VAR_5->vf_id);
   FUNC_0(&VAR_11->pdev->dev, "Use PF Control I/F to enable the VF\n");
   FUNC_3(VAR_4, VAR_5->vf_states);
   return -VAR_1;
  }
 } else {
  VAR_5->num_valid_msgs++;

  VAR_5->num_inval_msgs = 0;
 }

 VAR_10 = FUNC_2(&VAR_11->hw, VAR_5->vf_id, VAR_6, VAR_7,
           VAR_8, VAR_9, ((void*)0));
 if (VAR_10 && VAR_11->hw.mailboxq.sq_last_status != VAR_2) {
  FUNC_1(&VAR_11->pdev->dev,
    "Unable to send the message to VF %d ret %d aq_err %d\n",
    VAR_5->vf_id, VAR_10, VAR_11->hw.mailboxq.sq_last_status);
  return -VAR_1;
 }

 return 0;
}
