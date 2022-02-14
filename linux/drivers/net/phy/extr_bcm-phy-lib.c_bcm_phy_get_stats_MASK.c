
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct phy_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*,int *,unsigned int) ;
 int VAR_0 ;

void FUNC_2(struct phy_device *VAR_1, u64 *VAR_2,
         struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  VAR_4[VAR_5] = FUNC_1(VAR_1, VAR_2, VAR_5);
}
