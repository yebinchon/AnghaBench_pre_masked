
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct igc_adapter {int * rss_indir_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct igc_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, u32 *VAR_3, u8 *VAR_4,
   u8 *VAR_5)
{
 struct igc_adapter *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;

 if (VAR_5)
  *VAR_5 = VAR_0;
 if (!VAR_3)
  return 0;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_3[VAR_7] = VAR_6->rss_indir_tbl[VAR_7];

 return 0;
}
