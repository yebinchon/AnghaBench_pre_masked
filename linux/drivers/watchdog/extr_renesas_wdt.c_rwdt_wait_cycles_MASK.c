
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwdt_priv {int clk_rate; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct rwdt_priv *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1 * 1000000, VAR_0->clk_rate);

 FUNC_1(VAR_2, 2 * VAR_2);
}
