
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct phy_device {struct marvell_priv* priv; } ;
struct marvell_priv {int* stats; } ;
struct marvell_hw_stat {int bits; int reg; int page; } ;


 int VAR_0 ;
 struct marvell_hw_stat* VAR_1 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct phy_device *VAR_2, int VAR_3)
{
 struct marvell_hw_stat VAR_4 = VAR_1[VAR_3];
 struct marvell_priv *VAR_5 = VAR_2->priv;
 int VAR_6;
 u64 VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_4.page, VAR_4.reg);
 if (VAR_6 < 0) {
  VAR_7 = VAR_0;
 } else {
  VAR_6 = VAR_6 & ((1 << VAR_4.bits) - 1);
  VAR_5->stats[VAR_3] += VAR_6;
  VAR_7 = VAR_5->stats[VAR_3];
 }

 return VAR_7;
}
