
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isc_clk {int parent_id; } ;
struct clk_hw {int dummy; } ;


 struct isc_clk* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_1(struct clk_hw *VAR_0)
{
 struct isc_clk *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->parent_id;
}
