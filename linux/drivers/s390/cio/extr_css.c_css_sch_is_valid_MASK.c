
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ st; int w; int dnv; } ;
struct schib {TYPE_1__ pmcw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct schib *VAR_2)
{
 if ((VAR_2->pmcw.st == VAR_0) && !VAR_2->pmcw.dnv)
  return 0;
 if ((VAR_2->pmcw.st == VAR_1) && !VAR_2->pmcw.w)
  return 0;
 return 1;
}
