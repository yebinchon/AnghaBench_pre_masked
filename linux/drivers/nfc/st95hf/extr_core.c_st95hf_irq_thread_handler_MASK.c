
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* spidev; } ;
struct st95_digital_cmd_complete_arg {int rats; int cb_usrarg; int (* complete_cb ) (int ,int ,struct sk_buff*) ;struct sk_buff* skb_resp; } ;
struct st95hf_context {int rm_lock; int exchange_lock; int ddev; scalar_t__ nfcdev_free; TYPE_2__ spicontext; struct st95_digital_cmd_complete_arg complete_cb_arg; } ;
struct sk_buff {scalar_t__* data; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct st95hf_context*,struct sk_buff*,int) ;
 int FUNC_8 (struct st95hf_context*,int,scalar_t__) ;
 int FUNC_9 (struct st95hf_context*,struct sk_buff*,int) ;
 int FUNC_10 (TYPE_2__*,scalar_t__*) ;
 int FUNC_11 (int ,int ,struct sk_buff*) ;
 int FUNC_12 (int ,int ,struct sk_buff*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 static bool VAR_8;
 struct device *VAR_9;
 struct sk_buff *VAR_10;
 struct st95hf_context *VAR_11 =
  (struct st95hf_context *)VAR_5;
 struct st95_digital_cmd_complete_arg *VAR_12;

 VAR_9 = &VAR_11->spicontext.spidev->dev;
 if (!FUNC_3(&VAR_11->exchange_lock)) {
  FUNC_13(&VAR_11->exchange_lock);
  FUNC_1(1, "unknown context in ST95HF ISR");
  return VAR_2;
 }

 VAR_12 = &VAR_11->complete_cb_arg;
 VAR_10 = VAR_12->skb_resp;

 FUNC_5(&VAR_11->rm_lock);
 VAR_7 = FUNC_10(&VAR_11->spicontext,
        VAR_10->data);
 if (VAR_7 < 0) {
  FUNC_2(VAR_9, "TISR spi response err = 0x%x\n", VAR_7);
  VAR_6 = VAR_7;
  goto end;
 }


 if (VAR_11->nfcdev_free) {
  VAR_6 = -VAR_0;
  goto end;
 }

 if (VAR_10->data[2] == VAR_3) {

  VAR_6 = FUNC_8(VAR_11, 1, VAR_10->data[3]);
  if (VAR_6)
   goto end;

  VAR_8 = 1;
  FUNC_6(&VAR_11->rm_lock);
  return VAR_1;
 }

 VAR_6 = FUNC_7(VAR_11, VAR_10, VAR_7);
 if (VAR_6)
  goto end;

 VAR_6 = FUNC_9(VAR_11, VAR_10, VAR_7);
 if (VAR_6)
  goto end;





 if (VAR_8) {
  VAR_8 = 0;
  VAR_6 = FUNC_8(VAR_11, 0, 0);
  if (VAR_6)
   goto end;
 }


 VAR_12->complete_cb(VAR_11->ddev, VAR_12->cb_usrarg, VAR_10);


 FUNC_13(&VAR_11->exchange_lock);
 FUNC_6(&VAR_11->rm_lock);

 return VAR_1;

end:
 FUNC_4(VAR_10);
 VAR_8 = 0;
 VAR_12->rats = 0;
 VAR_10 = FUNC_0(VAR_6);

 VAR_12->complete_cb(VAR_11->ddev, VAR_12->cb_usrarg, VAR_10);

 FUNC_13(&VAR_11->exchange_lock);
 FUNC_6(&VAR_11->rm_lock);
 return VAR_1;
}
