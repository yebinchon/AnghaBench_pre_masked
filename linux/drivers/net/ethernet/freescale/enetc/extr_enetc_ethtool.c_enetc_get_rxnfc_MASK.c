
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {size_t location; } ;
struct ethtool_rxnfc {int cmd; int data; int rule_cnt; TYPE_1__ fs; } ;
struct enetc_ndev_priv {int num_rx_rings; TYPE_3__* cls_rules; TYPE_2__* si; } ;
struct TYPE_6__ {int used; TYPE_1__ fs; } ;
struct TYPE_5__ {int num_fs_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct ethtool_rxnfc*) ;
 struct enetc_ndev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, struct ethtool_rxnfc *VAR_4,
      u32 *VAR_5)
{
 struct enetc_ndev_priv *VAR_6 = FUNC_1(VAR_3);
 int VAR_7, VAR_8;

 switch (VAR_4->cmd) {
 case 128:
  VAR_4->data = VAR_6->num_rx_rings;
  break;
 case 129:

  return FUNC_0(VAR_4);
 case 131:

  VAR_4->data = VAR_6->si->num_fs_entries;

  VAR_4->rule_cnt = 0;
  for (VAR_7 = 0; VAR_7 < VAR_6->si->num_fs_entries; VAR_7++)
   if (VAR_6->cls_rules[VAR_7].used)
    VAR_4->rule_cnt++;
  break;
 case 130:
  if (VAR_4->fs.location >= VAR_6->si->num_fs_entries)
   return -VAR_0;


  VAR_4->fs = VAR_6->cls_rules[VAR_4->fs.location].fs;
  break;
 case 132:

  VAR_4->data = VAR_6->si->num_fs_entries;

  VAR_8 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_6->si->num_fs_entries; VAR_7++) {
   if (!VAR_6->cls_rules[VAR_7].used)
    continue;
   if (VAR_8 == VAR_4->rule_cnt)
    return -VAR_1;
   VAR_5[VAR_8++] = VAR_7;
  }

  VAR_4->rule_cnt = VAR_8;
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
