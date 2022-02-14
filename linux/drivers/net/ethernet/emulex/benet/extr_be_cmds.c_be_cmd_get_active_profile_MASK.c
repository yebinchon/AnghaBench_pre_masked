
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_get_active_profile {int active_profile_id; } ;
struct be_cmd_req_get_active_profile {int hdr; } ;
struct be_adapter {int mbox_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_2 (struct be_mcc_wrb*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

int FUNC_7(struct be_adapter *VAR_3, u16 *VAR_4)
{
 struct be_cmd_req_get_active_profile *VAR_5;
 struct be_mcc_wrb *VAR_6;
 int VAR_7;

 if (FUNC_4(&VAR_3->mbox_lock))
  return -1;

 VAR_6 = FUNC_6(VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto err;
 }

 VAR_5 = FUNC_2(VAR_6);

 FUNC_1(&VAR_5->hdr, VAR_0,
          VAR_2, sizeof(*VAR_5),
          VAR_6, ((void*)0));

 VAR_7 = FUNC_0(VAR_3);
 if (!VAR_7) {
  struct be_cmd_resp_get_active_profile *VAR_8 =
       FUNC_2(VAR_6);

  *VAR_4 = FUNC_3(VAR_8->active_profile_id);
 }

err:
 FUNC_5(&VAR_3->mbox_lock);
 return VAR_7;
}
