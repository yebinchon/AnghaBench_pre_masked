
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * irqs; } ;
struct TYPE_3__ {int * irqs; } ;
struct z8530_dev {int lock; TYPE_2__ chanA; TYPE_1__ chanB; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int VAR_1 ;

int FUNC_4(struct z8530_dev *VAR_2)
{
 unsigned long VAR_3;


 FUNC_0(&VAR_2->lock, VAR_3);
 VAR_2->chanA.irqs=&VAR_1;
 VAR_2->chanB.irqs=&VAR_1;
 FUNC_3(&VAR_2->chanA, VAR_0, 0xC0);

 FUNC_2(100);
 FUNC_1(&VAR_2->lock, VAR_3);
 return 0;
}
