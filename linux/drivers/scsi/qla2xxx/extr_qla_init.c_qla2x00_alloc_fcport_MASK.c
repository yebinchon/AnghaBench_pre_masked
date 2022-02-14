
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct ct_sns_pkt {int dummy; } ;
struct TYPE_17__ {TYPE_3__* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
typedef int gfp_t ;
struct TYPE_16__ {int ct_sns; int ct_sns_dma; } ;
struct TYPE_18__ {int logout_on_delete; int list; int gnl_entry; int reg_work; int del_work; TYPE_4__ ct_desc; int chip_reset; int login_retry; int deleted; int fw_login_state; int disc_state; int fp_speed; int supported_classes; int loop_id; int port_type; TYPE_5__* vha; } ;
typedef TYPE_6__ fc_port_t ;
struct TYPE_15__ {TYPE_2__* base_qpair; int login_retry_count; TYPE_1__* pdev; } ;
struct TYPE_14__ {int chip_reset; } ;
struct TYPE_13__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 TYPE_6__* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,TYPE_5__*,int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int VAR_10 ;

fc_port_t *
FUNC_7(scsi_qla_host_t *VAR_11, gfp_t VAR_12)
{
 fc_port_t *VAR_13;

 VAR_13 = FUNC_4(sizeof(fc_port_t), VAR_12);
 if (!VAR_13)
  return ((void*)0);

 VAR_13->ct_desc.ct_sns = FUNC_2(&VAR_11->hw->pdev->dev,
  sizeof(struct ct_sns_pkt), &VAR_13->ct_desc.ct_sns_dma,
  VAR_12);
 if (!VAR_13->ct_desc.ct_sns) {
  FUNC_5(VAR_8, VAR_11, 0xd049,
      "Failed to allocate ct_sns request.\n");
  FUNC_3(VAR_13);
  return ((void*)0);
 }


 VAR_13->vha = VAR_11;
 VAR_13->port_type = VAR_3;
 VAR_13->loop_id = VAR_5;
 FUNC_6(VAR_13, VAR_2);
 VAR_13->supported_classes = VAR_4;
 VAR_13->fp_speed = VAR_6;

 VAR_13->disc_state = VAR_0;
 VAR_13->fw_login_state = VAR_1;
 VAR_13->deleted = VAR_7;
 VAR_13->login_retry = VAR_11->hw->login_retry_count;
 VAR_13->chip_reset = VAR_11->hw->base_qpair->chip_reset;
 VAR_13->logout_on_delete = 1;

 if (!VAR_13->ct_desc.ct_sns) {
  FUNC_5(VAR_8, VAR_11, 0xd049,
      "Failed to allocate ct_sns request.\n");
  FUNC_3(VAR_13);
  return ((void*)0);
 }

 FUNC_1(&VAR_13->del_work, VAR_9);
 FUNC_1(&VAR_13->reg_work, VAR_10);
 FUNC_0(&VAR_13->gnl_entry);
 FUNC_0(&VAR_13->list);

 return VAR_13;
}
