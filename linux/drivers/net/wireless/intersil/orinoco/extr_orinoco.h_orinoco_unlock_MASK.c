
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct orinoco_private {int lock; TYPE_2__ hw; } ;
struct TYPE_3__ {int (* unlock_irqrestore ) (int *,unsigned long*) ;} ;


 int FUNC_0 (int *,unsigned long*) ;

__attribute__((used)) static inline void FUNC_1(struct orinoco_private *VAR_0,
      unsigned long *VAR_1)
{
 VAR_0->hw.ops->unlock_irqrestore(&VAR_0->lock, VAR_1);
}
