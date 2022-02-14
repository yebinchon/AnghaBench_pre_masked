
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_berlin_priv {int clk; int lock; scalar_t__ base; } ;
struct phy_berlin_desc {int power_bit; } ;
struct TYPE_2__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct phy_berlin_priv* FUNC_2 (int ) ;
 struct phy_berlin_desc* FUNC_3 (struct phy*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_3)
{
 struct phy_berlin_desc *VAR_4 = FUNC_3(VAR_3);
 struct phy_berlin_priv *VAR_5 = FUNC_2(VAR_3->dev.parent);
 u32 VAR_6;

 FUNC_1(VAR_5->clk);

 FUNC_5(&VAR_5->lock);


 FUNC_7(VAR_0, VAR_5->base + VAR_1);
 VAR_6 = FUNC_4(VAR_5->base + VAR_2);
 VAR_6 |= VAR_4->power_bit;
 FUNC_7(VAR_6, VAR_5->base + VAR_2);

 FUNC_6(&VAR_5->lock);

 FUNC_0(VAR_5->clk);

 return 0;
}
