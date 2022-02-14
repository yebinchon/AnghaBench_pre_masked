
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct xgmac_priv {int base; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {int stat_offset; scalar_t__ is_reg; } ;


 int VAR_0 ;
 struct xgmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
      struct ethtool_stats *VAR_3,
      u64 *VAR_4)
{
 struct xgmac_priv *VAR_5 = FUNC_0(VAR_2);
 void *VAR_6 = VAR_5;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_1[VAR_7].is_reg)
   *VAR_4++ = FUNC_1(VAR_5->base +
    VAR_1[VAR_7].stat_offset);
  else
   *VAR_4++ = *(u32 *)(VAR_6 +
    VAR_1[VAR_7].stat_offset);
 }
}
