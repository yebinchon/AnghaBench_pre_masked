
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pch_gbe_stats {int offset; int size; } ;
struct pch_gbe_adapter {int stats; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 struct pch_gbe_stats* VAR_1 ;
 int FUNC_1 (struct pch_gbe_adapter*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
      struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct pch_gbe_adapter *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;
 const struct pch_gbe_stats *VAR_7 = VAR_1;
 char *VAR_8 = (char *)&VAR_5->stats;

 FUNC_1(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  char *VAR_9 = VAR_8 + VAR_7->offset;
  VAR_4[VAR_6] = VAR_7->size == sizeof(u64) ? *(u64 *)VAR_9:(*(u32 *)VAR_9);
  VAR_7++;
 }
}
