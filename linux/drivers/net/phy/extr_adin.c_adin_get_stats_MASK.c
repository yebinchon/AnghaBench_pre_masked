
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct phy_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct phy_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct phy_device *VAR_2,
      struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 int VAR_5, VAR_6;


 VAR_6 = FUNC_2(VAR_2, VAR_0);
 if (VAR_6 < 0)
  return;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  VAR_4[VAR_5] = FUNC_1(VAR_2, VAR_5);
}
