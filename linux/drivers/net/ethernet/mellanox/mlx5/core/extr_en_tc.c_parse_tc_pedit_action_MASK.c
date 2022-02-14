
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct pedit_headers_action {int pedits; } ;
struct netlink_ext_ack {int dummy; } ;
struct mlx5e_tc_flow_parse_attr {int dummy; } ;
struct mlx5e_priv {int mdev; } ;
struct TYPE_2__ {scalar_t__ htype; int offset; int val; int mask; } ;
struct flow_action_entry {scalar_t__ id; TYPE_1__ mangle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,struct pedit_headers_action*) ;

__attribute__((used)) static int FUNC_3(struct mlx5e_priv *VAR_3,
     const struct flow_action_entry *VAR_4, int VAR_5,
     struct mlx5e_tc_flow_parse_attr *VAR_6,
     struct pedit_headers_action *VAR_7,
     struct netlink_ext_ack *VAR_8)
{
 u8 VAR_9 = (VAR_4->id == VAR_1) ? 0 : 1;
 int VAR_10 = -VAR_0;
 u32 VAR_11, VAR_12, VAR_13;
 u8 VAR_14;

 VAR_14 = VAR_4->mangle.htype;
 VAR_10 = -VAR_0;

 if (VAR_14 == VAR_2) {
  FUNC_0(VAR_8, "legacy pedit isn't offloaded");
  goto out_err;
 }

 if (!FUNC_1(VAR_3->mdev, VAR_5)) {
  FUNC_0(VAR_8,
       "The pedit offload action is not supported");
  goto out_err;
 }

 VAR_11 = VAR_4->mangle.mask;
 VAR_12 = VAR_4->mangle.val;
 VAR_13 = VAR_4->mangle.offset;

 VAR_10 = FUNC_2(VAR_14, ~VAR_11, VAR_12, VAR_13, &VAR_7[VAR_9]);
 if (VAR_10)
  goto out_err;

 VAR_7[VAR_9].pedits++;

 return 0;
out_err:
 return VAR_10;
}
