
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
struct i40e_vf {int vf_id; scalar_t__ num_invalid_msgs; int num_valid_msgs; int vf_states; struct i40e_pf* pf; } ;
struct TYPE_6__ {int asq_last_status; } ;
struct TYPE_4__ {int vf_base_id; } ;
struct i40e_hw {TYPE_3__ aq; TYPE_1__ func_caps; } ;
struct i40e_pf {int num_alloc_vfs; struct i40e_hw hw; TYPE_2__* pdev; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int,int ,...) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int,int ,int ,int *,int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct i40e_vf *VAR_4, u32 VAR_5,
      u32 VAR_6, u8 *VAR_7, u16 VAR_8)
{
 struct i40e_pf *VAR_9;
 struct i40e_hw *VAR_10;
 int VAR_11;
 i40e_status VAR_12;


 if (!VAR_4 || VAR_4->vf_id >= VAR_4->pf->num_alloc_vfs)
  return -VAR_0;

 VAR_9 = VAR_4->pf;
 VAR_10 = &VAR_9->hw;
 VAR_11 = VAR_4->vf_id + VAR_10->func_caps.vf_base_id;


 if (VAR_6) {
  VAR_4->num_invalid_msgs++;
  FUNC_1(&VAR_9->pdev->dev, "VF %d failed opcode %d, retval: %d\n",
    VAR_4->vf_id, VAR_5, VAR_6);
  if (VAR_4->num_invalid_msgs >
      VAR_2) {
   FUNC_0(&VAR_9->pdev->dev,
    "Number of invalid messages exceeded for VF %d\n",
    VAR_4->vf_id);
   FUNC_0(&VAR_9->pdev->dev, "Use PF Control I/F to enable the VF\n");
   FUNC_3(VAR_3, &VAR_4->vf_states);
  }
 } else {
  VAR_4->num_valid_msgs++;

  VAR_4->num_invalid_msgs = 0;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_11, VAR_5, VAR_6,
     VAR_7, VAR_8, ((void*)0));
 if (VAR_12) {
  FUNC_1(&VAR_9->pdev->dev,
    "Unable to send the message to VF %d aq_err %d\n",
    VAR_4->vf_id, VAR_9->hw.aq.asq_last_status);
  return -VAR_1;
 }

 return 0;
}
