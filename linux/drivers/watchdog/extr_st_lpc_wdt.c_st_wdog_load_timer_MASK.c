
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_wdog {unsigned long clkrate; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct st_wdog *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4 = VAR_2->clkrate;

 FUNC_0(VAR_3 * VAR_4, VAR_2->base + VAR_0);
 FUNC_0(1, VAR_2->base + VAR_1);
}
