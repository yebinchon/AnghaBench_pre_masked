
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_3__ {int (* read_mmc_stats ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {TYPE_1__ hw_ops; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_4__ {int stat_offset; } ;


 int VAR_0 ;
 struct xlgmac_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
          struct ethtool_stats *VAR_3,
          u64 *VAR_4)
{
 struct xlgmac_pdata *VAR_5 = FUNC_0(VAR_2);
 u8 *VAR_6;
 int VAR_7;

 VAR_5->hw_ops.read_mmc_stats(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = (u8 *)VAR_5 + VAR_1[VAR_7].stat_offset;
  *VAR_4++ = *(u64 *)VAR_6;
 }
}
