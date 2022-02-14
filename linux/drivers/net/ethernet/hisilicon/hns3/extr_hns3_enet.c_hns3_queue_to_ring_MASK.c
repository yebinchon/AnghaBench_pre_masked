
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns3_nic_priv {TYPE_1__* ring_data; int dev; } ;
struct hnae3_queue {size_t tqp_index; } ;
struct TYPE_2__ {int ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hnae3_queue*,struct hns3_nic_priv*,int ) ;

__attribute__((used)) static int FUNC_2(struct hnae3_queue *VAR_2,
         struct hns3_nic_priv *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, VAR_3->ring_data[VAR_2->tqp_index].ring);
  return VAR_4;
 }

 return 0;
}
