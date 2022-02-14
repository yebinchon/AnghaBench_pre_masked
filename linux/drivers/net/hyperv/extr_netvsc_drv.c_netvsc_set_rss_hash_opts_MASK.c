
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_context {int l4_hash; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





__attribute__((used)) static int FUNC_0(struct net_device_context *VAR_9,
        struct ethtool_rxnfc *VAR_10)
{
 if (VAR_10->data == (VAR_6 | VAR_5 |
      VAR_7 | VAR_8)) {
  switch (VAR_10->flow_type) {
  case 131:
   VAR_9->l4_hash |= VAR_1;
   break;

  case 130:
   VAR_9->l4_hash |= VAR_2;
   break;

  case 129:
   VAR_9->l4_hash |= VAR_3;
   break;

  case 128:
   VAR_9->l4_hash |= VAR_4;
   break;

  default:
   return -VAR_0;
  }

  return 0;
 }

 if (VAR_10->data == (VAR_6 | VAR_5)) {
  switch (VAR_10->flow_type) {
  case 131:
   VAR_9->l4_hash &= ~VAR_1;
   break;

  case 130:
   VAR_9->l4_hash &= ~VAR_2;
   break;

  case 129:
   VAR_9->l4_hash &= ~VAR_3;
   break;

  case 128:
   VAR_9->l4_hash &= ~VAR_4;
   break;

  default:
   return -VAR_0;
  }

  return 0;
 }

 return -VAR_0;
}
