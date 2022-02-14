
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; scalar_t__ data; scalar_t__ rule_cnt; } ;
struct TYPE_2__ {int lock; scalar_t__ max; scalar_t__ free; } ;
struct enic {TYPE_1__ rfs_h; scalar_t__ rq_count; } ;


 int VAR_0 ;





 int FUNC_0 (struct enic*,struct ethtool_rxnfc*) ;
 int FUNC_1 (struct enic*,struct ethtool_rxnfc*,int *) ;
 int FUNC_2 (struct enic*,struct ethtool_rxnfc*) ;
 struct enic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2,
     u32 *VAR_3)
{
 struct enic *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_4->rq_count;
  break;
 case 131:
  FUNC_4(&VAR_4->rfs_h.lock);
  VAR_2->rule_cnt = VAR_4->rfs_h.max - VAR_4->rfs_h.free;
  VAR_2->data = VAR_4->rfs_h.max;
  FUNC_5(&VAR_4->rfs_h.lock);
  break;
 case 132:
  FUNC_4(&VAR_4->rfs_h.lock);
  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
  FUNC_5(&VAR_4->rfs_h.lock);
  break;
 case 130:
  FUNC_4(&VAR_4->rfs_h.lock);
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  FUNC_5(&VAR_4->rfs_h.lock);
  break;
 case 129:
  VAR_5 = FUNC_0(VAR_4, VAR_2);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
