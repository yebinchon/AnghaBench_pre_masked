
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctrl_response_len; scalar_t__ ctrl_response_buf; } ;
struct htc_target {scalar_t__ tgt_creds; scalar_t__ tgt_cred_sz; TYPE_1__ pipe; } ;
struct TYPE_6__ {int rx; int tx_complete; } ;
struct htc_service_connect_resp {int svc_id; int max_txq_depth; TYPE_3__ ep_cb; } ;
struct htc_service_connect_req {int svc_id; int max_txq_depth; TYPE_3__ ep_cb; } ;
struct TYPE_5__ {int msg_id; int cred_sz; int cred_cnt; } ;
struct htc_ready_ext_msg {TYPE_2__ ver2_0_info; } ;
typedef int resp ;
typedef int connect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct htc_target*,struct htc_service_connect_resp*,struct htc_service_connect_resp*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct htc_target*) ;
 int VAR_6 ;
 int FUNC_5 (struct htc_target*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct htc_service_connect_resp*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct htc_target *VAR_7)
{
 struct htc_ready_ext_msg *VAR_8;
 struct htc_service_connect_req VAR_9;
 struct htc_service_connect_resp VAR_10;
 int VAR_11 = 0;

 VAR_11 = FUNC_5(VAR_7);

 if (VAR_11 != 0)
  return VAR_11;

 if (VAR_7->pipe.ctrl_response_len < sizeof(*VAR_8)) {
  FUNC_2("invalid htc pipe ready msg len: %d\n",
       VAR_7->pipe.ctrl_response_len);
  return -VAR_1;
 }

 VAR_8 = (struct htc_ready_ext_msg *) VAR_7->pipe.ctrl_response_buf;

 if (VAR_8->ver2_0_info.msg_id != FUNC_3(VAR_3)) {
  FUNC_2("invalid htc pipe ready msg: 0x%x\n",
       VAR_8->ver2_0_info.msg_id);
  return -VAR_1;
 }

 FUNC_0(VAR_0,
     "Target Ready! : transmit resources : %d size:%d\n",
     VAR_8->ver2_0_info.cred_cnt,
     VAR_8->ver2_0_info.cred_sz);

 VAR_7->tgt_creds = FUNC_6(VAR_8->ver2_0_info.cred_cnt);
 VAR_7->tgt_cred_sz = FUNC_6(VAR_8->ver2_0_info.cred_sz);

 if ((VAR_7->tgt_creds == 0) || (VAR_7->tgt_cred_sz == 0))
  return -VAR_1;

 FUNC_4(VAR_7);


 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 VAR_9.ep_cb.tx_complete = VAR_6;
 VAR_9.ep_cb.rx = VAR_5;
 VAR_9.max_txq_depth = VAR_4;
 VAR_9.svc_id = VAR_2;


 VAR_11 = FUNC_1(VAR_7, &VAR_9, &VAR_10);

 return VAR_11;
}
