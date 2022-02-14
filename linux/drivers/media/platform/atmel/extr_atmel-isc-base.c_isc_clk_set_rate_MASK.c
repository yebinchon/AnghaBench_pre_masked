
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct isc_clk {scalar_t__ div; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct isc_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2,
        unsigned long VAR_3,
        unsigned long VAR_4)
{
 struct isc_clk *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 if (VAR_6 > (VAR_1 + 1) || !VAR_6)
  return -VAR_0;

 VAR_5->div = VAR_6 - 1;

 return 0;
}
