
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct phy_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_1,
      struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  VAR_3[VAR_4] = FUNC_1(VAR_1, VAR_4);
}
