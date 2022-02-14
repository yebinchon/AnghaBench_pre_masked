
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxbf_tmfifo_irq_info {TYPE_1__* fifo; int index; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int work; int pend_events; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct mlxbf_tmfifo_irq_info *VAR_3 = VAR_2;

 if (!FUNC_1(VAR_3->index, &VAR_3->fifo->pend_events))
  FUNC_0(&VAR_3->fifo->work);

 return VAR_0;
}
