
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; int mapped_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_2, struct clk *VAR_3)
{
 if (VAR_3->flags & VAR_1)
  FUNC_2(VAR_2, VAR_3->mapped_reg);
 else if (VAR_3->flags & VAR_0)
  FUNC_0(VAR_2, VAR_3->mapped_reg);
 else
  FUNC_1(VAR_2, VAR_3->mapped_reg);
}
