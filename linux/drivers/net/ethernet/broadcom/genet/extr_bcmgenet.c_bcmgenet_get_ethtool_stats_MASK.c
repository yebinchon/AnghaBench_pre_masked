
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct net_device {int stats; } ;
struct ethtool_stats {int dummy; } ;
struct bcmgenet_stats {scalar_t__ type; int stat_sizeof; int stat_offset; } ;
struct bcmgenet_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct bcmgenet_stats* VAR_2 ;
 int FUNC_0 (struct bcmgenet_priv*) ;
 struct bcmgenet_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
           struct ethtool_stats *VAR_4,
           u64 *VAR_5)
{
 struct bcmgenet_priv *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 if (FUNC_2(VAR_3))
  FUNC_0(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  const struct bcmgenet_stats *VAR_8;
  char *VAR_9;

  VAR_8 = &VAR_2[VAR_7];
  if (VAR_8->type == VAR_1)
   VAR_9 = (char *)&VAR_3->stats;
  else
   VAR_9 = (char *)VAR_6;
  VAR_9 += VAR_8->stat_offset;
  if (sizeof(unsigned long) != sizeof(u32) &&
      VAR_8->stat_sizeof == sizeof(unsigned long))
   VAR_5[VAR_7] = *(unsigned long *)VAR_9;
  else
   VAR_5[VAR_7] = *(u32 *)VAR_9;
 }
}
