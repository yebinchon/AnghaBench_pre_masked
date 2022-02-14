
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct htc_target {char* tgt_creds; scalar_t__ msg_per_bndl_max; TYPE_3__* dev; scalar_t__ htc_tgt_ver; scalar_t__ tgt_cred_sz; } ;
struct TYPE_5__ {int * tx_full; int * rx_refill; int rx; } ;
struct htc_service_connect_resp {int svc_id; int max_txq_depth; TYPE_2__ ep_cb; } ;
struct htc_service_connect_req {int svc_id; int max_txq_depth; TYPE_2__ ep_cb; } ;
struct htc_ready_msg {int dummy; } ;
struct TYPE_4__ {int cred_sz; int cred_cnt; int msg_id; } ;
struct htc_ready_ext_msg {scalar_t__ msg_per_htc_bndl; scalar_t__ htc_ver; TYPE_1__ ver2_0_info; } ;
struct htc_packet {int act_len; scalar_t__ buf; } ;
typedef int resp ;
typedef int connect ;
struct TYPE_6__ {int ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,struct htc_service_connect_resp*,struct htc_service_connect_resp*) ;
 int VAR_6 ;
 int FUNC_3 (struct htc_packet*) ;
 int FUNC_4 (struct htc_target*) ;
 struct htc_packet* FUNC_5 (struct htc_target*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct htc_service_connect_resp*,int ,int) ;
 int FUNC_8 (struct htc_target*,struct htc_packet*) ;

__attribute__((used)) static int FUNC_9(struct htc_target *VAR_7)
{
 struct htc_packet *VAR_8 = ((void*)0);
 struct htc_ready_ext_msg *VAR_9;
 struct htc_service_connect_req VAR_10;
 struct htc_service_connect_resp VAR_11;
 int VAR_12;


 VAR_8 = FUNC_5(VAR_7);

 if (!VAR_8)
  return -VAR_1;


 VAR_9 = (struct htc_ready_ext_msg *)VAR_8->buf;

 if ((FUNC_6(VAR_9->ver2_0_info.msg_id) != VAR_3) ||
     (VAR_8->act_len < sizeof(struct htc_ready_msg))) {
  VAR_12 = -VAR_1;
  goto fail_wait_target;
 }

 if (!VAR_9->ver2_0_info.cred_cnt || !VAR_9->ver2_0_info.cred_sz) {
  VAR_12 = -VAR_1;
  goto fail_wait_target;
 }

 VAR_7->tgt_creds = FUNC_6(VAR_9->ver2_0_info.cred_cnt);
 VAR_7->tgt_cred_sz = FUNC_6(VAR_9->ver2_0_info.cred_sz);

 FUNC_0(VAR_0,
     "htc target ready credits %d size %d\n",
     VAR_7->tgt_creds, VAR_7->tgt_cred_sz);


 if (VAR_8->act_len >= sizeof(struct htc_ready_ext_msg)) {

  VAR_7->htc_tgt_ver = VAR_9->htc_ver;
  VAR_7->msg_per_bndl_max = VAR_9->msg_per_htc_bndl;
 } else {

  VAR_7->htc_tgt_ver = VAR_4;
  VAR_7->msg_per_bndl_max = 0;
 }

 FUNC_0(VAR_0, "htc using protocol %s (%d)\n",
     (VAR_7->htc_tgt_ver == VAR_4) ? "2.0" : ">= 2.1",
     VAR_7->htc_tgt_ver);

 if (VAR_7->msg_per_bndl_max > 0)
  FUNC_4(VAR_7);


 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 FUNC_7(&VAR_11, 0, sizeof(VAR_11));
 VAR_10.ep_cb.rx = VAR_6;
 VAR_10.ep_cb.rx_refill = ((void*)0);
 VAR_10.ep_cb.tx_full = ((void*)0);
 VAR_10.max_txq_depth = VAR_5;
 VAR_10.svc_id = VAR_2;


 VAR_12 = FUNC_2((void *)VAR_7, &VAR_10, &VAR_11);

 if (VAR_12)




  FUNC_1(VAR_7->dev->ar);

fail_wait_target:
 if (VAR_8) {
  FUNC_3(VAR_8);
  FUNC_8(VAR_7, VAR_8);
 }

 return VAR_12;
}
