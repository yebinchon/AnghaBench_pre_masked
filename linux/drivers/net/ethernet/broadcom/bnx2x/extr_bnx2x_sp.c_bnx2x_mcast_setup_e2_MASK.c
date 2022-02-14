
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eth_multicast_rules_ramrod_data {int dummy; } ;
struct bnx2x_raw_obj {int rdata_mapping; int cid; int (* clear_pending ) (struct bnx2x_raw_obj*) ;scalar_t__ rdata; } ;
struct bnx2x_mcast_ramrod_params {scalar_t__ mcast_list_len; int ramrod_flags; struct bnx2x_mcast_obj* mcast_obj; } ;
struct bnx2x_mcast_obj {scalar_t__ total_pending_num; int max_cmd_len; int (* clear_sched ) (struct bnx2x_mcast_obj*) ;int pending_cmds_head; struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_mcast_obj*) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int ) ;
 int FUNC_7 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct eth_multicast_rules_ramrod_data*,int ,int) ;
 int FUNC_10 (struct bnx2x_mcast_obj*) ;
 int FUNC_11 (struct bnx2x_raw_obj*) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct bnx2x *VAR_3,
    struct bnx2x_mcast_ramrod_params *VAR_4,
    enum bnx2x_mcast_cmd VAR_5)
{
 struct bnx2x_raw_obj *VAR_6 = &VAR_4->mcast_obj->raw;
 struct bnx2x_mcast_obj *VAR_7 = VAR_4->mcast_obj;
 struct eth_multicast_rules_ramrod_data *VAR_8 =
  (struct eth_multicast_rules_ramrod_data *)(VAR_6->rdata);
 int VAR_9 = 0, VAR_10;


 FUNC_9(VAR_8, 0, sizeof(*VAR_8));

 VAR_9 = FUNC_4(VAR_3, VAR_4);


 if (FUNC_8(&VAR_7->pending_cmds_head))
  VAR_7->clear_sched(VAR_7);







 if (VAR_4->mcast_list_len > 0)
  VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_9);




 VAR_7->total_pending_num -= VAR_9;


 FUNC_2(VAR_7->total_pending_num < 0);
 FUNC_2(VAR_9 > VAR_7->max_cmd_len);

 FUNC_6(VAR_3, VAR_4, (u8)VAR_9);
 if (!VAR_7->total_pending_num)
  FUNC_5(VAR_3, VAR_7);






 if (FUNC_12(VAR_2, &VAR_4->ramrod_flags) || !VAR_9) {
  VAR_6->clear_pending(VAR_6);
  return 0;
 } else {
  VAR_10 = FUNC_7(VAR_3, VAR_1,
       VAR_6->cid, FUNC_0(VAR_6->rdata_mapping),
       FUNC_1(VAR_6->rdata_mapping),
       VAR_0);
  if (VAR_10)
   return VAR_10;


  return 1;
 }
}
