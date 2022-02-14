
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
         struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 unsigned int VAR_4;
 u32 VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0 / 2; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1, VAR_4);
  VAR_6 = FUNC_0(VAR_1, VAR_4 | 0x80);
  VAR_3[VAR_4] = VAR_5;
  VAR_3[VAR_4 + VAR_0 / 2] = VAR_6;
 }
}
