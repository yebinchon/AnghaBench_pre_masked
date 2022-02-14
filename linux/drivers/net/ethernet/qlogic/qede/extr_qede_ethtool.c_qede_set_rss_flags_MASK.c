
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qede_dev {int rss_caps; scalar_t__ state; int cdev; TYPE_1__* ops; int rss_params_inited; } ;
struct qed_update_vport_params {int update_rss_flg; int rss_params; } ;
struct ethtool_rxnfc {int flow_type; int data; } ;
struct TYPE_2__ {int (* vport_update ) (int ,struct qed_update_vport_params*) ;} ;






 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int FUNC_2 (struct qede_dev*) ;
 int FUNC_3 (struct qede_dev*) ;
 int FUNC_4 (struct qede_dev*,int *,int *) ;
 int FUNC_5 (int ,struct qed_update_vport_params*) ;
 int FUNC_6 (struct qed_update_vport_params*) ;
 struct qed_update_vport_params* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct qede_dev *VAR_11, struct ethtool_rxnfc *VAR_12)
{
 struct qed_update_vport_params *VAR_13;
 u8 VAR_14 = 0, VAR_15 = 0;
 int VAR_16 = 0;

 FUNC_1(VAR_11, VAR_4,
     "Set rss flags command parameters: flow type = %d, data = %llu\n",
     VAR_12->flow_type, VAR_12->data);

 switch (VAR_12->flow_type) {
 case 131:
 case 130:

  if (VAR_12->data ^ (VAR_8 | VAR_7 |
      VAR_9 | VAR_10)) {
   FUNC_0(VAR_11, "Command parameters not supported\n");
   return -VAR_0;
  }
  return 0;
 case 129:

  if (VAR_12->data == (VAR_8 | VAR_7 |
       VAR_9 | VAR_10)) {
   VAR_14 = VAR_5;
   FUNC_1(VAR_11, VAR_4,
       "UDP 4-tuple enabled\n");
  } else if (VAR_12->data == (VAR_8 | VAR_7)) {
   VAR_15 = VAR_5;
   FUNC_1(VAR_11, VAR_4,
       "UDP 4-tuple disabled\n");
  } else {
   return -VAR_0;
  }
  break;
 case 128:

  if (VAR_12->data == (VAR_8 | VAR_7 |
       VAR_9 | VAR_10)) {
   VAR_14 = VAR_6;
   FUNC_1(VAR_11, VAR_4,
       "UDP 4-tuple enabled\n");
  } else if (VAR_12->data == (VAR_8 | VAR_7)) {
   VAR_15 = VAR_6;
   FUNC_1(VAR_11, VAR_4,
       "UDP 4-tuple disabled\n");
  } else {
   return -VAR_0;
  }
  break;
 case 136:
 case 135:

  if (VAR_12->data ^ (VAR_8 | VAR_7)) {
   FUNC_0(VAR_11, "Command parameters not supported\n");
   return -VAR_0;
  }
  return 0;
 case 133:
 case 143:
 case 141:
 case 139:
 case 132:
 case 142:
 case 140:
 case 138:
 case 134:
 case 137:

  if (VAR_12->data) {
   FUNC_0(VAR_11, "Command parameters not supported\n");
   return -VAR_0;
  }
  return 0;
 default:
  return -VAR_0;
 }


 if (VAR_11->rss_caps == ((VAR_11->rss_caps & ~VAR_15) | VAR_14))
  return 0;


 VAR_11->rss_caps = ((VAR_11->rss_caps & ~VAR_15) | VAR_14);
 VAR_11->rss_params_inited |= VAR_2;


 FUNC_2(VAR_11);
 if (VAR_11->state == VAR_3) {
  VAR_13 = FUNC_7(sizeof(*VAR_13));
  if (!VAR_13) {
   FUNC_3(VAR_11);
   return -VAR_1;
  }
  FUNC_4(VAR_11, &VAR_13->rss_params,
         &VAR_13->update_rss_flg);
  VAR_16 = VAR_11->ops->vport_update(VAR_11->cdev, VAR_13);
  FUNC_6(VAR_13);
 }
 FUNC_3(VAR_11);

 return VAR_16;
}
