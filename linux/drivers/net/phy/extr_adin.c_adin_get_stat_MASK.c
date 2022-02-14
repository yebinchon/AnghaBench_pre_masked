
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct phy_device {struct adin_priv* priv; } ;
struct adin_priv {int* stats; } ;
struct adin_hw_stat {int reg1; } ;


 struct adin_hw_stat* VAR_0 ;
 int FUNC_0 (struct phy_device*,struct adin_hw_stat*,int*) ;
 int FUNC_1 (struct phy_device*,int) ;

__attribute__((used)) static u64 FUNC_2(struct phy_device *VAR_1, int VAR_2)
{
 struct adin_hw_stat *VAR_3 = &VAR_0[VAR_2];
 struct adin_priv *VAR_4 = VAR_1->priv;
 u32 VAR_5;
 int VAR_6;

 if (VAR_3->reg1 > 0x1f) {
  VAR_6 = FUNC_0(VAR_1, VAR_3, &VAR_5);
  if (VAR_6 < 0)
   return (u64)(~0);
 } else {
  VAR_6 = FUNC_1(VAR_1, VAR_3->reg1);
  if (VAR_6 < 0)
   return (u64)(~0);
  VAR_5 = (VAR_6 & 0xffff);
 }

 VAR_4->stats[VAR_2] += VAR_5;

 return VAR_4->stats[VAR_2];
}
