
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct ena_stats {scalar_t__ stat_offset; } ;
struct ena_adapter {int syncp; int dev_stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_adapter*,int **) ;
 int FUNC_1 (struct ena_adapter*,int **) ;
 int FUNC_2 (int *,int ,int *) ;
 struct ena_stats* VAR_1 ;
 struct ena_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
      struct ethtool_stats *VAR_3,
      u64 *VAR_4)
{
 struct ena_adapter *VAR_5 = FUNC_3(VAR_2);
 const struct ena_stats *VAR_6;
 u64 *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_6 = &VAR_1[VAR_8];

  VAR_7 = (u64 *)((uintptr_t)&VAR_5->dev_stats +
   (uintptr_t)VAR_6->stat_offset);

  FUNC_2(VAR_7, VAR_4++, &VAR_5->syncp);
 }

 FUNC_1(VAR_5, &VAR_4);
 FUNC_0(VAR_5, &VAR_4);
}
