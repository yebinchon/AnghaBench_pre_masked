
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct be_cmd_resp_mac_query {TYPE_1__ mac; } ;
struct be_cmd_req_mac_query {int permanent; int pmac_id; int if_id; int type; int hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 void* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct be_mcc_wrb* FUNC_8 (struct be_adapter*) ;

int FUNC_9(struct be_adapter *VAR_5, u8 *VAR_6,
     bool VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct be_mcc_wrb *VAR_10;
 struct be_cmd_req_mac_query *VAR_11;
 int VAR_12;

 FUNC_6(&VAR_5->mcc_lock);

 VAR_10 = FUNC_8(VAR_5);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto err;
 }
 VAR_11 = FUNC_4(VAR_10);

 FUNC_1(&VAR_11->hdr, VAR_0,
          VAR_4, sizeof(*VAR_11), VAR_10,
          ((void*)0));
 VAR_11->type = VAR_3;
 if (VAR_7) {
  VAR_11->permanent = 1;
 } else {
  VAR_11->if_id = FUNC_2((u16)VAR_8);
  VAR_11->pmac_id = FUNC_3(VAR_9);
  VAR_11->permanent = 0;
 }

 VAR_12 = FUNC_0(VAR_5);
 if (!VAR_12) {
  struct be_cmd_resp_mac_query *VAR_13 = FUNC_4(VAR_10);

  FUNC_5(VAR_6, VAR_13->mac.addr, VAR_2);
 }

err:
 FUNC_7(&VAR_5->mcc_lock);
 return VAR_12;
}
