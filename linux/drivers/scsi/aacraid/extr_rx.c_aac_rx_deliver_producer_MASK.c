
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fib {int hw_fib_va; struct aac_dev* dev; } ;
struct TYPE_4__ {int * producer; } ;
struct aac_queue {TYPE_1__ headers; int numpending; } ;
struct aac_dev {TYPE_2__* queues; } ;
struct TYPE_6__ {unsigned long irq_mod; } ;
struct TYPE_5__ {struct aac_queue* queue; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct aac_dev*,size_t) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (struct aac_dev*,scalar_t__*,size_t,int ,int,struct fib*,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(struct fib * VAR_2)
{
 struct aac_dev *VAR_3 = VAR_2->dev;
 struct aac_queue *VAR_4 = &VAR_3->queues->queue[VAR_0];
 u32 VAR_5;
 unsigned long VAR_6 = 0;

 FUNC_1( VAR_3, &VAR_5, VAR_0, VAR_2->hw_fib_va, 1, VAR_2, &VAR_6);

 FUNC_2(&VAR_4->numpending);
 *(VAR_4->headers.producer) = FUNC_3(VAR_5 + 1);
 if (!(VAR_6 & VAR_1.irq_mod))
  FUNC_0(VAR_3, VAR_0);

 return 0;
}
