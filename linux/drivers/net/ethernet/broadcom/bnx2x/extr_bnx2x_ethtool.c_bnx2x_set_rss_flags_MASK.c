
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethtool_rxnfc {int flow_type; int data; } ;
struct TYPE_2__ {int udp_rss_v4; int udp_rss_v6; } ;
struct bnx2x {TYPE_1__ rss_conf_obj; int state; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_2 (struct bnx2x*,TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_7, struct ethtool_rxnfc *VAR_8)
{
 int VAR_9;

 FUNC_1(VAR_0,
    "Set rss flags command parameters: flow type = %d, data = %llu\n",
    VAR_8->flow_type, VAR_8->data);

 switch (VAR_8->flow_type) {
 case 131:
 case 130:

  if (VAR_8->data ^ (VAR_4 | VAR_3 |
      VAR_5 | VAR_6)) {
   FUNC_1(VAR_0,
      "Command parameters not supported\n");
   return -VAR_2;
  }
  return 0;

 case 129:
 case 128:

  if (VAR_8->data == (VAR_4 | VAR_3 |
       VAR_5 | VAR_6))
   VAR_9 = 1;
  else if (VAR_8->data == (VAR_4 | VAR_3))
   VAR_9 = 0;
  else
   return -VAR_2;

  if (FUNC_0(VAR_7) && VAR_9) {
   FUNC_1(VAR_0,
      "57710, 57711 boards don't support RSS according to UDP 4-tuple\n");
   return -VAR_2;
  }

  if ((VAR_8->flow_type == 129) &&
      (VAR_7->rss_conf_obj.udp_rss_v4 != VAR_9)) {
   VAR_7->rss_conf_obj.udp_rss_v4 = VAR_9;
   FUNC_1(VAR_0,
      "rss re-configured, UDP 4-tupple %s\n",
      VAR_9 ? "enabled" : "disabled");
   if (VAR_7->state == VAR_1)
    return FUNC_2(VAR_7, &VAR_7->rss_conf_obj, 0,
       1);
  } else if ((VAR_8->flow_type == 128) &&
      (VAR_7->rss_conf_obj.udp_rss_v6 != VAR_9)) {
   VAR_7->rss_conf_obj.udp_rss_v6 = VAR_9;
   FUNC_1(VAR_0,
      "rss re-configured, UDP 4-tupple %s\n",
      VAR_9 ? "enabled" : "disabled");
   if (VAR_7->state == VAR_1)
    return FUNC_2(VAR_7, &VAR_7->rss_conf_obj, 0,
       1);
  }
  return 0;

 case 136:
 case 135:

  if (VAR_8->data ^ (VAR_4 | VAR_3)) {
   FUNC_1(VAR_0,
      "Command parameters not supported\n");
   return -VAR_2;
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

  if (VAR_8->data) {
   FUNC_1(VAR_0,
      "Command parameters not supported\n");
   return -VAR_2;
  }
  return 0;

 default:
  return -VAR_2;
 }
}
