
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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





__attribute__((used)) static int
FUNC_0(struct net_device_context *VAR_8,
    struct ethtool_rxnfc *VAR_9)
{
 const u32 VAR_10 = VAR_6 | VAR_7;

 VAR_9->data = VAR_5 | VAR_4;

 switch (VAR_9->flow_type) {
 case 131:
  if (VAR_8->l4_hash & VAR_0)
   VAR_9->data |= VAR_10;

  break;

 case 130:
  if (VAR_8->l4_hash & VAR_1)
   VAR_9->data |= VAR_10;

  break;

 case 129:
  if (VAR_8->l4_hash & VAR_2)
   VAR_9->data |= VAR_10;

  break;

 case 128:
  if (VAR_8->l4_hash & VAR_3)
   VAR_9->data |= VAR_10;

  break;

 case 133:
 case 132:
  break;
 default:
  VAR_9->data = 0;
  break;
 }

 return 0;
}
