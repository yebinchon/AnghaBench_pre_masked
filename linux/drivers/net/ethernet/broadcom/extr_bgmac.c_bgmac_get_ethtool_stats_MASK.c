
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct bgmac_stat {int size; scalar_t__ offset; } ;
struct bgmac {int dummy; } ;


 unsigned int VAR_0 ;
 struct bgmac_stat* VAR_1 ;
 int FUNC_0 (struct bgmac*,scalar_t__) ;
 struct bgmac* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
        struct ethtool_stats *VAR_3, uint64_t *VAR_4)
{
 struct bgmac *VAR_5 = FUNC_1(VAR_2);
 const struct bgmac_stat *VAR_6;
 unsigned int VAR_7;
 u64 VAR_8;

 if (!FUNC_2(VAR_2))
  return;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_1[VAR_7];
  VAR_8 = 0;
  if (VAR_6->size == 8)
   VAR_8 = (u64)FUNC_0(VAR_5, VAR_6->offset + 4) << 32;
  VAR_8 |= FUNC_0(VAR_5, VAR_6->offset);
  VAR_4[VAR_7] = VAR_8;
 }
}
