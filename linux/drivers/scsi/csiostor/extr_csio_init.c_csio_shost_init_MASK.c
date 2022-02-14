
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct csio_lnode {int dev_num; } ;
struct TYPE_6__ {int max_ssns; } ;
struct csio_hw {TYPE_2__* pdev; struct csio_lnode* rln; TYPE_1__ fres_info; } ;
struct Scsi_Host {int host_no; int this_id; int unique_id; int max_cmd_len; int transportt; int max_lun; int max_id; int can_queue; } ;
struct TYPE_8__ {void* cmd_per_lun; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct csio_lnode*) ;
 scalar_t__ FUNC_1 (struct csio_lnode*,struct csio_hw*,struct csio_lnode*) ;
 void* VAR_7 ;
 int FUNC_2 (struct csio_lnode*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct Scsi_Host*,struct device*,struct device*) ;
 struct Scsi_Host* FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (struct Scsi_Host*) ;
 struct csio_lnode* FUNC_7 (struct Scsi_Host*) ;
 int VAR_8 ;

struct csio_lnode *
FUNC_8(struct csio_hw *VAR_9, struct device *VAR_10,
    bool VAR_11, struct csio_lnode *VAR_12)
{
 struct Scsi_Host *VAR_13 = ((void*)0);
 struct csio_lnode *VAR_14;

 VAR_3.cmd_per_lun = VAR_7;
 VAR_4.cmd_per_lun = VAR_7;





 if (VAR_10 == &VAR_9->pdev->dev)
  VAR_13 = FUNC_5(
    &VAR_3,
    sizeof(struct csio_lnode));
 else
  VAR_13 = FUNC_5(
    &VAR_4,
    sizeof(struct csio_lnode));

 if (!VAR_13)
  goto err;

 VAR_14 = FUNC_7(VAR_13);
 FUNC_2(VAR_14, 0, sizeof(struct csio_lnode));


 VAR_14->dev_num = (VAR_13->host_no << 16);

 VAR_13->can_queue = VAR_1;
 VAR_13->this_id = -1;
 VAR_13->unique_id = VAR_13->host_no;
 VAR_13->max_cmd_len = 16;
 VAR_13->max_id = FUNC_3(VAR_8, VAR_2,
         VAR_9->fres_info.max_ssns);
 VAR_13->max_lun = VAR_0;
 if (VAR_10 == &VAR_9->pdev->dev)
  VAR_13->transportt = VAR_5;
 else
  VAR_13->transportt = VAR_6;


 if (!VAR_9->rln)
  VAR_9->rln = VAR_14;


 if (FUNC_1(VAR_14, VAR_9, VAR_12))
  goto err_shost_put;

 if (FUNC_4(VAR_13, VAR_10, &VAR_9->pdev->dev))
  goto err_lnode_exit;

 return VAR_14;

err_lnode_exit:
 FUNC_0(VAR_14);
err_shost_put:
 FUNC_6(VAR_13);
err:
 return ((void*)0);
}
