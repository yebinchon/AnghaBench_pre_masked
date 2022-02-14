
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct phy_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_3__ {int mask; int off; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct phy_device*,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_2,
         struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_6 = FUNC_1(VAR_2, VAR_1[VAR_5].reg);
  if (VAR_6 < 0)
   VAR_4[VAR_5] = VAR_0;
  else {
   VAR_4[VAR_5] = VAR_6 & VAR_1[VAR_5].mask;
   VAR_4[VAR_5] >>= VAR_1[VAR_5].off;
  }
 }
}
