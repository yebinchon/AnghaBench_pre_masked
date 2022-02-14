
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_soft_command {int node; } ;
struct TYPE_2__ {int lock; int alloc_buf_count; int head; } ;
struct octeon_device {TYPE_1__ sc_buf_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct octeon_device *VAR_0,
         struct octeon_soft_command *VAR_1)
{
 FUNC_2(&VAR_0->sc_buf_pool.lock);

 FUNC_1(&VAR_1->node, &VAR_0->sc_buf_pool.head);

 FUNC_0(&VAR_0->sc_buf_pool.alloc_buf_count);

 FUNC_3(&VAR_0->sc_buf_pool.lock);
}
