
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct be_req_ue_recovery {int dummy; } ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_9__ {int ue2sr; int ue2rp; } ;
struct TYPE_10__ {TYPE_3__ resp; } ;
struct be_cmd_resp_set_features {TYPE_4__ parameter; } ;
struct TYPE_7__ {void* uer; } ;
struct TYPE_8__ {TYPE_1__ req; } ;
struct be_cmd_req_set_features {TYPE_2__ parameter; void* parameter_len; void* features; int hdr; } ;
struct TYPE_11__ {int recovery_supported; void* ue_to_reset_time; void* ue_to_poll_time; } ;
struct be_adapter {int mcc_lock; TYPE_6__* pdev; TYPE_5__ error_recovery; } ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (struct be_mcc_wrb*) ;
 void* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct be_mcc_wrb* FUNC_9 (struct be_adapter*) ;

int FUNC_10(struct be_adapter *VAR_7)
{
 struct be_cmd_resp_set_features *VAR_8;
 struct be_cmd_req_set_features *VAR_9;
 struct be_mcc_wrb *VAR_10;
 int VAR_11;

 if (FUNC_7(&VAR_7->mcc_lock))
  return -1;

 VAR_10 = FUNC_9(VAR_7);
 if (!VAR_10) {
  VAR_11 = -VAR_3;
  goto err;
 }

 VAR_9 = FUNC_5(VAR_10);

 FUNC_2(&VAR_9->hdr, VAR_2,
          VAR_6,
          sizeof(*VAR_9), VAR_10, ((void*)0));

 VAR_9->features = FUNC_3(VAR_0);
 VAR_9->parameter_len = FUNC_3(sizeof(struct be_req_ue_recovery));
 VAR_9->parameter.req.uer = FUNC_3(VAR_1);

 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11)
  goto err;

 VAR_8 = FUNC_5(VAR_10);

 VAR_7->error_recovery.ue_to_poll_time =
  FUNC_6(VAR_8->parameter.resp.ue2rp);
 VAR_7->error_recovery.ue_to_reset_time =
  FUNC_6(VAR_8->parameter.resp.ue2sr);
 VAR_7->error_recovery.recovery_supported = 1;
err:



 if (FUNC_0(VAR_11) == VAR_4 ||
     FUNC_0(VAR_11) == VAR_5)
  FUNC_4(&VAR_7->pdev->dev,
    "Adapter does not support HW error recovery\n");

 FUNC_8(&VAR_7->mcc_lock);
 return VAR_11;
}
