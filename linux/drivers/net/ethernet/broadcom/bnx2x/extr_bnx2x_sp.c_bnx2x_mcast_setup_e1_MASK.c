
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mac_configuration_cmd {TYPE_1__* config_table; } ;
struct bnx2x_raw_obj {int rdata_mapping; int cid; int (* clear_pending ) (struct bnx2x_raw_obj*) ;scalar_t__ rdata; } ;
struct bnx2x_mcast_ramrod_params {int ramrod_flags; struct bnx2x_mcast_obj* mcast_obj; } ;
struct bnx2x_mcast_obj {int max_cmd_len; int total_pending_num; int (* clear_sched ) (struct bnx2x_mcast_obj*) ;int pending_cmds_head; struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int,int ) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_mcast_obj*) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int ) ;
 int FUNC_8 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct mac_configuration_cmd*,int ,int) ;
 int FUNC_11 (struct bnx2x_mcast_obj*) ;
 int FUNC_12 (struct bnx2x_raw_obj*) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct bnx2x *VAR_5,
    struct bnx2x_mcast_ramrod_params *VAR_6,
    enum bnx2x_mcast_cmd VAR_7)
{
 struct bnx2x_mcast_obj *VAR_8 = VAR_6->mcast_obj;
 struct bnx2x_raw_obj *VAR_9 = &VAR_8->raw;
 struct mac_configuration_cmd *VAR_10 =
  (struct mac_configuration_cmd *)(VAR_9->rdata);
 int VAR_11 = 0, VAR_12, VAR_13;


 FUNC_10(VAR_10, 0, sizeof(*VAR_10));


 for (VAR_12 = 0; VAR_12 < VAR_8->max_cmd_len ; VAR_12++)
  FUNC_0(VAR_10->config_table[VAR_12].flags,
    VAR_1,
    VAR_4);


 VAR_11 = FUNC_5(VAR_5, VAR_6);


 if (FUNC_9(&VAR_8->pending_cmds_head))
  VAR_8->clear_sched(VAR_8);


 if (!VAR_11)
  VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7, 0);




 VAR_8->total_pending_num -= VAR_8->max_cmd_len;



 FUNC_3(VAR_11 > VAR_8->max_cmd_len);


 FUNC_7(VAR_5, VAR_6, (u8)VAR_11);







 VAR_13 = FUNC_6(VAR_5, VAR_8);
 if (VAR_13)
  return VAR_13;




 if (FUNC_13(VAR_3, &VAR_6->ramrod_flags)) {
  VAR_9->clear_pending(VAR_9);
  return 0;
 } else {
  VAR_13 = FUNC_8(VAR_5, VAR_2, VAR_9->cid,
       FUNC_1(VAR_9->rdata_mapping),
       FUNC_2(VAR_9->rdata_mapping),
       VAR_0);
  if (VAR_13)
   return VAR_13;


  return 1;
 }
}
