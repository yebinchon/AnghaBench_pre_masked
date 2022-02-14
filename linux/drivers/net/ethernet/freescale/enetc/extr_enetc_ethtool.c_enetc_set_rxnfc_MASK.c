
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_6__ {size_t location; int ring_cookie; } ;
struct ethtool_rxnfc {int cmd; TYPE_3__ fs; } ;
struct enetc_ndev_priv {TYPE_1__* cls_rules; TYPE_2__* si; int num_rx_rings; } ;
struct TYPE_5__ {size_t num_fs_entries; } ;
struct TYPE_4__ {int used; TYPE_3__ fs; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,int) ;
 struct enetc_ndev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, struct ethtool_rxnfc *VAR_4)
{
 struct enetc_ndev_priv *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 switch (VAR_4->cmd) {
 case 128:
  if (VAR_4->fs.location >= VAR_5->si->num_fs_entries)
   return -VAR_0;

  if (VAR_4->fs.ring_cookie >= VAR_5->num_rx_rings &&
      VAR_4->fs.ring_cookie != VAR_2)
   return -VAR_0;

  VAR_6 = FUNC_0(VAR_5->si, &VAR_4->fs, 1);
  if (VAR_6)
   return VAR_6;
  VAR_5->cls_rules[VAR_4->fs.location].fs = VAR_4->fs;
  VAR_5->cls_rules[VAR_4->fs.location].used = 1;
  break;
 case 129:
  if (VAR_4->fs.location >= VAR_5->si->num_fs_entries)
   return -VAR_0;

  VAR_6 = FUNC_0(VAR_5->si, &VAR_4->fs, 0);
  if (VAR_6)
   return VAR_6;
  VAR_5->cls_rules[VAR_4->fs.location].used = 0;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
