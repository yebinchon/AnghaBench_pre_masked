
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vsc8531_private {int* stats; TYPE_1__* hw_stats; } ;
struct phy_device {struct vsc8531_private* priv; } ;
struct TYPE_2__ {int mask; int reg; int page; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct phy_device *VAR_1, int VAR_2)
{
 struct vsc8531_private *VAR_3 = VAR_1->priv;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3->hw_stats[VAR_2].page,
        VAR_3->hw_stats[VAR_2].reg);
 if (VAR_4 < 0)
  return VAR_0;

 VAR_4 = VAR_4 & VAR_3->hw_stats[VAR_2].mask;
 VAR_3->stats[VAR_2] += VAR_4;

 return VAR_3->stats[VAR_2];
}
