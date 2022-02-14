
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_ring {TYPE_1__* nhi; int lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct tb_ring*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct tb_ring *VAR_3 = VAR_2;

 FUNC_1(&VAR_3->nhi->lock);
 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->lock);
 FUNC_2(&VAR_3->nhi->lock);

 return VAR_0;
}
