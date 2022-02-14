
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct bdx_stats {int dummy; } ;
struct bdx_priv {int stats_flag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

 int VAR_1 ;
 struct bdx_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 struct bdx_priv *VAR_4 = FUNC_2(VAR_2);

 switch (VAR_3) {
 case 128:
  FUNC_1(FUNC_0(VAR_1)
      != sizeof(struct bdx_stats) / sizeof(u64));
  return (VAR_4->stats_flag) ? FUNC_0(VAR_1) : 0;
 }

 return -VAR_0;
}
