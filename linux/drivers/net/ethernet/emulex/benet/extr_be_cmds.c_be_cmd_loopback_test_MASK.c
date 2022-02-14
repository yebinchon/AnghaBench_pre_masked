
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_loopback_test {int status; } ;
struct TYPE_2__ {void* timeout; } ;
struct be_cmd_req_loopback_test {void* loopback_type; void* num_pkts; void* pkt_size; void* dest_port; void* src_port; int pattern; TYPE_1__ hdr; } ;
struct be_adapter {int mcc_lock; int et_cmd_compl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*,int ,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (struct be_mcc_wrb*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct be_mcc_wrb* FUNC_10 (struct be_adapter*) ;

int FUNC_11(struct be_adapter *VAR_4, u32 VAR_5,
    u32 VAR_6, u32 VAR_7, u32 VAR_8,
    u64 VAR_9)
{
 struct be_mcc_wrb *VAR_10;
 struct be_cmd_req_loopback_test *VAR_11;
 struct be_cmd_resp_loopback_test *VAR_12;
 int VAR_13;

 if (!FUNC_0(VAR_4, VAR_3,
       VAR_0))
  return -VAR_2;

 FUNC_7(&VAR_4->mcc_lock);

 VAR_10 = FUNC_10(VAR_4);
 if (!VAR_10) {
  VAR_13 = -VAR_1;
  goto err;
 }

 VAR_11 = FUNC_5(VAR_10);

 FUNC_2(&VAR_11->hdr, VAR_0,
          VAR_3, sizeof(*VAR_11), VAR_10,
          ((void*)0));

 VAR_11->hdr.timeout = FUNC_3(15);
 VAR_11->pattern = FUNC_4(VAR_9);
 VAR_11->src_port = FUNC_3(VAR_5);
 VAR_11->dest_port = FUNC_3(VAR_5);
 VAR_11->pkt_size = FUNC_3(VAR_7);
 VAR_11->num_pkts = FUNC_3(VAR_8);
 VAR_11->loopback_type = FUNC_3(VAR_6);

 VAR_13 = FUNC_1(VAR_4);
 if (VAR_13)
  goto err;

 FUNC_8(&VAR_4->mcc_lock);

 FUNC_9(&VAR_4->et_cmd_compl);
 VAR_12 = FUNC_5(VAR_10);
 VAR_13 = FUNC_6(VAR_12->status);

 return VAR_13;
err:
 FUNC_8(&VAR_4->mcc_lock);
 return VAR_13;
}
