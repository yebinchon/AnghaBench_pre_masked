
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct e1000_stats {int type; int sizeof_stat; int stat_offset; } ;
struct e1000_adapter {int dummy; } ;


 int VAR_0 ;


 struct e1000_stats* VAR_1 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct net_device*,char*,int,int) ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
        struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct e1000_adapter *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;
 const struct e1000_stats *VAR_7 = VAR_1;

 FUNC_0(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_7++) {
  char *VAR_8;

  switch (VAR_7->type) {
  case 128:
   VAR_8 = (char *)VAR_2 + VAR_7->stat_offset;
   break;
  case 129:
   VAR_8 = (char *)VAR_5 + VAR_7->stat_offset;
   break;
  default:
   FUNC_1(VAR_2, "Invalid E1000 stat type: %u index %d\n",
      VAR_7->type, VAR_6);
   continue;
  }

  if (VAR_7->sizeof_stat == sizeof(u64))
   VAR_4[VAR_6] = *(u64 *)VAR_8;
  else
   VAR_4[VAR_6] = *(u32 *)VAR_8;
 }

}
