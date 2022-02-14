
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wol_support; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
struct qede_dev {int wol_enabled; int cdev; TYPE_4__* ops; TYPE_2__ dev_info; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_8__ {TYPE_3__* common; } ;
struct TYPE_7__ {int (* update_wol ) (int ,int) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct qede_dev *VAR_4 = FUNC_1(VAR_2);
 bool VAR_5;
 int VAR_6;

 if (VAR_3->wolopts & ~VAR_1) {
  FUNC_0(VAR_4,
   "Can't support WoL options other than magic-packet\n");
  return -VAR_0;
 }

 VAR_5 = !!(VAR_3->wolopts & VAR_1);
 if (VAR_5 == VAR_4->wol_enabled)
  return 0;


 if (!VAR_4->dev_info.common.wol_support) {
  FUNC_0(VAR_4, "Device doesn't support WoL\n");
  return -VAR_0;
 }

 VAR_6 = VAR_4->ops->common->update_wol(VAR_4->cdev, VAR_5);
 if (!VAR_6)
  VAR_4->wol_enabled = VAR_5;

 return VAR_6;
}
