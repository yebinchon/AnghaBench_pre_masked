
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_get_fn_privileges {int privilege_mask; } ;
struct TYPE_2__ {int domain; } ;
struct be_cmd_req_get_fn_privileges {TYPE_1__ hdr; } ;
struct be_adapter {int mcc_lock; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_5 (struct be_mcc_wrb*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct be_mcc_wrb* FUNC_9 (struct be_adapter*) ;

int FUNC_10(struct be_adapter *VAR_4, u32 *VAR_5,
        u32 VAR_6)
{
 struct be_mcc_wrb *VAR_7;
 struct be_cmd_req_get_fn_privileges *VAR_8;
 int VAR_9;

 FUNC_7(&VAR_4->mcc_lock);

 VAR_7 = FUNC_9(VAR_4);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err;
 }

 VAR_8 = FUNC_5(VAR_7);

 FUNC_4(&VAR_8->hdr, VAR_0,
          VAR_3, sizeof(*VAR_8),
          VAR_7, ((void*)0));

 VAR_8->hdr.domain = VAR_6;

 VAR_9 = FUNC_2(VAR_4);
 if (!VAR_9) {
  struct be_cmd_resp_get_fn_privileges *VAR_10 =
      FUNC_5(VAR_7);

  *VAR_5 = FUNC_6(VAR_10->privilege_mask);




  if (FUNC_0(VAR_4) && FUNC_1(VAR_4) &&
      FUNC_3(VAR_4))
   *VAR_5 = VAR_2;
 }

err:
 FUNC_8(&VAR_4->mcc_lock);
 return VAR_9;
}
