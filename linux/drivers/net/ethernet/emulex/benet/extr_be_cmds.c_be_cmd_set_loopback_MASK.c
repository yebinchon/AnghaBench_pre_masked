
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_req_set_lmode {void* loopback_state; void* loopback_type; void* dest_port; void* src_port; int hdr; } ;
struct be_adapter {int mcc_lock; int et_cmd_compl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct be_adapter*,int ,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 struct be_cmd_req_set_lmode* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct be_mcc_wrb* FUNC_8 (struct be_adapter*) ;

int FUNC_9(struct be_adapter *VAR_6, u8 VAR_7,
   u8 VAR_8, u8 VAR_9)
{
 struct be_mcc_wrb *VAR_10;
 struct be_cmd_req_set_lmode *VAR_11;
 int VAR_12;

 if (!FUNC_0(VAR_6, VAR_4,
       VAR_0))
  return -VAR_2;

 FUNC_5(&VAR_6->mcc_lock);

 VAR_10 = FUNC_8(VAR_6);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto err_unlock;
 }

 VAR_11 = FUNC_3(VAR_10);

 FUNC_2(&VAR_11->hdr, VAR_0,
          VAR_4, sizeof(*VAR_11),
          VAR_10, ((void*)0));

 VAR_11->src_port = VAR_7;
 VAR_11->dest_port = VAR_7;
 VAR_11->loopback_type = VAR_8;
 VAR_11->loopback_state = VAR_9;

 VAR_12 = FUNC_1(VAR_6);
 if (VAR_12)
  goto err_unlock;

 FUNC_6(&VAR_6->mcc_lock);

 if (!FUNC_7(&VAR_6->et_cmd_compl,
      FUNC_4(VAR_5)))
  VAR_12 = -VAR_3;

 return VAR_12;

err_unlock:
 FUNC_6(&VAR_6->mcc_lock);
 return VAR_12;
}
