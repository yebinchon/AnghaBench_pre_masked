
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_process_element {int dummy; } ;
struct cxl_afu {scalar_t__ num_procs; TYPE_1__* native; int dev; } ;
struct TYPE_2__ {int spa_order; scalar_t__ spa_max_procs; unsigned int spa_size; struct cxl_process_element* spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,scalar_t__,unsigned int) ;
 int FUNC_2 (char*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct cxl_afu *VAR_5, int VAR_6)
{
 unsigned VAR_7;


 VAR_5->native->spa_order = -1;
 do {
  VAR_5->native->spa_order++;
  VAR_7 = (1 << VAR_5->native->spa_order) * VAR_3;

  if (VAR_7 > 0x100000) {
   FUNC_1(&VAR_5->dev, "num_of_processes too large for the SPA, limiting to %i (0x%x)\n",
     VAR_5->native->spa_max_procs, VAR_5->native->spa_size);
   if (VAR_6 != VAR_0)
    VAR_5->num_procs = VAR_5->native->spa_max_procs;
   break;
  }

  VAR_5->native->spa_size = VAR_7;
  VAR_5->native->spa_max_procs = FUNC_4(VAR_5->native->spa_size);
 } while (VAR_5->native->spa_max_procs < VAR_5->num_procs);

 if (!(VAR_5->native->spa = (struct cxl_process_element *)
       FUNC_0(VAR_2 | VAR_4, VAR_5->native->spa_order))) {
  FUNC_3("cxl_alloc_spa: Unable to allocate scheduled process area\n");
  return -VAR_1;
 }
 FUNC_2("spa pages: %i afu->spa_max_procs: %i   afu->num_procs: %i\n",
   1<<VAR_5->native->spa_order, VAR_5->native->spa_max_procs, VAR_5->num_procs);

 return 0;
}
