
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_ring_chain_node {int dummy; } ;
struct hnae3_handle {TYPE_1__* pdev; } ;
struct hclgevf_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 struct hclgevf_dev* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hnae3_handle*,int,int,struct hnae3_ring_chain_node*) ;
 int FUNC_3 (struct hclgevf_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct hnae3_handle *VAR_0, int VAR_1,
          struct hnae3_ring_chain_node *VAR_2)
{
 struct hclgevf_dev *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_0->pdev->dev,
   "Get vector index fail. ret =%d\n", VAR_4);
  return VAR_4;
 }

 return FUNC_2(VAR_0, 1, VAR_4, VAR_2);
}
