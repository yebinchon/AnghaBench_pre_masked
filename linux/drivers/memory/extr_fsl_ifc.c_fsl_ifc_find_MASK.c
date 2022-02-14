
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int phys_addr_t ;
struct TYPE_6__ {int banks; TYPE_2__* gregs; } ;
struct TYPE_5__ {TYPE_1__* cspr_cs; } ;
struct TYPE_4__ {int cspr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (int *) ;

int FUNC_2(phys_addr_t VAR_5)
{
 int VAR_6 = 0;

 if (!VAR_4 || !VAR_4->gregs)
  return -VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_4->banks; VAR_6++) {
  u32 VAR_7 = FUNC_1(&VAR_4->gregs->cspr_cs[VAR_6].cspr);
  if (VAR_7 & VAR_1 && (VAR_7 & VAR_0) ==
    FUNC_0(VAR_5))
   return VAR_6;
 }

 return -VAR_3;
}
