
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hns_nic_ring_data {TYPE_2__* ring; int mask; int queue_index; } ;
struct hns_nic_priv {TYPE_1__* netdev; struct hns_nic_ring_data* ring_data; struct hnae_handle* ae_handle; } ;
struct hnae_handle {int q_num; } ;
struct TYPE_5__ {scalar_t__ irq_init_flag; char* ring_name; int irq; } ;
struct TYPE_4__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int,struct hns_nic_priv*) ;
 int FUNC_3 (int,int,TYPE_2__*,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (int ,int ,int ,char*,struct hns_nic_ring_data*) ;
 int FUNC_8 (char*,int,char*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct hns_nic_priv *VAR_3)
{
 struct hnae_handle *VAR_4 = VAR_3->ae_handle;
 struct hns_nic_ring_data *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_4->q_num * 2; VAR_6++) {
  VAR_5 = &VAR_3->ring_data[VAR_6];

  if (VAR_5->ring->irq_init_flag == VAR_0)
   break;

  FUNC_8(VAR_5->ring->ring_name, VAR_1,
    "%s-%s%d", VAR_3->netdev->name,
    (FUNC_5(VAR_5->ring) ? "tx" : "rx"), VAR_5->queue_index);

  VAR_5->ring->ring_name[VAR_1 - 1] = '\0';

  VAR_7 = FUNC_7(VAR_5->ring->irq,
      VAR_2, 0, VAR_5->ring->ring_name, VAR_5);
  if (VAR_7) {
   FUNC_6(VAR_3->netdev, "request irq(%d) fail\n",
       VAR_5->ring->irq);
   goto out_free_irq;
  }
  FUNC_1(VAR_5->ring->irq);

  VAR_8 = FUNC_3(VAR_4->q_num, VAR_6,
       VAR_5->ring, &VAR_5->mask);

  if (FUNC_0(VAR_8))
   FUNC_4(VAR_5->ring->irq,
           &VAR_5->mask);

  VAR_5->ring->irq_init_flag = VAR_0;
 }

 return 0;

out_free_irq:
 FUNC_2(VAR_4->q_num, VAR_3);
 return VAR_7;
}
