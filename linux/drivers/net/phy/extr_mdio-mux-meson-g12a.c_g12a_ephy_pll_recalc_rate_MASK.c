
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct g12a_ephy_pll {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 struct g12a_ephy_pll* FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_3,
            unsigned long VAR_4)
{
 struct g12a_ephy_pll *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_5->base + VAR_0);
 VAR_7 = FUNC_0(VAR_1, VAR_6);
 VAR_8 = FUNC_0(VAR_2, VAR_6);

 return VAR_4 * VAR_7 / VAR_8;
}
