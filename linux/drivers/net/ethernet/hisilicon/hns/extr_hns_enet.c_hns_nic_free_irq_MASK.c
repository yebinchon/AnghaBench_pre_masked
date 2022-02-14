
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_nic_priv {TYPE_2__* ring_data; } ;
struct TYPE_4__ {TYPE_1__* ring; } ;
struct TYPE_3__ {scalar_t__ irq_init_flag; int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(int VAR_2, struct hns_nic_priv *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2 * 2; VAR_4++) {
  if (VAR_3->ring_data[VAR_4].ring->irq_init_flag == VAR_0) {
   FUNC_1(VAR_3->ring_data[VAR_4].ring->irq,
           ((void*)0));
   FUNC_0(VAR_3->ring_data[VAR_4].ring->irq,
     &VAR_3->ring_data[VAR_4]);
   VAR_3->ring_data[VAR_4].ring->irq_init_flag =
    VAR_1;
  }
 }
}
