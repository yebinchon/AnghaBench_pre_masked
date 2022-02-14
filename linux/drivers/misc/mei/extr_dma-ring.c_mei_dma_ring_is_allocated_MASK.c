
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_device {TYPE_1__* dr_dscr; } ;
struct TYPE_2__ {int vaddr; } ;


 size_t VAR_0 ;

bool FUNC_0(struct mei_device *VAR_1)
{
 return !!VAR_1->dr_dscr[VAR_0].vaddr;
}
