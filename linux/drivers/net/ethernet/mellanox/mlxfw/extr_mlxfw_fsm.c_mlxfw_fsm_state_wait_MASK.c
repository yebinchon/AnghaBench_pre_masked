
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxfw_dev {TYPE_1__* ops; } ;
typedef enum mlxfw_fsm_state_err { ____Placeholder_mlxfw_fsm_state_err } mlxfw_fsm_state_err ;
typedef enum mlxfw_fsm_state { ____Placeholder_mlxfw_fsm_state } mlxfw_fsm_state ;
struct TYPE_2__ {int (* fsm_query_state ) (struct mlxfw_dev*,int ,int*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int * VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct mlxfw_dev*,int ,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct mlxfw_dev *VAR_6, u32 VAR_7,
    enum mlxfw_fsm_state VAR_8,
    struct netlink_ext_ack *VAR_9)
{
 enum mlxfw_fsm_state_err VAR_10;
 enum mlxfw_fsm_state VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = VAR_4;
retry:
 VAR_13 = VAR_6->ops->fsm_query_state(VAR_6, VAR_7,
           &VAR_11, &VAR_10);
 if (VAR_13)
  return VAR_13;

 if (VAR_10 != VAR_2) {
  FUNC_2("Firmware flash failed: %s\n",
         VAR_5[VAR_10]);
  FUNC_0(VAR_9, "Firmware flash failed");
  return -VAR_0;
 }
 if (VAR_11 != VAR_8) {
  if (--VAR_12 == 0) {
   FUNC_2("Timeout reached on FSM state change");
   FUNC_0(VAR_9, "Timeout reached on FSM state change");
   return -VAR_1;
  }
  FUNC_1(VAR_3);
  goto retry;
 }
 return 0;
}
