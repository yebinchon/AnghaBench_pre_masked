
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_mapping {int ref; } ;
struct clk {int * mapped_reg; struct clk_mapping* mapping; } ;


 int VAR_0 ;
 struct clk_mapping VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_2)
{
 struct clk_mapping *VAR_3 = VAR_2->mapping;


 if (VAR_3 == &VAR_1)
  goto out;

 FUNC_0(&VAR_3->ref, VAR_0);
 VAR_2->mapping = ((void*)0);
out:
 VAR_2->mapped_reg = ((void*)0);
}
