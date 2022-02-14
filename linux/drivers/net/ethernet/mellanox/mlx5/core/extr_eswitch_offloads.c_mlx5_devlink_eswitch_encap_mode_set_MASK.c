
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {int encap; int num_flows; } ;
struct mlx5_eswitch {scalar_t__ mode; int nvports; TYPE_2__ offloads; } ;
struct TYPE_3__ {struct mlx5_eswitch* eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct devlink {int dummy; } ;
typedef enum devlink_eswitch_encap_mode { ____Placeholder_devlink_eswitch_encap_mode } devlink_eswitch_encap_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_4 ;
 struct mlx5_core_dev* FUNC_3 (struct devlink*) ;
 int FUNC_4 (struct mlx5_eswitch*,int ) ;
 int FUNC_5 (struct mlx5_eswitch*) ;
 int FUNC_6 (struct devlink*) ;
 int VAR_5 ;

int FUNC_7(struct devlink *VAR_6,
     enum devlink_eswitch_encap_mode VAR_7,
     struct netlink_ext_ack *VAR_8)
{
 struct mlx5_core_dev *VAR_9 = FUNC_3(VAR_6);
 struct mlx5_eswitch *VAR_10 = VAR_9->priv.eswitch;
 int VAR_11;

 VAR_11 = FUNC_6(VAR_6);
 if (VAR_11)
  return VAR_11;

 if (VAR_7 != VAR_1 &&
     (!FUNC_0(VAR_9, VAR_5) ||
      !FUNC_0(VAR_9, VAR_4)))
  return -VAR_2;

 if (VAR_7 && VAR_7 != VAR_0)
  return -VAR_2;

 if (VAR_10->mode == VAR_3) {
  VAR_10->offloads.encap = VAR_7;
  return 0;
 }

 if (VAR_10->offloads.encap == VAR_7)
  return 0;

 if (FUNC_2(&VAR_10->offloads.num_flows) > 0) {
  FUNC_1(VAR_8,
       "Can't set encapsulation when flows are configured");
  return -VAR_2;
 }

 FUNC_5(VAR_10);

 VAR_10->offloads.encap = VAR_7;

 VAR_11 = FUNC_4(VAR_10, VAR_10->nvports);

 if (VAR_11) {
  FUNC_1(VAR_8,
       "Failed re-creating fast FDB table");
  VAR_10->offloads.encap = !VAR_7;
  (void)FUNC_4(VAR_10, VAR_10->nvports);
 }

 return VAR_11;
}
