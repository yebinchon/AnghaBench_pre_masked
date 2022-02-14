
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_set_func_cap {int cap_flags; } ;
struct be_cmd_req_set_func_cap {void* cap_flags; void* valid_cap_flags; int hdr; } ;
struct be_adapter {int be3_native; int mbox_lock; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct be_mcc_wrb* FUNC_8 (struct be_adapter*) ;

int FUNC_9(struct be_adapter *VAR_5)
{
 struct be_mcc_wrb *VAR_6;
 struct be_cmd_req_set_func_cap *VAR_7;
 int VAR_8;

 if (FUNC_6(&VAR_5->mbox_lock))
  return -1;

 VAR_6 = FUNC_8(VAR_5);
 if (!VAR_6) {
  VAR_8 = -VAR_3;
  goto err;
 }

 VAR_7 = FUNC_4(VAR_6);

 FUNC_1(&VAR_7->hdr, VAR_2,
          VAR_4,
          sizeof(*VAR_7), VAR_6, ((void*)0));

 VAR_7->valid_cap_flags = FUNC_2(VAR_1 |
    VAR_0);
 VAR_7->cap_flags = FUNC_2(VAR_0);

 VAR_8 = FUNC_0(VAR_5);
 if (!VAR_8) {
  struct be_cmd_resp_set_func_cap *VAR_9 = FUNC_4(VAR_6);

  VAR_5->be3_native = FUNC_5(VAR_9->cap_flags) &
     VAR_0;
  if (!VAR_5->be3_native)
   FUNC_3(&VAR_5->pdev->dev,
     "adapter not in advanced mode\n");
 }
err:
 FUNC_7(&VAR_5->mbox_lock);
 return VAR_8;
}
