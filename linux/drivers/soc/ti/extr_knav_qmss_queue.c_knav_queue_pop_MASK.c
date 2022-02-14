
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct knav_queue_inst {size_t* descs; int desc_head; int desc_count; } ;
struct knav_queue {TYPE_2__* stats; TYPE_1__* reg_pop; struct knav_queue_inst* inst; } ;
typedef size_t dma_addr_t ;
struct TYPE_4__ {int pops; } ;
struct TYPE_3__ {int ptr_size_thresh; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

dma_addr_t FUNC_6(void *VAR_3, unsigned *VAR_4)
{
 struct knav_queue *VAR_5 = VAR_3;
 struct knav_queue_inst *VAR_6 = VAR_5->inst;
 dma_addr_t VAR_7;
 u32 VAR_8, VAR_9;


 if (VAR_6->descs) {
  if (FUNC_5(FUNC_0(&VAR_6->desc_count) < 0)) {
   FUNC_1(&VAR_6->desc_count);
   return 0;
  }
  VAR_9 = FUNC_2(&VAR_6->desc_head);
  VAR_9 &= VAR_0;
  VAR_8 = VAR_6->descs[VAR_9];
 } else {
  VAR_8 = FUNC_3(&VAR_5->reg_pop[0].ptr_size_thresh);
  if (FUNC_5(!VAR_8))
   return 0;
 }

 VAR_7 = VAR_8 & VAR_1;
 if (VAR_4)
  *VAR_4 = ((VAR_8 & VAR_2) + 1) * 16;

 FUNC_4(VAR_5->stats->pops);
 return VAR_7;
}
