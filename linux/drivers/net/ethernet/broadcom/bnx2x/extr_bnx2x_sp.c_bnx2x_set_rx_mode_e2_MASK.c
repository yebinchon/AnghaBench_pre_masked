
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {int rule_cnt; } ;
struct eth_filter_rules_ramrod_data {TYPE_1__ header; TYPE_2__* rules; } ;
struct bnx2x_rx_mode_ramrod_params {int rdata_mapping; int cid; int tx_accept_flags; int rx_accept_flags; int func_id; int ramrod_flags; int rx_mode_flags; void* cl_id; struct eth_filter_rules_ramrod_data* rdata; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {void* cmd_general_data; int func_id; void* client_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int *,TYPE_2__*,int) ;
 int FUNC_5 (int ,TYPE_1__*,size_t) ;
 int FUNC_6 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_7 (struct eth_filter_rules_ramrod_data*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct bnx2x *VAR_9,
    struct bnx2x_rx_mode_ramrod_params *VAR_10)
{
 struct eth_filter_rules_ramrod_data *VAR_11 = VAR_10->rdata;
 int VAR_12;
 u8 VAR_13 = 0;


 FUNC_7(VAR_11, 0, sizeof(*VAR_11));




 if (FUNC_8(VAR_7, &VAR_10->ramrod_flags)) {
  VAR_11->rules[VAR_13].client_id = VAR_10->cl_id;
  VAR_11->rules[VAR_13].func_id = VAR_10->func_id;

  VAR_11->rules[VAR_13].cmd_general_data =
   VAR_4;

  FUNC_4(VAR_9, &VAR_10->tx_accept_flags,
            &(VAR_11->rules[VAR_13++]),
            0);
 }


 if (FUNC_8(VAR_6, &VAR_10->ramrod_flags)) {
  VAR_11->rules[VAR_13].client_id = VAR_10->cl_id;
  VAR_11->rules[VAR_13].func_id = VAR_10->func_id;

  VAR_11->rules[VAR_13].cmd_general_data =
   VAR_3;

  FUNC_4(VAR_9, &VAR_10->rx_accept_flags,
            &(VAR_11->rules[VAR_13++]),
            0);
 }







 if (FUNC_8(VAR_1, &VAR_10->rx_mode_flags)) {

  if (FUNC_8(VAR_7, &VAR_10->ramrod_flags)) {
   VAR_11->rules[VAR_13].client_id = FUNC_3(VAR_9, VAR_8);
   VAR_11->rules[VAR_13].func_id = VAR_10->func_id;

   VAR_11->rules[VAR_13].cmd_general_data =
      VAR_4;

   FUNC_4(VAR_9, &VAR_10->tx_accept_flags,
             &(VAR_11->rules[VAR_13]),
             1);
   VAR_13++;
  }


  if (FUNC_8(VAR_6, &VAR_10->ramrod_flags)) {
   VAR_11->rules[VAR_13].client_id = FUNC_3(VAR_9, VAR_8);
   VAR_11->rules[VAR_13].func_id = VAR_10->func_id;

   VAR_11->rules[VAR_13].cmd_general_data =
      VAR_3;

   FUNC_4(VAR_9, &VAR_10->rx_accept_flags,
             &(VAR_11->rules[VAR_13]),
             1);
   VAR_13++;
  }
 }




 FUNC_5(VAR_10->cid, &VAR_11->header, VAR_13);

 FUNC_0(VAR_0, "About to configure %d rules, rx_accept_flags 0x%lx, tx_accept_flags 0x%lx\n",
    VAR_11->header.rule_cnt, VAR_10->rx_accept_flags,
    VAR_10->tx_accept_flags);
 VAR_12 = FUNC_6(VAR_9, VAR_5, VAR_10->cid,
      FUNC_1(VAR_10->rdata_mapping),
      FUNC_2(VAR_10->rdata_mapping),
      VAR_2);
 if (VAR_12)
  return VAR_12;


 return 1;
}
