
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int app_cap_flags; } ;
struct octeon_device {int eswitch_mode; TYPE_1__ fw_info; } ;
struct netlink_ext_ack {int dummy; } ;
struct lio_devlink_priv {struct octeon_device* oct; } ;
struct devlink {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct lio_devlink_priv* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*) ;

__attribute__((used)) static int
FUNC_3(struct devlink *VAR_2, u16 VAR_3,
     struct netlink_ext_ack *VAR_4)
{
 struct lio_devlink_priv *VAR_5;
 struct octeon_device *VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = VAR_5->oct;

 if (!(VAR_6->fw_info.app_cap_flags & VAR_1))
  return -VAR_0;

 if (VAR_6->eswitch_mode == VAR_3)
  return 0;

 switch (VAR_3) {
 case 128:
  VAR_6->eswitch_mode = VAR_3;
  VAR_7 = FUNC_1(VAR_6);
  break;

 case 129:
  FUNC_2(VAR_6);
  VAR_6->eswitch_mode = VAR_3;
  break;

 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
