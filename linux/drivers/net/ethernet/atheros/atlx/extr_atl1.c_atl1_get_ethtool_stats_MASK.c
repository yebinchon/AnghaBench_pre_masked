
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct atl1_adapter {int dummy; } ;
struct TYPE_3__ {int stat_offset; int sizeof_stat; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 struct atl1_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
 struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct atl1_adapter *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 char *VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_6 = (char *)VAR_4+VAR_0[VAR_5].stat_offset;
  VAR_3[VAR_5] = (VAR_0[VAR_5].sizeof_stat ==
   sizeof(u64)) ? *(u64 *)VAR_6 : *(u32 *)VAR_6;
 }

}
