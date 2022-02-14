
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_get_flow_control {int rx_flow_control; int tx_flow_control; } ;
struct be_cmd_req_get_flow_control {int hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*,int ,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (struct be_adapter*) ;

int FUNC_8(struct be_adapter *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 struct be_mcc_wrb *VAR_7;
 struct be_cmd_req_get_flow_control *VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_4, VAR_3,
       VAR_0))
  return -VAR_2;

 FUNC_5(&VAR_4->mcc_lock);

 VAR_7 = FUNC_7(VAR_4);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err;
 }
 VAR_8 = FUNC_3(VAR_7);

 FUNC_2(&VAR_8->hdr, VAR_0,
          VAR_3, sizeof(*VAR_8),
          VAR_7, ((void*)0));

 VAR_9 = FUNC_1(VAR_4);
 if (!VAR_9) {
  struct be_cmd_resp_get_flow_control *VAR_10 =
      FUNC_3(VAR_7);

  *VAR_5 = FUNC_4(VAR_10->tx_flow_control);
  *VAR_6 = FUNC_4(VAR_10->rx_flow_control);
 }

err:
 FUNC_6(&VAR_4->mcc_lock);
 return VAR_9;
}
