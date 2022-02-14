
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_2__ {int version; } ;
struct be_cmd_req_set_flow_control {void* rx_flow_control; void* tx_flow_control; TYPE_1__ hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct be_adapter*,int ,int ) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_4 (int ) ;
 struct be_cmd_req_set_flow_control* FUNC_5 (struct be_mcc_wrb*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct be_mcc_wrb* FUNC_8 (struct be_adapter*) ;

int FUNC_9(struct be_adapter *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct be_mcc_wrb *VAR_9;
 struct be_cmd_req_set_flow_control *VAR_10;
 int VAR_11;

 if (!FUNC_1(VAR_6, VAR_5,
       VAR_0))
  return -VAR_3;

 FUNC_6(&VAR_6->mcc_lock);

 VAR_9 = FUNC_8(VAR_6);
 if (!VAR_9) {
  VAR_11 = -VAR_1;
  goto err;
 }
 VAR_10 = FUNC_5(VAR_9);

 FUNC_3(&VAR_10->hdr, VAR_0,
          VAR_5, sizeof(*VAR_10),
          VAR_9, ((void*)0));

 VAR_10->hdr.version = 1;
 VAR_10->tx_flow_control = FUNC_4((u16)VAR_7);
 VAR_10->rx_flow_control = FUNC_4((u16)VAR_8);

 VAR_11 = FUNC_2(VAR_6);

err:
 FUNC_7(&VAR_6->mcc_lock);

 if (FUNC_0(VAR_11) == VAR_4)
  return -VAR_2;

 return VAR_11;
}
