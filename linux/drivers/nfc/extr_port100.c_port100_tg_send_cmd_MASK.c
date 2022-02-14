
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct port100_tg_comm_rf_cmd {void* recv_timeout; void* send_timeout; void* guard_time; } ;
struct port100_cb_arg {void* complete_arg; int complete_cb; } ;
struct port100 {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;
typedef int nfc_digital_cmd_complete_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct port100_cb_arg* FUNC_1 (int,int ) ;
 int FUNC_2 (struct port100_tg_comm_rf_cmd*,int ,int) ;
 struct port100* FUNC_3 (struct nfc_digital_dev*) ;
 int FUNC_4 (struct port100*,int ,struct sk_buff*,int ,struct port100_cb_arg*) ;
 int VAR_3 ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct nfc_digital_dev *VAR_4,
          struct sk_buff *VAR_5, u16 VAR_6,
          nfc_digital_cmd_complete_t VAR_7, void *VAR_8)
{
 struct port100 *VAR_9 = FUNC_3(VAR_4);
 struct port100_tg_comm_rf_cmd *VAR_10;
 struct port100_cb_arg *VAR_11;

 VAR_11 = FUNC_1(sizeof(struct port100_cb_arg), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->complete_cb = VAR_7;
 VAR_11->complete_arg = VAR_8;

 FUNC_5(VAR_5, sizeof(struct port100_tg_comm_rf_cmd));

 VAR_10 = (struct port100_tg_comm_rf_cmd *)VAR_5->data;

 FUNC_2(VAR_10, 0, sizeof(struct port100_tg_comm_rf_cmd));
 VAR_10->guard_time = FUNC_0(500);
 VAR_10->send_timeout = FUNC_0(0xFFFF);
 VAR_10->recv_timeout = FUNC_0(VAR_6);

 return FUNC_4(VAR_9, VAR_2, VAR_5,
          VAR_3, VAR_11);
}
