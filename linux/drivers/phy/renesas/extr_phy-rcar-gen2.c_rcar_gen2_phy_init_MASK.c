
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_gen2_phy_driver {int lock; scalar_t__ base; int clk; } ;
struct rcar_gen2_phy {int select_value; int number; struct rcar_gen2_channel* channel; } ;
struct rcar_gen2_channel {int select_mask; int selected_phy; struct rcar_gen2_phy_driver* drv; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;
 struct rcar_gen2_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_2)
{
 struct rcar_gen2_phy *VAR_3 = FUNC_2(VAR_2);
 struct rcar_gen2_channel *VAR_4 = VAR_3->channel;
 struct rcar_gen2_phy_driver *VAR_5 = VAR_4->drv;
 unsigned long VAR_6;
 u32 VAR_7;







 if (FUNC_1(&VAR_4->selected_phy, -1, VAR_3->number) != -1)
  return -VAR_0;

 FUNC_0(VAR_5->clk);

 FUNC_4(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_3(VAR_5->base + VAR_1);
 VAR_7 &= ~VAR_4->select_mask;
 VAR_7 |= VAR_3->select_value;
 FUNC_6(VAR_7, VAR_5->base + VAR_1);
 FUNC_5(&VAR_5->lock, VAR_6);
 return 0;
}
