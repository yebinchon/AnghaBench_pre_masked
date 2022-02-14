
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; } ;
struct port100_tg_comm_rf_res {int target_activated; int status; } ;
struct port100_cb_arg {int complete_arg; scalar_t__ mdaa; int (* complete_cb ) (int ,int ,struct sk_buff*) ;} ;
struct port100 {int nfc_digital_dev; } ;
typedef int (* nfc_digital_cmd_complete_t ) (int ,int ,struct sk_buff*) ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct port100_cb_arg*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct port100*,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct port100 *VAR_4, void *VAR_5,
     struct sk_buff *VAR_6)
{
 u32 VAR_7;
 struct port100_cb_arg *VAR_8 = VAR_5;
 nfc_digital_cmd_complete_t VAR_9 = VAR_8->complete_cb;
 struct port100_tg_comm_rf_res *VAR_10;

 if (FUNC_1(VAR_6))
  goto exit;

 VAR_10 = (struct port100_tg_comm_rf_res *)VAR_6->data;

 VAR_7 = FUNC_4(VAR_10->status);

 if (VAR_8->mdaa &&
     !FUNC_5(VAR_4, VAR_10->target_activated)) {
  FUNC_3(VAR_6);
  VAR_6 = FUNC_0(-VAR_1);

  goto exit;
 }

 FUNC_6(VAR_6, sizeof(struct port100_tg_comm_rf_res));

 if (VAR_7 != VAR_2) {
  FUNC_3(VAR_6);

  if (VAR_7 == VAR_3)
   VAR_6 = FUNC_0(-VAR_1);
  else
   VAR_6 = FUNC_0(-VAR_0);
 }

exit:
 VAR_9(VAR_4->nfc_digital_dev, VAR_8->complete_arg, VAR_6);

 FUNC_2(VAR_8);
}
