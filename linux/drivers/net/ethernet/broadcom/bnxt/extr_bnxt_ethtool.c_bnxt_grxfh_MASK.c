
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_rxnfc {int data; int flow_type; } ;
struct bnxt {int rss_hash_cfg; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_8, struct ethtool_rxnfc *VAR_9)
{
 VAR_9->data = 0;
 switch (VAR_9->flow_type) {
 case 131:
  if (VAR_8->rss_hash_cfg & VAR_4)
   VAR_9->data |= VAR_1 | VAR_0 |
         VAR_2 | VAR_3;
  VAR_9->data |= FUNC_0(VAR_8);
  break;
 case 129:
  if (VAR_8->rss_hash_cfg & VAR_6)
   VAR_9->data |= VAR_1 | VAR_0 |
         VAR_2 | VAR_3;

 case 133:
 case 141:
 case 139:
 case 137:
 case 135:
  VAR_9->data |= FUNC_0(VAR_8);
  break;

 case 130:
  if (VAR_8->rss_hash_cfg & VAR_5)
   VAR_9->data |= VAR_1 | VAR_0 |
         VAR_2 | VAR_3;
  VAR_9->data |= FUNC_1(VAR_8);
  break;
 case 128:
  if (VAR_8->rss_hash_cfg & VAR_7)
   VAR_9->data |= VAR_1 | VAR_0 |
         VAR_2 | VAR_3;

 case 132:
 case 140:
 case 138:
 case 136:
 case 134:
  VAR_9->data |= FUNC_1(VAR_8);
  break;
 }
 return 0;
}
