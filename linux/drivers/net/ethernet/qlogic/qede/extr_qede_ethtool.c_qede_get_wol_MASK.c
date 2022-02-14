
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wol_support; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct qede_dev {scalar_t__ wol_enabled; TYPE_2__ dev_info; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {void* wolopts; void* supported; } ;


 void* VAR_0 ;
 struct qede_dev* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->dev_info.common.wol_support) {
  VAR_2->supported = VAR_0;
  VAR_2->wolopts = VAR_3->wol_enabled ? VAR_0 : 0;
 }
}
