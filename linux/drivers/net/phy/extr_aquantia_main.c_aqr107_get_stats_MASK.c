
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct phy_device {struct aqr107_priv* priv; } ;
struct ethtool_stats {int dummy; } ;
struct aqr107_priv {scalar_t__* sgmii_stats; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_device*,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct phy_device*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_3,
        struct ethtool_stats *VAR_4, u64 *VAR_5)
{
 struct aqr107_priv *VAR_6 = VAR_3->priv;
 u64 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = FUNC_0(VAR_3, VAR_8);
  if (VAR_7 == VAR_1)
   FUNC_1(VAR_3, "Reading HW Statistics failed for %s\n",
       VAR_2[VAR_8].name);
  else
   VAR_6->sgmii_stats[VAR_8] += VAR_7;

  VAR_5[VAR_8] = VAR_6->sgmii_stats[VAR_8];
 }
}
