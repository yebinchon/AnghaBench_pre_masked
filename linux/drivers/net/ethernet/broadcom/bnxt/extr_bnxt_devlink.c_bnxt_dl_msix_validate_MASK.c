
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {int vu32; } ;
typedef scalar_t__ u32 ;
struct netlink_ext_ack {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static int FUNC_1(struct devlink *VAR_5, u32 VAR_6,
     union devlink_param_value VAR_7,
     struct netlink_ext_ack *VAR_8)
{
 int VAR_9 = -1;

 if (VAR_6 == VAR_2)
  VAR_9 = VAR_0;

 if (VAR_6 == VAR_3)
  VAR_9 = VAR_1;

 if (VAR_7.vu32 > VAR_9) {
  FUNC_0(VAR_8, "MSIX value is exceeding the range");
  return -VAR_4;
 }

 return 0;
}
