
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int rats; int complete_cb; void* cb_usrarg; struct sk_buff* skb_resp; } ;
struct st95hf_context {int current_rf_tech; int exchange_lock; TYPE_2__* nfcdev; int spicontext; TYPE_1__ complete_cb_arg; int sendrcv_trflag; } ;
struct sk_buff {int len; int* data; } ;
struct nfc_digital_dev {scalar_t__ curr_protocol; } ;
typedef int nfc_digital_cmd_complete_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 struct st95hf_context* FUNC_5 (struct nfc_digital_dev*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (int *,int*,int,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct nfc_digital_dev *VAR_9,
         struct sk_buff *VAR_10,
         u16 VAR_11,
         nfc_digital_cmd_complete_t VAR_12,
         void *VAR_13)
{
 struct st95hf_context *VAR_14 = FUNC_5(VAR_9);
 int VAR_15;
 struct sk_buff *VAR_16;
 int VAR_17 = 0;

 VAR_16 = FUNC_4(VAR_5, VAR_3);
 if (!VAR_16) {
  VAR_15 = -VAR_2;
  goto error;
 }

 switch (VAR_14->current_rf_tech) {
 case 130:
  VAR_17 = VAR_10->len + 1;
  FUNC_7(VAR_10, VAR_14->sendrcv_trflag);
  break;
 case 129:
 case 128:
  VAR_17 = VAR_10->len;
  break;
 default:
  VAR_15 = -VAR_1;
  goto free_skb_resp;
 }

 FUNC_6(VAR_10, 3);
 VAR_10->data[0] = VAR_8;
 VAR_10->data[1] = VAR_7;
 VAR_10->data[2] = VAR_17;

 VAR_14->complete_cb_arg.skb_resp = VAR_16;
 VAR_14->complete_cb_arg.cb_usrarg = VAR_13;
 VAR_14->complete_cb_arg.complete_cb = VAR_12;

 if ((VAR_10->data[3] == VAR_4) &&
     VAR_9->curr_protocol == VAR_6)
  VAR_14->complete_cb_arg.rats = 1;






 VAR_15 = FUNC_2(&VAR_14->exchange_lock);
 if (VAR_15) {
  FUNC_0(1, "Semaphore is not found up in st95hf_in_send_cmd\n");
  return VAR_15;
 }

 VAR_15 = FUNC_8(&VAR_14->spicontext, VAR_10->data,
        VAR_10->len,
        VAR_0);
 if (VAR_15) {
  FUNC_1(&VAR_14->nfcdev->dev,
   "Error %d trying to perform data_exchange", VAR_15);

  FUNC_9(&VAR_14->exchange_lock);
  goto free_skb_resp;
 }

 FUNC_3(VAR_10);

 return VAR_15;

free_skb_resp:
 FUNC_3(VAR_16);
error:
 return VAR_15;
}
