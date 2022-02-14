
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_ring_chain_node {int dummy; } ;
struct hnae3_handle {TYPE_1__* pdev; } ;
struct hclgevf_dev {int state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 struct hclgevf_dev* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hnae3_handle*,int,int,struct hnae3_ring_chain_node*) ;
 int FUNC_3 (struct hclgevf_dev*,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(
    struct hnae3_handle *VAR_1,
    int VAR_2,
    struct hnae3_ring_chain_node *VAR_3)
{
 struct hclgevf_dev *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6;

 if (FUNC_4(VAR_0, &VAR_4->state))
  return 0;

 VAR_6 = FUNC_3(VAR_4, VAR_2);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_1->pdev->dev,
   "Get vector index fail. ret =%d\n", VAR_6);
  return VAR_6;
 }

 VAR_5 = FUNC_2(VAR_1, 0, VAR_6, VAR_3);
 if (VAR_5)
  FUNC_0(&VAR_1->pdev->dev,
   "Unmap ring from vector fail. vector=%d, ret =%d\n",
   VAR_6,
   VAR_5);

 return VAR_5;
}
