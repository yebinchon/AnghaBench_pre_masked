
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {scalar_t__ vu8; } ;
typedef size_t u32 ;
struct nfp_devlink_param_u8_arg {scalar_t__ max_dl_val; scalar_t__ invalid_dl_val; } ;
struct netlink_ext_ack {int dummy; } ;
struct devlink {int dummy; } ;


 size_t FUNC_0 (struct nfp_devlink_param_u8_arg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 struct nfp_devlink_param_u8_arg* VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_3, u32 VAR_4,
         union devlink_param_value VAR_5,
         struct netlink_ext_ack *VAR_6)
{
 const struct nfp_devlink_param_u8_arg *VAR_7;

 if (VAR_4 >= FUNC_0(VAR_2))
  return -VAR_1;

 VAR_7 = &VAR_2[VAR_4];

 if (VAR_5.vu8 > VAR_7->max_dl_val) {
  FUNC_1(VAR_6, "parameter out of range");
  return -VAR_0;
 }

 if (VAR_5.vu8 == VAR_7->invalid_dl_val) {
  FUNC_1(VAR_6, "unknown/invalid value specified");
  return -VAR_0;
 }

 return 0;
}
