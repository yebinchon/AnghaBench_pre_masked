
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int rss_caps; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





__attribute__((used)) static int FUNC_0(struct qede_dev *VAR_6, struct ethtool_rxnfc *VAR_7)
{
 VAR_7->data = VAR_3 | VAR_2;

 switch (VAR_7->flow_type) {
 case 131:
 case 130:
  VAR_7->data |= VAR_4 | VAR_5;
  break;
 case 129:
  if (VAR_6->rss_caps & VAR_0)
   VAR_7->data |= VAR_4 | VAR_5;
  break;
 case 128:
  if (VAR_6->rss_caps & VAR_1)
   VAR_7->data |= VAR_4 | VAR_5;
  break;
 case 133:
 case 132:
  break;
 default:
  VAR_7->data = 0;
  break;
 }

 return 0;
}
