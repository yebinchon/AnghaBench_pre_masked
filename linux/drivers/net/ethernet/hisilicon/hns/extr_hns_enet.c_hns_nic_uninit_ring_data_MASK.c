
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hns_nic_priv {TYPE_2__* ring_data; struct hnae_handle* ae_handle; } ;
struct hnae_handle {int q_num; } ;
struct TYPE_5__ {TYPE_1__* ring; int napi; } ;
struct TYPE_4__ {scalar_t__ irq_init_flag; int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hns_nic_priv *VAR_2)
{
 struct hnae_handle *VAR_3 = VAR_2->ae_handle;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->q_num * 2; VAR_4++) {
  FUNC_3(&VAR_2->ring_data[VAR_4].napi);
  if (VAR_2->ring_data[VAR_4].ring->irq_init_flag == VAR_0) {
   (void)FUNC_1(
    VAR_2->ring_data[VAR_4].ring->irq,
    ((void*)0));
   FUNC_0(VAR_2->ring_data[VAR_4].ring->irq,
     &VAR_2->ring_data[VAR_4]);
  }

  VAR_2->ring_data[VAR_4].ring->irq_init_flag = VAR_1;
 }
 FUNC_2(VAR_2->ring_data);
}
