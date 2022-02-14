
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;
struct dpaa_priv {int keygen_in_use; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 struct dpaa_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4,
         struct ethtool_rxnfc *VAR_5)
{
 struct dpaa_priv *VAR_6 = FUNC_0(VAR_4);

 VAR_5->data = 0;

 switch (VAR_5->flow_type) {
 case 131:
 case 130:
 case 129:
 case 128:
  if (VAR_6->keygen_in_use)
   VAR_5->data |= VAR_2 | VAR_3;

 case 135:
 case 134:
 case 133:
 case 132:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
  if (VAR_6->keygen_in_use)
   VAR_5->data |= VAR_1 | VAR_0;
  break;
 default:
  VAR_5->data = 0;
  break;
 }

 return 0;
}
