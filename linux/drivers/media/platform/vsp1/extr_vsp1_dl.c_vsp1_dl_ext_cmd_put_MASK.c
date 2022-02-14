
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_dl_ext_cmd {TYPE_1__* pool; int free; int flags; } ;
struct TYPE_2__ {int lock; int free; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct vsp1_dl_ext_cmd *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0)
  return;


 VAR_0->flags = 0;

 FUNC_1(&VAR_0->pool->lock, VAR_1);
 FUNC_0(&VAR_0->free, &VAR_0->pool->free);
 FUNC_2(&VAR_0->pool->lock, VAR_1);
}
