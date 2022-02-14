
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pgid {int dummy; } ;
struct ccw_device {TYPE_2__* private; } ;
struct TYPE_4__ {TYPE_1__* dma_area; } ;
struct TYPE_3__ {int * pgid; } ;


 int FUNC_0 (int *,struct pgid*,int) ;

__attribute__((used)) static void FUNC_1(struct ccw_device *VAR_0, struct pgid *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  FUNC_0(&VAR_0->private->dma_area->pgid[VAR_2], VAR_1,
         sizeof(struct pgid));
}
