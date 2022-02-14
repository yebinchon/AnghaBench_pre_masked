
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_handle {int flags; int numa_node_mask; TYPE_1__* pdev; int * ae_algo; } ;
struct hclgevf_dev {TYPE_1__* pdev; int numa_node_mask; struct hnae3_handle nic; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclgevf_dev*) ;

__attribute__((used)) static int FUNC_2(struct hclgevf_dev *VAR_2)
{
 struct hnae3_handle *VAR_3 = &VAR_2->nic;
 int VAR_4;

 VAR_3->ae_algo = &VAR_1;
 VAR_3->pdev = VAR_2->pdev;
 VAR_3->numa_node_mask = VAR_2->numa_node_mask;
 VAR_3->flags |= VAR_0;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  FUNC_0(&VAR_2->pdev->dev, "VF knic setup failed %d\n",
   VAR_4);
 return VAR_4;
}
