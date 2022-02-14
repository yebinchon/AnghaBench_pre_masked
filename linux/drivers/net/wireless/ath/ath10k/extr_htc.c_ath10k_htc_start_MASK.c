
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; int len; } ;
struct TYPE_6__ {int max_msgs_per_bundled_recv; int flags; } ;
struct TYPE_4__ {int message_id; } ;
struct ath10k_htc_msg {TYPE_3__ setup_complete_ext; TYPE_1__ hdr; } ;
struct ath10k_htc {int max_msgs_per_htc_bundle; struct ath10k* ar; } ;
struct TYPE_5__ {scalar_t__ bus; } ;
struct ath10k {TYPE_2__ hif; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 struct sk_buff* FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 scalar_t__ FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k_htc*,int ,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (struct sk_buff*,int) ;

int FUNC_11(struct ath10k_htc *VAR_6)
{
 struct ath10k *VAR_7 = VAR_6->ar;
 struct sk_buff *VAR_8;
 int VAR_9 = 0;
 struct ath10k_htc_msg *VAR_10;

 VAR_8 = FUNC_4(VAR_6->ar);
 if (!VAR_8)
  return -VAR_5;

 FUNC_10(VAR_8, sizeof(VAR_10->hdr) + sizeof(VAR_10->setup_complete_ext));
 FUNC_9(VAR_8->data, 0, VAR_8->len);

 VAR_10 = (struct ath10k_htc_msg *)VAR_8->data;
 VAR_10->hdr.message_id =
  FUNC_0(VAR_3);

 if (VAR_7->hif.bus == VAR_0) {

  VAR_10->setup_complete_ext.flags =
   FUNC_1(VAR_4);
  VAR_10->setup_complete_ext.max_msgs_per_bundled_recv =
   VAR_6->max_msgs_per_htc_bundle;
 }
 FUNC_2(VAR_7, VAR_1, "HTC is using TX credit flow control\n");

 VAR_9 = FUNC_7(VAR_6, VAR_2, VAR_8);
 if (VAR_9) {
  FUNC_8(VAR_8);
  return VAR_9;
 }

 if (FUNC_6(VAR_7)) {
  VAR_9 = FUNC_5(VAR_7);
  if (VAR_9) {
   FUNC_3(VAR_7, "failed to connect to pktlog: %d\n", VAR_9);
   return VAR_9;
  }
 }

 return 0;
}
