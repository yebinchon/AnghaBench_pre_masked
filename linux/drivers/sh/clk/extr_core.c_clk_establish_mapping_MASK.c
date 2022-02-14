
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_mapping {scalar_t__ phys; scalar_t__ base; int ref; int len; } ;
struct clk {struct clk_mapping* mapping; scalar_t__ enable_reg; scalar_t__ mapped_reg; int parent; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct clk_mapping VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct clk* FUNC_4 (struct clk*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct clk *VAR_2)
{
 struct clk_mapping *VAR_3 = VAR_2->mapping;




 if (!VAR_3) {
  struct clk *VAR_4;




  if (!VAR_2->parent) {
   VAR_2->mapping = &VAR_1;
   goto out;
  }





  VAR_4 = FUNC_4(VAR_2);
  VAR_3 = VAR_4->mapping;
  FUNC_0(!VAR_3);
 }




 if (!VAR_3->base && VAR_3->phys) {
  FUNC_3(&VAR_3->ref);

  VAR_3->base = FUNC_1(VAR_3->phys, VAR_3->len);
  if (FUNC_5(!VAR_3->base))
   return -VAR_0;
 } else if (VAR_3->base) {



  FUNC_2(&VAR_3->ref);
 }

 VAR_2->mapping = VAR_3;
out:
 VAR_2->mapped_reg = VAR_2->mapping->base;
 VAR_2->mapped_reg += (phys_addr_t)VAR_2->enable_reg - VAR_2->mapping->phys;
 return 0;
}
