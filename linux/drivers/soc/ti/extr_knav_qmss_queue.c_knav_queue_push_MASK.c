
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct knav_queue {TYPE_2__* stats; TYPE_1__* reg_push; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int pushes; } ;
struct TYPE_3__ {int ptr_size_thresh; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int *) ;

int FUNC_2(void *VAR_0, dma_addr_t VAR_1,
     unsigned VAR_2, unsigned VAR_3)
{
 struct knav_queue *VAR_4 = VAR_0;
 u32 VAR_5;

 VAR_5 = (u32)VAR_1 | ((VAR_2 / 16) - 1);
 FUNC_1(VAR_5, &VAR_4->reg_push[0].ptr_size_thresh);

 FUNC_0(VAR_4->stats->pushes);
 return 0;
}
