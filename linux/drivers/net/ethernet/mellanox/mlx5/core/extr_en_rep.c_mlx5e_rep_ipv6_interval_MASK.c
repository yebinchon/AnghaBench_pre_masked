
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* nd_tbl; } ;
struct TYPE_3__ {int parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *,int ) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 if (FUNC_0(VAR_0) && VAR_2->nd_tbl)
  return FUNC_1(&VAR_2->nd_tbl->parms, VAR_1);

 return ~0UL;
}
