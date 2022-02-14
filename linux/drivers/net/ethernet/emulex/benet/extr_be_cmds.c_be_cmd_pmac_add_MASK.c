
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_pmac_add {int pmac_id; } ;
struct TYPE_2__ {int domain; } ;
struct be_cmd_req_pmac_add {int mac_address; int if_id; TYPE_1__ hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct be_mcc_wrb* FUNC_9 (struct be_adapter*) ;

int FUNC_10(struct be_adapter *VAR_6, u8 *VAR_7,
      u32 VAR_8, u32 *VAR_9, u32 VAR_10)
{
 struct be_mcc_wrb *VAR_11;
 struct be_cmd_req_pmac_add *VAR_12;
 int VAR_13;

 FUNC_7(&VAR_6->mcc_lock);

 VAR_11 = FUNC_9(VAR_6);
 if (!VAR_11) {
  VAR_13 = -VAR_1;
  goto err;
 }
 VAR_12 = FUNC_4(VAR_11);

 FUNC_2(&VAR_12->hdr, VAR_0,
          VAR_5, sizeof(*VAR_12), VAR_11,
          ((void*)0));

 VAR_12->hdr.domain = VAR_10;
 VAR_12->if_id = FUNC_3(VAR_8);
 FUNC_6(VAR_12->mac_address, VAR_7, VAR_3);

 VAR_13 = FUNC_1(VAR_6);
 if (!VAR_13) {
  struct be_cmd_resp_pmac_add *VAR_14 = FUNC_4(VAR_11);

  *VAR_9 = FUNC_5(VAR_14->pmac_id);
 }

err:
 FUNC_8(&VAR_6->mcc_lock);

  if (FUNC_0(VAR_13) == VAR_4)
  VAR_13 = -VAR_2;

 return VAR_13;
}
