
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct port100_cb_arg {int complete_arg; int (* complete_cb ) (int ,int ,struct sk_buff*) ;} ;
struct port100 {int nfc_digital_dev; TYPE_1__* interface; } ;
typedef int (* nfc_digital_cmd_complete_t ) (int ,int ,struct sk_buff*) ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct port100_cb_arg*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct port100 *VAR_4, void *VAR_5,
           struct sk_buff *VAR_6)
{
 struct port100_cb_arg *VAR_7 = VAR_5;
 nfc_digital_cmd_complete_t VAR_8 = VAR_7->complete_cb;
 u32 VAR_9;
 int VAR_10;

 if (FUNC_1(VAR_6)) {
  VAR_10 = FUNC_2(VAR_6);
  goto exit;
 }

 if (VAR_6->len < 4) {
  FUNC_6(&VAR_4->interface->dev,
   "Invalid packet length received\n");
  VAR_10 = -VAR_0;
  goto error;
 }

 VAR_9 = FUNC_5(*(__le32 *)VAR_6->data);

 FUNC_7(VAR_6, sizeof(u32));

 if (VAR_9 == VAR_3) {
  VAR_10 = -VAR_1;
  goto error;
 }

 if (VAR_9 != VAR_2) {
  FUNC_6(&VAR_4->interface->dev,
   "in_comm_rf failed with status 0x%08x\n", VAR_9);
  VAR_10 = -VAR_0;
  goto error;
 }


 FUNC_7(VAR_6, 1);

 goto exit;

error:
 FUNC_4(VAR_6);
 VAR_6 = FUNC_0(VAR_10);

exit:
 VAR_8(VAR_4->nfc_digital_dev, VAR_7->complete_arg, VAR_6);

 FUNC_3(VAR_7);
}
