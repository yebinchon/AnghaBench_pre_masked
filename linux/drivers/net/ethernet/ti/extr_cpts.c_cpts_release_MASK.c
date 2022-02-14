
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpts {int refclk; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct cpts *VAR_0)
{
 if (!VAR_0)
  return;

 if (FUNC_0(!VAR_0->refclk))
  return;

 FUNC_1(VAR_0->refclk);
}
