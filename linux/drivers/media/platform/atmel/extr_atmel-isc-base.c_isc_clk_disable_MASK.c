
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isc_clk {int lock; int regmap; int id; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct isc_clk* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_1)
{
 struct isc_clk *VAR_2 = FUNC_4(VAR_1);
 u32 VAR_3 = VAR_2->id;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 FUNC_1(VAR_2->regmap, VAR_0, FUNC_0(VAR_3));
 FUNC_3(&VAR_2->lock, VAR_4);
}
