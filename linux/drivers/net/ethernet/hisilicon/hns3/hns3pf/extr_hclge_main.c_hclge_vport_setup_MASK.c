
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hnae3_handle {int numa_node_mask; int * ae_algo; TYPE_1__* pdev; } ;
struct hclge_vport {struct hclge_dev* back; struct hnae3_handle nic; } ;
struct hclge_dev {TYPE_1__* pdev; int num_rx_desc; int num_tx_desc; int numa_node_mask; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclge_vport*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_1, u16 VAR_2)
{
 struct hnae3_handle *VAR_3 = &VAR_1->nic;
 struct hclge_dev *VAR_4 = VAR_1->back;
 int VAR_5;

 VAR_3->pdev = VAR_4->pdev;
 VAR_3->ae_algo = &VAR_0;
 VAR_3->numa_node_mask = VAR_4->numa_node_mask;

 VAR_5 = FUNC_1(VAR_1, VAR_2,
          VAR_4->num_tx_desc, VAR_4->num_rx_desc);
 if (VAR_5)
  FUNC_0(&VAR_4->pdev->dev, "knic setup failed %d\n", VAR_5);

 return VAR_5;
}
