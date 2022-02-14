
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_req_enable_disable_beacon {void* status_duration; void* beacon_duration; void* beacon_state; void* port_num; int hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 struct be_cmd_req_enable_disable_beacon* FUNC_2 (struct be_mcc_wrb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct be_mcc_wrb* FUNC_5 (struct be_adapter*) ;

int FUNC_6(struct be_adapter *VAR_3, u8 VAR_4,
       u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct be_mcc_wrb *VAR_8;
 struct be_cmd_req_enable_disable_beacon *VAR_9;
 int VAR_10;

 FUNC_3(&VAR_3->mcc_lock);

 VAR_8 = FUNC_5(VAR_3);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto err;
 }
 VAR_9 = FUNC_2(VAR_8);

 FUNC_1(&VAR_9->hdr, VAR_0,
          VAR_2,
          sizeof(*VAR_9), VAR_8, ((void*)0));

 VAR_9->port_num = VAR_4;
 VAR_9->beacon_state = VAR_7;
 VAR_9->beacon_duration = VAR_5;
 VAR_9->status_duration = VAR_6;

 VAR_10 = FUNC_0(VAR_3);

err:
 FUNC_4(&VAR_3->mcc_lock);
 return VAR_10;
}
