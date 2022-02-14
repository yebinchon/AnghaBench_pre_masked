
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int lock; TYPE_2__* dlist; scalar_t__ count; } ;
struct octeon_device {TYPE_1__ dispatch; } ;
struct TYPE_4__ {int list; scalar_t__ opcode; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 size_t VAR_1 ;
 int FUNC_1 (struct octeon_device*,size_t,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct octeon_device *VAR_2)
{
 u32 VAR_3;

 VAR_2->dispatch.count = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->dispatch.dlist[VAR_3].opcode = 0;
  FUNC_0(&VAR_2->dispatch.dlist[VAR_3].list);
 }

 for (VAR_3 = 0; VAR_3 <= VAR_1; VAR_3++)
  FUNC_1(VAR_2, VAR_3, ((void*)0));

 FUNC_2(&VAR_2->dispatch.lock);

 return 0;
}
