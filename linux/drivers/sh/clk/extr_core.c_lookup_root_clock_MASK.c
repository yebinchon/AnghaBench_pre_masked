
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {struct clk* parent; } ;



__attribute__((used)) static struct clk *FUNC_0(struct clk *VAR_0)
{
 while (VAR_0->parent)
  VAR_0 = VAR_0->parent;

 return VAR_0;
}
