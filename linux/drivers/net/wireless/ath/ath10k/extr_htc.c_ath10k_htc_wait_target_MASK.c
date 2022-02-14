
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_6__ {int max_msgs_per_htc_bundle; } ;
struct TYPE_5__ {int credit_size; int credit_count; } ;
struct TYPE_4__ {int message_id; } ;
struct ath10k_htc_msg {TYPE_3__ ready_ext; TYPE_2__ ready; TYPE_1__ hdr; } ;
struct ath10k_htc {int control_resp_len; int max_msgs_per_htc_bundle; void* target_credit_size; void* total_transmit_credits; scalar_t__ control_resp_buffer; int ctl_resp; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,...) ;
 int FUNC_2 (struct ath10k*,char*,...) ;
 int FUNC_3 (struct ath10k*,int,int) ;
 int FUNC_4 (struct ath10k*,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_7 ;
 unsigned long FUNC_6 (int *,int ) ;

int FUNC_7(struct ath10k_htc *VAR_8)
{
 struct ath10k *VAR_9 = VAR_8->ar;
 int VAR_10, VAR_11 = 0;
 unsigned long VAR_12;
 struct ath10k_htc_msg *VAR_13;
 u16 VAR_14;

 VAR_12 = FUNC_6(&VAR_8->ctl_resp,
      VAR_2);
 if (!VAR_12) {






  FUNC_4(VAR_9, "failed to receive control response completion, polling..\n");

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
   FUNC_3(VAR_8->ar, VAR_10, 1);

  VAR_12 =
  FUNC_6(&VAR_8->ctl_resp,
         VAR_2);

  if (!VAR_12)
   VAR_11 = -VAR_5;
 }

 if (VAR_11 < 0) {
  FUNC_2(VAR_9, "ctl_resp never came in (%d)\n", VAR_11);
  return VAR_11;
 }

 if (VAR_8->control_resp_len < sizeof(VAR_13->hdr) + sizeof(VAR_13->ready)) {
  FUNC_2(VAR_9, "Invalid HTC ready msg len:%d\n",
      VAR_8->control_resp_len);
  return -VAR_4;
 }

 VAR_13 = (struct ath10k_htc_msg *)VAR_8->control_resp_buffer;
 VAR_14 = FUNC_0(VAR_13->hdr.message_id);

 if (VAR_14 != VAR_1) {
  FUNC_2(VAR_9, "Invalid HTC ready msg: 0x%x\n", VAR_14);
  return -VAR_4;
 }

 VAR_8->total_transmit_credits = FUNC_0(VAR_13->ready.credit_count);
 VAR_8->target_credit_size = FUNC_0(VAR_13->ready.credit_size);

 FUNC_1(VAR_9, VAR_0,
     "Target ready! transmit resources: %d size:%d\n",
     VAR_8->total_transmit_credits,
     VAR_8->target_credit_size);

 if ((VAR_8->total_transmit_credits == 0) ||
     (VAR_8->target_credit_size == 0)) {
  FUNC_2(VAR_9, "Invalid credit size received\n");
  return -VAR_4;
 }




 if (VAR_8->control_resp_len >=
     sizeof(VAR_13->hdr) + sizeof(VAR_13->ready_ext)) {
  VAR_8->max_msgs_per_htc_bundle =
   FUNC_5(VAR_7, VAR_13->ready_ext.max_msgs_per_htc_bundle,
         VAR_6);
  FUNC_1(VAR_9, VAR_0,
      "Extended ready message. RX bundle size: %d\n",
      VAR_8->max_msgs_per_htc_bundle);
 }

 return 0;
}
