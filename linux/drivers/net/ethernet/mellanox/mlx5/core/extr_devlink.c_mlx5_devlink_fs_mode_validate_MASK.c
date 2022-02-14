
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union devlink_param_value {char* vstr; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct mlx5_core_dev* FUNC_1 (struct devlink*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(struct devlink *VAR_3, u32 VAR_4,
      union devlink_param_value VAR_5,
      struct netlink_ext_ack *VAR_6)
{
 struct mlx5_core_dev *VAR_7 = FUNC_1(VAR_3);
 char *VAR_8 = VAR_5.vstr;
 int VAR_9 = 0;

 if (!FUNC_4(VAR_8, "dmfs")) {
  return 0;
 } else if (!FUNC_4(VAR_8, "smfs")) {
  u8 VAR_10;
  bool VAR_11;

  VAR_10 = FUNC_2(VAR_7->priv.eswitch);
  VAR_11 = FUNC_3(VAR_7);

  if (!VAR_11) {
   VAR_9 = -VAR_1;
   FUNC_0(VAR_6,
        "Software managed steering is not supported by current device");
  }

  else if (VAR_10 == VAR_2) {
   FUNC_0(VAR_6,
        "Software managed steering is not supported when eswitch offloads enabled.");
   VAR_9 = -VAR_1;
  }
 } else {
  FUNC_0(VAR_6,
       "Bad parameter: supported values are [\"dmfs\", \"smfs\"]");
  VAR_9 = -VAR_0;
 }

 return VAR_9;
}
