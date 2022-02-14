
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* delays; } ;
typedef int __u64 ;
struct TYPE_2__ {int lock; scalar_t__ swapin_delay; scalar_t__ blkio_delay; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__u64 FUNC_3(struct task_struct *VAR_0)
{
 __u64 VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->delays->lock, VAR_2);
 VAR_1 = FUNC_0(VAR_0->delays->blkio_delay +
    VAR_0->delays->swapin_delay);
 FUNC_2(&VAR_0->delays->lock, VAR_2);
 return VAR_1;
}
