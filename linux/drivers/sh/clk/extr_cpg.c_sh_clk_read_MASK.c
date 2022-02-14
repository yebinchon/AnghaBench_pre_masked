
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; int mapped_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct clk *VAR_2)
{
 if (VAR_2->flags & VAR_1)
  return FUNC_2(VAR_2->mapped_reg);
 else if (VAR_2->flags & VAR_0)
  return FUNC_0(VAR_2->mapped_reg);

 return FUNC_1(VAR_2->mapped_reg);
}
