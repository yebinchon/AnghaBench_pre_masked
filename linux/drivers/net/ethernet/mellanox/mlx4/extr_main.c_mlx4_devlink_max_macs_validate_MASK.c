
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {int vu32; } ;
typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_2, u32 VAR_3,
          union devlink_param_value VAR_4,
          struct netlink_ext_ack *VAR_5)
{
 u32 VAR_6 = VAR_4.vu32;

 if (VAR_6 < 1 || VAR_6 > 128)
  return -VAR_1;

 if (!FUNC_1(VAR_6)) {
  FUNC_0(VAR_5, "max_macs supported must be power of 2");
  return -VAR_0;
 }

 return 0;
}
