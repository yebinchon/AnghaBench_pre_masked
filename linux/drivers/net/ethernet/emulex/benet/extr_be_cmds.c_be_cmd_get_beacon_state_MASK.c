
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_get_beacon_state {int beacon_state; } ;
struct be_cmd_req_get_beacon_state {int port_num; int hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_2 (struct be_mcc_wrb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct be_mcc_wrb* FUNC_5 (struct be_adapter*) ;

int FUNC_6(struct be_adapter *VAR_3, u8 VAR_4, u32 *VAR_5)
{
 struct be_mcc_wrb *VAR_6;
 struct be_cmd_req_get_beacon_state *VAR_7;
 int VAR_8;

 FUNC_3(&VAR_3->mcc_lock);

 VAR_6 = FUNC_5(VAR_3);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto err;
 }
 VAR_7 = FUNC_2(VAR_6);

 FUNC_1(&VAR_7->hdr, VAR_0,
          VAR_2, sizeof(*VAR_7),
          VAR_6, ((void*)0));

 VAR_7->port_num = VAR_4;

 VAR_8 = FUNC_0(VAR_3);
 if (!VAR_8) {
  struct be_cmd_resp_get_beacon_state *VAR_9 =
      FUNC_2(VAR_6);

  *VAR_5 = VAR_9->beacon_state;
 }

err:
 FUNC_4(&VAR_3->mcc_lock);
 return VAR_8;
}
