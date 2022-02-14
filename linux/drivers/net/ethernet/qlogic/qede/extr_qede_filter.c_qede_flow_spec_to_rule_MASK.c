
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {int dummy; } ;
struct qede_arfs_tuple {int dummy; } ;
struct ethtool_rx_flow_spec_input {struct ethtool_rx_flow_spec* fs; } ;
struct ethtool_rx_flow_spec {int flow_type; int location; } ;
struct ethtool_rx_flow_rule {TYPE_1__* rule; } ;
typedef int __be16 ;
struct TYPE_2__ {int action; } ;


 int FUNC_0 (struct qede_dev*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ethtool_rx_flow_rule*) ;
 int VAR_5 ;
 int FUNC_2 (struct ethtool_rx_flow_rule*) ;




 struct ethtool_rx_flow_rule* FUNC_3 (struct ethtool_rx_flow_spec_input*) ;
 int FUNC_4 (struct ethtool_rx_flow_rule*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qede_dev*,int *,struct qede_arfs_tuple*,int ) ;
 scalar_t__ FUNC_7 (struct qede_dev*,struct ethtool_rx_flow_spec*) ;
 scalar_t__ FUNC_8 (struct qede_dev*,int ,TYPE_1__*,struct qede_arfs_tuple*) ;

__attribute__((used)) static int FUNC_9(struct qede_dev *VAR_6,
      struct qede_arfs_tuple *VAR_7,
      struct ethtool_rx_flow_spec *VAR_8)
{
 struct ethtool_rx_flow_spec_input VAR_9 = {};
 struct ethtool_rx_flow_rule *VAR_10;
 __be16 VAR_11;
 int VAR_12 = 0;

 if (FUNC_7(VAR_6, VAR_8))
  return -VAR_1;

 switch ((VAR_8->flow_type & ~VAR_4)) {
 case 131:
 case 129:
  VAR_11 = FUNC_5(VAR_2);
  break;
 case 130:
 case 128:
  VAR_11 = FUNC_5(VAR_3);
  break;
 default:
  FUNC_0(VAR_6, VAR_5,
      "Can't support flow of type %08x\n", VAR_8->flow_type);
  return -VAR_1;
 }

 VAR_9.fs = VAR_8;
 VAR_10 = FUNC_3(&VAR_9);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 if (FUNC_8(VAR_6, VAR_11, VAR_10->rule, VAR_7)) {
  VAR_12 = -VAR_0;
  goto err_out;
 }


 VAR_12 = FUNC_6(VAR_6, &VAR_10->rule->action, VAR_7,
          VAR_8->location);
err_out:
 FUNC_4(VAR_10);
 return VAR_12;

}
