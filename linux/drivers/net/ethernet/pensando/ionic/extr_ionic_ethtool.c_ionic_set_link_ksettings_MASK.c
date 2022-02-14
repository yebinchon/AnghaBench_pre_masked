
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {struct ionic* ionic; } ;
struct ionic_dev {TYPE_3__* port_info; } ;
struct ionic {int dev_cmd_lock; struct ionic_dev idev; } ;
struct TYPE_4__ {scalar_t__ autoneg; scalar_t__ speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct TYPE_5__ {scalar_t__ an_enable; scalar_t__ fec_type; int speed; } ;
struct TYPE_6__ {TYPE_2__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ethtool_link_ksettings const*,int ,int ) ;
 int FUNC_1 (struct ionic_dev*,scalar_t__) ;
 int FUNC_2 (struct ionic_dev*,scalar_t__) ;
 int FUNC_3 (struct ionic_dev*,scalar_t__) ;
 int FUNC_4 (struct ionic*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*,char*) ;
 struct ionic_lif* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8,
        const struct ethtool_link_ksettings *VAR_9)
{
 struct ionic_lif *VAR_10 = FUNC_9(VAR_8);
 struct ionic *VAR_11 = VAR_10->ionic;
 struct ionic_dev *VAR_12;
 u32 VAR_13, VAR_14;
 u8 VAR_15;
 int VAR_16 = 0;

 VAR_12 = &VAR_10->ionic->idev;
 VAR_15 = VAR_5;


 if (VAR_9->base.autoneg != VAR_12->port_info->config.an_enable) {
  FUNC_6(&VAR_11->dev_cmd_lock);
  FUNC_1(VAR_12, VAR_9->base.autoneg);
  VAR_16 = FUNC_4(VAR_11, VAR_0);
  FUNC_7(&VAR_11->dev_cmd_lock);
  if (VAR_16)
   return VAR_16;
 }


 if (VAR_9->base.speed != FUNC_5(VAR_12->port_info->config.speed)) {
  FUNC_6(&VAR_11->dev_cmd_lock);
  FUNC_3(VAR_12, VAR_9->base.speed);
  VAR_16 = FUNC_4(VAR_11, VAR_0);
  FUNC_7(&VAR_11->dev_cmd_lock);
  if (VAR_16)
   return VAR_16;
 }


 VAR_13 = FUNC_0(VAR_9, VAR_7, VAR_3);
 VAR_14 = FUNC_0(VAR_9, VAR_7, VAR_2);
 if (VAR_13 && VAR_14) {
  FUNC_8(VAR_8, "Only select one FEC mode at a time\n");
  return -VAR_1;
 } else if (VAR_14) {
  VAR_15 = VAR_4;
 } else if (VAR_13) {
  VAR_15 = VAR_6;
 } else if (!(VAR_13 | VAR_14)) {
  VAR_15 = VAR_5;
 }

 if (VAR_15 != VAR_12->port_info->config.fec_type) {
  FUNC_6(&VAR_11->dev_cmd_lock);
  FUNC_2(VAR_12, VAR_15);
  VAR_16 = FUNC_4(VAR_11, VAR_0);
  FUNC_7(&VAR_11->dev_cmd_lock);
  if (VAR_16)
   return VAR_16;
 }

 return 0;
}
