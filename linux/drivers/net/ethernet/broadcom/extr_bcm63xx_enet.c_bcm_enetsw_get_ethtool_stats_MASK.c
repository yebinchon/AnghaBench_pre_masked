
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct net_device {int stats; } ;
struct ethtool_stats {int dummy; } ;
struct bcm_enet_stats {int mib_reg; int stat_offset; int sizeof_stat; } ;
struct bcm_enet_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct bcm_enet_stats* VAR_1 ;
 int FUNC_1 (struct bcm_enet_priv*,int ) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
      struct ethtool_stats *VAR_3,
      u64 *VAR_4)
{
 struct bcm_enet_priv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct bcm_enet_stats *VAR_7;
  u32 VAR_8, VAR_9;
  char *VAR_10;
  int VAR_11;

  VAR_7 = &VAR_1[VAR_6];

  VAR_11 = VAR_7->mib_reg;
  if (VAR_11 == -1)
   continue;

  VAR_8 = FUNC_1(VAR_5, FUNC_0(VAR_11));
  VAR_10 = (char *)VAR_5 + VAR_7->stat_offset;

  if (VAR_7->sizeof_stat == sizeof(u64)) {
   VAR_9 = FUNC_1(VAR_5, FUNC_0(VAR_11 + 1));
   *(u64 *)VAR_10 = ((u64)VAR_9 << 32 | VAR_8);
  } else {
   *(u32 *)VAR_10 = VAR_8;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct bcm_enet_stats *VAR_12;
  char *VAR_13;

  VAR_12 = &VAR_1[VAR_6];

  if (VAR_12->mib_reg == -1)
   VAR_13 = (char *)&VAR_2->stats + VAR_12->stat_offset;
  else
   VAR_13 = (char *)VAR_5 + VAR_12->stat_offset;

  VAR_4[VAR_6] = (VAR_12->sizeof_stat == sizeof(u64)) ?
   *(u64 *)VAR_13 : *(u32 *)VAR_13;
 }
}
