
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* dma_complete_interrupt ) () ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;

int FUNC_1(void)
{
 if (!VAR_0.hw_ops.dma_complete_interrupt)
  return 2;
 return VAR_0.hw_ops.dma_complete_interrupt();
}
