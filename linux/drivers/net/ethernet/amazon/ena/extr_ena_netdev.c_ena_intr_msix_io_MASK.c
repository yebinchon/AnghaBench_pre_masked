
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ena_napi {int napi; TYPE_2__* rx_ring; TYPE_1__* tx_ring; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int first_interrupt; } ;
struct TYPE_3__ {int first_interrupt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct ena_napi *VAR_3 = VAR_2;

 VAR_3->tx_ring->first_interrupt = 1;
 VAR_3->rx_ring->first_interrupt = 1;

 FUNC_0(&VAR_3->napi);

 return VAR_0;
}
