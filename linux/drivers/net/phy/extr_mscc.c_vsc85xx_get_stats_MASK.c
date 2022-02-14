
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vsc8531_private {int nstats; } ;
struct phy_device {struct vsc8531_private* priv; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (struct phy_device*,int) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_0,
         struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct vsc8531_private *VAR_3 = VAR_0->priv;
 int VAR_4;

 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->nstats; VAR_4++)
  VAR_2[VAR_4] = FUNC_0(VAR_0, VAR_4);
}
