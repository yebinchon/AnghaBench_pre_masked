
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct port100_tg_comm_rf_cmd {int mdaa; int* nfca_param; int* nfcf_param; void* recv_timeout; void* send_timeout; scalar_t__ guard_time; } ;
struct port100_cb_arg {int mdaa; void* complete_arg; int complete_cb; } ;
struct port100 {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_tg_mdaa_params {int sens_res; int sel_res; int sc; int nfcid2; int nfcid1; } ;
typedef int nfc_digital_cmd_complete_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct port100_cb_arg*) ;
 struct port100_cb_arg* FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct port100_tg_comm_rf_cmd*,int ,int) ;
 struct port100* FUNC_5 (struct nfc_digital_dev*) ;
 struct sk_buff* FUNC_6 (struct port100*,int ) ;
 int FUNC_7 (struct port100*,int ,struct sk_buff*,int ,struct port100_cb_arg*) ;
 int VAR_7 ;
 int FUNC_8 (struct nfc_digital_dev*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_10(struct nfc_digital_dev *VAR_8,
          struct digital_tg_mdaa_params *VAR_9,
          u16 VAR_10,
          nfc_digital_cmd_complete_t VAR_11, void *VAR_12)
{
 struct port100 *VAR_13 = FUNC_5(VAR_8);
 struct port100_tg_comm_rf_cmd *VAR_14;
 struct port100_cb_arg *VAR_15;
 struct sk_buff *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_8(VAR_8, VAR_3,
         VAR_5);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_8(VAR_8, VAR_2,
         VAR_4);
 if (VAR_17)
  return VAR_17;

 VAR_15 = FUNC_2(sizeof(struct port100_cb_arg), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_15->complete_cb = VAR_11;
 VAR_15->complete_arg = VAR_12;
 VAR_15->mdaa = 1;

 VAR_16 = FUNC_6(VAR_13, 0);
 if (!VAR_16) {
  FUNC_1(VAR_15);
  return -VAR_0;
 }

 FUNC_9(VAR_16, sizeof(struct port100_tg_comm_rf_cmd));
 VAR_14 = (struct port100_tg_comm_rf_cmd *)VAR_16->data;

 FUNC_4(VAR_14, 0, sizeof(struct port100_tg_comm_rf_cmd));

 VAR_14->guard_time = 0;
 VAR_14->send_timeout = FUNC_0(0xFFFF);
 VAR_14->mdaa = 1;
 VAR_14->nfca_param[0] = (VAR_9->sens_res >> 8) & 0xFF;
 VAR_14->nfca_param[1] = VAR_9->sens_res & 0xFF;
 FUNC_3(VAR_14->nfca_param + 2, VAR_9->nfcid1, 3);
 VAR_14->nfca_param[5] = VAR_9->sel_res;
 FUNC_3(VAR_14->nfcf_param, VAR_9->nfcid2, 8);
 VAR_14->nfcf_param[16] = (VAR_9->sc >> 8) & 0xFF;
 VAR_14->nfcf_param[17] = VAR_9->sc & 0xFF;
 VAR_14->recv_timeout = FUNC_0(VAR_10);

 return FUNC_7(VAR_13, VAR_6, VAR_16,
          VAR_7, VAR_15);
}
