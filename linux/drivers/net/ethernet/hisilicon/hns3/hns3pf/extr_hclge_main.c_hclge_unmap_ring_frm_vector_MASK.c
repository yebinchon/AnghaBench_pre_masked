
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_ring_chain_node {int dummy; } ;
struct hnae3_handle {TYPE_1__* pdev; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct hclge_vport*,int,int,struct hnae3_ring_chain_node*) ;
 int FUNC_2 (struct hclge_dev*,int) ;
 struct hclge_vport* FUNC_3 (struct hnae3_handle*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct hnae3_handle *VAR_1, int VAR_2,
           struct hnae3_ring_chain_node *VAR_3)
{
 struct hclge_vport *VAR_4 = FUNC_3(VAR_1);
 struct hclge_dev *VAR_5 = VAR_4->back;
 int VAR_6, VAR_7;

 if (FUNC_4(VAR_0, &VAR_5->state))
  return 0;

 VAR_6 = FUNC_2(VAR_5, VAR_2);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_1->pdev->dev,
   "Get vector index fail. ret =%d\n", VAR_6);
  return VAR_6;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_6, 0, VAR_3);
 if (VAR_7)
  FUNC_0(&VAR_1->pdev->dev,
   "Unmap ring from vector fail. vectorid=%d, ret =%d\n",
   VAR_6, VAR_7);

 return VAR_7;
}
