
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {scalar_t__ vu8; } ;
typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct devlink {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static int
FUNC_1(struct devlink *VAR_3, u32 VAR_4,
            union devlink_param_value VAR_5,
            struct netlink_ext_ack *VAR_6)
{
 if ((VAR_5.vu8 != VAR_0) &&
     (VAR_5.vu8 != VAR_1)) {
  FUNC_0(VAR_6, "'fw_load_policy' must be 'driver' or 'flash'");
  return -VAR_2;
 }

 return 0;
}
