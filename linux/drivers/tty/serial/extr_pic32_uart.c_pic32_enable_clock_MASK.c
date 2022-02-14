
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_sport {int ref_clk; int clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct pic32_sport *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->clk);

 if (VAR_1)
  return VAR_1;

 VAR_0->ref_clk++;
 return 0;
}
