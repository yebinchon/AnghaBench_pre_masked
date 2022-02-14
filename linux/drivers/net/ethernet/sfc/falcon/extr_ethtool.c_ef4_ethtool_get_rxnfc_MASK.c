
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; int rule_cnt; int fs; int flow_type; } ;
struct ef4_nic {int n_rx_channels; } ;
typedef int s32 ;



 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (struct ef4_nic*,int *) ;
 int FUNC_1 (struct ef4_nic*,int ) ;
 void* FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*,int ,int *,int) ;
 unsigned int FUNC_4 (struct ef4_nic*) ;
 struct ef4_nic* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_8,
        struct ethtool_rxnfc *VAR_9, u32 *VAR_10)
{
 struct ef4_nic *VAR_11 = FUNC_5(VAR_8);

 switch (VAR_9->cmd) {
 case 132:
  VAR_9->data = VAR_11->n_rx_channels;
  return 0;

 case 133: {
  unsigned VAR_12 = 0;

  VAR_9->data = 0;
  switch (VAR_9->flow_type) {
  case 129:
   VAR_9->data |= VAR_5 | VAR_6;

  case 128:
  case 130:
  case 137:
  case 131:
   VAR_9->data |= VAR_4 | VAR_3;
   VAR_12 = VAR_1;
   break;
  default:
   break;
  }
  if (FUNC_4(VAR_11) < VAR_12)
   VAR_9->data = 0;
  return 0;
 }

 case 135:
  VAR_9->data = FUNC_2(VAR_11);
  if (VAR_9->data == 0)
   return -VAR_2;
  VAR_9->data |= VAR_7;
  VAR_9->rule_cnt =
   FUNC_1(VAR_11, VAR_0);
  return 0;

 case 134:
  if (FUNC_2(VAR_11) == 0)
   return -VAR_2;
  return FUNC_0(VAR_11, &VAR_9->fs);

 case 136: {
  s32 VAR_13;
  VAR_9->data = FUNC_2(VAR_11);
  if (VAR_9->data == 0)
   return -VAR_2;
  VAR_13 = FUNC_3(VAR_11, VAR_0,
        VAR_10, VAR_9->rule_cnt);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_9->rule_cnt = VAR_13;
  return 0;
 }

 default:
  return -VAR_2;
 }
}
