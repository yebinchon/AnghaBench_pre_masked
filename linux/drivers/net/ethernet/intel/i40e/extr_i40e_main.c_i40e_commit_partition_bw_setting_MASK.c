
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_9__ {int asq_last_status; } ;
struct TYPE_11__ {int partition_id; TYPE_1__ aq; } ;
struct i40e_pf {TYPE_3__ hw; TYPE_2__* pdev; } ;
typedef int nvm_word ;
typedef scalar_t__ i40e_status ;
typedef enum i40e_admin_queue_err { ____Placeholder_i40e_admin_queue_err } i40e_admin_queue_err ;
struct TYPE_10__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int,int,int *,int,int *) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,int,int,int *,int,int ,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;
 int FUNC_7 (int) ;

i40e_status FUNC_8(struct i40e_pf *VAR_4)
{

 enum i40e_admin_queue_err VAR_5;
 i40e_status VAR_6;
 u16 VAR_7;

 if (VAR_4->hw.partition_id != 1) {
  FUNC_0(&VAR_4->pdev->dev,
    "Commit BW only works on partition 1! This is partition %d",
    VAR_4->hw.partition_id);
  VAR_6 = VAR_0;
  goto bw_commit_out;
 }


 VAR_6 = FUNC_1(&VAR_4->hw, VAR_1);
 VAR_5 = VAR_4->hw.aq.asq_last_status;
 if (VAR_6) {
  FUNC_0(&VAR_4->pdev->dev,
    "Cannot acquire NVM for read access, err %s aq_err %s\n",
    FUNC_6(&VAR_4->hw, VAR_6),
    FUNC_3(&VAR_4->hw, VAR_5));
  goto bw_commit_out;
 }


 VAR_6 = FUNC_2(&VAR_4->hw,
          VAR_3,
          0x10, sizeof(VAR_7), &VAR_7,
          0, ((void*)0));



 VAR_5 = VAR_4->hw.aq.asq_last_status;
 FUNC_5(&VAR_4->hw);
 if (VAR_6) {
  FUNC_0(&VAR_4->pdev->dev, "NVM read error, err %s aq_err %s\n",
    FUNC_6(&VAR_4->hw, VAR_6),
    FUNC_3(&VAR_4->hw, VAR_5));
  goto bw_commit_out;
 }


 FUNC_7(50);


 VAR_6 = FUNC_1(&VAR_4->hw, VAR_2);
 VAR_5 = VAR_4->hw.aq.asq_last_status;
 if (VAR_6) {
  FUNC_0(&VAR_4->pdev->dev,
    "Cannot acquire NVM for write access, err %s aq_err %s\n",
    FUNC_6(&VAR_4->hw, VAR_6),
    FUNC_3(&VAR_4->hw, VAR_5));
  goto bw_commit_out;
 }




 VAR_6 = FUNC_4(&VAR_4->hw,
     VAR_3,
     0x10, sizeof(VAR_7),
     &VAR_7, 1, 0, ((void*)0));



 VAR_5 = VAR_4->hw.aq.asq_last_status;
 FUNC_5(&VAR_4->hw);
 if (VAR_6)
  FUNC_0(&VAR_4->pdev->dev,
    "BW settings NOT SAVED, err %s aq_err %s\n",
    FUNC_6(&VAR_4->hw, VAR_6),
    FUNC_3(&VAR_4->hw, VAR_5));
bw_commit_out:

 return VAR_6;
}
