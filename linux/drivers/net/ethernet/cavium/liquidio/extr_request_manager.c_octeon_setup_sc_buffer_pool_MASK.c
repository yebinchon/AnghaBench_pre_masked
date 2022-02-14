
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct octeon_soft_command {int node; int size; scalar_t__ dma_addr; } ;
struct TYPE_2__ {int head; int alloc_buf_count; int lock; } ;
struct octeon_device {TYPE_1__ sc_buf_pool; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct octeon_device*,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct octeon_device *VAR_2)
{
 int VAR_3;
 u64 VAR_4;
 struct octeon_soft_command *VAR_5;

 FUNC_0(&VAR_2->sc_buf_pool.head);
 FUNC_5(&VAR_2->sc_buf_pool.lock);
 FUNC_1(&VAR_2->sc_buf_pool.alloc_buf_count, 0);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5 = (struct octeon_soft_command *)
   FUNC_2(VAR_2,
          VAR_1,
       (dma_addr_t *)&VAR_4);
  if (!VAR_5) {
   FUNC_4(VAR_2);
   return 1;
  }

  VAR_5->dma_addr = VAR_4;
  VAR_5->size = VAR_1;

  FUNC_3(&VAR_5->node, &VAR_2->sc_buf_pool.head);
 }

 return 0;
}
