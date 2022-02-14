
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclge_dev*,int) ;
 int FUNC_2 (struct hclge_dev*,int) ;
 struct hclge_vport* FUNC_3 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_4(struct hnae3_handle *VAR_0, int VAR_1)
{
 struct hclge_vport *VAR_2 = FUNC_3(VAR_0);
 struct hclge_dev *VAR_3 = VAR_2->back;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->pdev->dev,
   "Get vector index fail. vector_id =%d\n", VAR_4);
  return VAR_4;
 }

 FUNC_1(VAR_3, VAR_4);

 return 0;
}
