
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_3__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {struct sk_buff* cmdrsp_buf; int dev; struct sk_buff* cmd_buf; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int cmdrsp_addr_hi; int cmdrsp_addr_lo; scalar_t__ sleep_cookie; } ;
struct mwifiex_adapter {scalar_t__ ps_state; int cmd_resp_received; TYPE_2__* curr_cmd; int intf_hdr_len; int upld_buf; struct pcie_service_card* card; } ;
struct TYPE_4__ {struct sk_buff* resp_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_6 (struct mwifiex_adapter*,int ) ;
 scalar_t__ FUNC_7 (struct mwifiex_adapter*,struct sk_buff*,scalar_t__,int ) ;
 int FUNC_8 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_9 (struct mwifiex_adapter*) ;
 int FUNC_10 (struct mwifiex_adapter*,int ,scalar_t__) ;
 int FUNC_11 (struct mwifiex_adapter*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (struct mwifiex_adapter*,int ,int ) ;
 int FUNC_13 (int ,int ,scalar_t__,int ) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (struct sk_buff*,scalar_t__) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 int VAR_11 ;
 int FUNC_19 (int,int) ;

__attribute__((used)) static int FUNC_20(struct mwifiex_adapter *VAR_12)
{
 struct pcie_service_card *VAR_13 = VAR_12->card;
 const struct mwifiex_pcie_card_reg *VAR_14 = VAR_13->pcie.reg;
 struct sk_buff *VAR_15 = VAR_13->cmdrsp_buf;
 int VAR_16 = 0;
 u16 VAR_17;

 FUNC_5(VAR_12, VAR_0,
      "info: Rx CMD Response\n");

 if (VAR_12->curr_cmd)
  FUNC_11(VAR_12, VAR_15, VAR_8);
 else
  FUNC_13(VAR_13->dev,
         FUNC_0(VAR_15),
         VAR_6,
         VAR_8);


 if (VAR_13->cmd_buf) {
  FUNC_11(VAR_12, VAR_13->cmd_buf,
      VAR_9);
  FUNC_1(VAR_13->cmd_buf);
  VAR_13->cmd_buf = ((void*)0);
 }

 VAR_17 = FUNC_2(VAR_15->data);
 FUNC_17(VAR_15, VAR_6 - VAR_15->len);
 FUNC_18(VAR_15, VAR_17);

 if (!VAR_12->curr_cmd) {
  if (VAR_12->ps_state == VAR_10) {
   FUNC_14(VAR_13->dev,
      FUNC_0(VAR_15),
      VAR_5,
      VAR_8);
   if (FUNC_12(VAR_12,
           VAR_7,
           VAR_1)) {
    FUNC_5(VAR_12, VAR_2,
         "Write register failed\n");
    return -1;
   }
   FUNC_6(VAR_12,
             VAR_3);
   FUNC_11(VAR_12, VAR_15,
       VAR_8);
   FUNC_15(VAR_15, VAR_12->intf_hdr_len);
   while (VAR_14->sleep_cookie && (VAR_16++ < 10) &&
          FUNC_9(VAR_12))
    FUNC_19(50, 60);
   FUNC_8(VAR_12);
   FUNC_10(VAR_12, VAR_15->data,
          VAR_15->len);
  } else {
   FUNC_5(VAR_12, VAR_2,
        "There is no command but got cmdrsp\n");
  }
  FUNC_3(VAR_12->upld_buf, VAR_15->data,
         FUNC_4(VAR_11, VAR_4, VAR_15->len));
  FUNC_16(VAR_15, VAR_12->intf_hdr_len);
  if (FUNC_7(VAR_12, VAR_15, VAR_6,
        VAR_8))
   return -1;
 } else if (FUNC_9(VAR_12)) {
  FUNC_15(VAR_15, VAR_12->intf_hdr_len);
  VAR_12->curr_cmd->resp_skb = VAR_15;
  VAR_12->cmd_resp_received = 1;


  VAR_13->cmdrsp_buf = ((void*)0);




  if (FUNC_12(VAR_12, VAR_14->cmdrsp_addr_lo, 0)) {
   FUNC_5(VAR_12, VAR_2,
        "cmd_done: failed to clear cmd_rsp_addr_lo\n");
   return -1;
  }


  if (FUNC_12(VAR_12, VAR_14->cmdrsp_addr_hi, 0)) {
   FUNC_5(VAR_12, VAR_2,
        "cmd_done: failed to clear cmd_rsp_addr_hi\n");
   return -1;
  }
 }

 return 0;
}
