
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct g12a_ephy_pll {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct g12a_ephy_pll* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,int ,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_5)
{
 struct g12a_ephy_pll *VAR_6 = FUNC_0(VAR_5);
 u32 VAR_7 = FUNC_1(VAR_6->base + VAR_0);


 VAR_7 |= VAR_3 | VAR_1;
 FUNC_3(VAR_7, VAR_6->base + VAR_0);


 VAR_7 &= ~VAR_3;
 FUNC_3(VAR_7, VAR_6->base + VAR_0);






 return FUNC_2(VAR_6->base + VAR_0, VAR_7,
      VAR_7 & VAR_2, 0, VAR_4);
}
