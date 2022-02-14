
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int asic_type; int asic_rev; int serial_num; int fw_version; } ;
struct ionic_dev {TYPE_1__ dev_info; } ;
struct ionic {struct ionic_dev idev; } ;
struct devlink_info_req {int dummy; } ;
struct devlink {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct devlink_info_req*,int ) ;
 int FUNC_1 (struct devlink_info_req*,int ) ;
 int FUNC_2 (struct devlink_info_req*,int ,char*) ;
 int FUNC_3 (struct devlink_info_req*,int ,int ) ;
 struct ionic* FUNC_4 (struct devlink*) ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_6(struct devlink *VAR_4, struct devlink_info_req *VAR_5,
        struct netlink_ext_ack *VAR_6)
{
 struct ionic *VAR_7 = FUNC_4(VAR_4);
 struct ionic_dev *VAR_8 = &VAR_7->idev;
 char VAR_9[16];
 int VAR_10 = 0;

 VAR_10 = FUNC_0(VAR_5, VAR_3);
 if (VAR_10)
  goto info_out;

 VAR_10 = FUNC_3(VAR_5,
            VAR_2,
            VAR_8->dev_info.fw_version);
 if (VAR_10)
  goto info_out;

 FUNC_5(VAR_9, sizeof(VAR_9), "0x%x", VAR_8->dev_info.asic_type);
 VAR_10 = FUNC_2(VAR_5,
          VAR_0,
          VAR_9);
 if (VAR_10)
  goto info_out;

 FUNC_5(VAR_9, sizeof(VAR_9), "0x%x", VAR_8->dev_info.asic_rev);
 VAR_10 = FUNC_2(VAR_5,
          VAR_1,
          VAR_9);
 if (VAR_10)
  goto info_out;

 VAR_10 = FUNC_1(VAR_5, VAR_8->dev_info.serial_num);

info_out:
 return VAR_10;
}
