
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethtool_rxnfc {scalar_t__ data; int flow_type; } ;
struct bnxt {int flags; int dev; int rss_hash_cfg; } ;






 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bnxt*,int,int) ;
 int FUNC_1 (struct bnxt*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_10, struct ethtool_rxnfc *VAR_11)
{
 u32 VAR_12 = VAR_10->rss_hash_cfg;
 int VAR_13, VAR_14 = 0;

 if (VAR_11->data == VAR_3)
  VAR_13 = 4;
 else if (VAR_11->data == VAR_2)
  VAR_13 = 2;
 else if (!VAR_11->data)
  VAR_13 = 0;
 else
  return -VAR_1;

 if (VAR_11->flow_type == 131) {
  VAR_12 &= ~VAR_6;
  if (VAR_13 == 4)
   VAR_12 |= VAR_6;
 } else if (VAR_11->flow_type == 129) {
  if (VAR_13 == 4 && !(VAR_10->flags & VAR_0))
   return -VAR_1;
  VAR_12 &= ~VAR_8;
  if (VAR_13 == 4)
   VAR_12 |= VAR_8;
 } else if (VAR_11->flow_type == 130) {
  VAR_12 &= ~VAR_7;
  if (VAR_13 == 4)
   VAR_12 |= VAR_7;
 } else if (VAR_11->flow_type == 128) {
  if (VAR_13 == 4 && !(VAR_10->flags & VAR_0))
   return -VAR_1;
  VAR_12 &= ~VAR_9;
  if (VAR_13 == 4)
   VAR_12 |= VAR_9;
 } else if (VAR_13 == 4) {
  return -VAR_1;
 }

 switch (VAR_11->flow_type) {
 case 131:
 case 129:
 case 133:
 case 141:
 case 139:
 case 137:
 case 135:
  if (VAR_13 == 2)
   VAR_12 |= VAR_4;
  else if (!VAR_13)
   VAR_12 &= ~VAR_4;
  break;

 case 130:
 case 128:
 case 132:
 case 140:
 case 138:
 case 136:
 case 134:
  if (VAR_13 == 2)
   VAR_12 |= VAR_5;
  else if (!VAR_13)
   VAR_12 &= ~VAR_5;
  break;
 }

 if (VAR_10->rss_hash_cfg == VAR_12)
  return 0;

 VAR_10->rss_hash_cfg = VAR_12;
 if (FUNC_2(VAR_10->dev)) {
  FUNC_0(VAR_10, 0, 0);
  VAR_14 = FUNC_1(VAR_10, 0, 0);
 }
 return VAR_14;
}
