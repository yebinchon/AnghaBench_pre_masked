
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int duplex; int autoneg; int speed; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct ena_com_dev {int dummy; } ;
struct ena_admin_get_feature_link_desc {int flags; int speed; } ;
struct TYPE_3__ {struct ena_admin_get_feature_link_desc link; } ;
struct ena_admin_get_feat_resp {TYPE_1__ u; } ;
struct ena_adapter {struct ena_com_dev* ena_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_admin_get_feat_resp*) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ,int ) ;
 struct ena_adapter* FUNC_2 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
      struct ethtool_link_ksettings *VAR_7)
{
 struct ena_adapter *VAR_8 = FUNC_2(VAR_6);
 struct ena_com_dev *VAR_9 = VAR_8->ena_dev;
 struct ena_admin_get_feature_link_desc *VAR_10;
 struct ena_admin_get_feat_resp VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_9, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_10 = &VAR_11.u.link;
 VAR_7->base.speed = VAR_10->speed;

 if (VAR_10->flags & VAR_4) {
  FUNC_1(VAR_7,
           VAR_5, VAR_2);
  FUNC_1(VAR_7,
           VAR_5, VAR_2);
 }

 VAR_7->base.autoneg =
  (VAR_10->flags & VAR_4) ?
  VAR_1 : VAR_0;

 VAR_7->base.duplex = VAR_3;

 return 0;
}
