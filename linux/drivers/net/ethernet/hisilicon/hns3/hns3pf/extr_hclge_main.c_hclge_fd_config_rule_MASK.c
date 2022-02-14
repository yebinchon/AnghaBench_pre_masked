
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_fd_rule {int location; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hclge_dev*,int ,struct hclge_fd_rule*) ;
 int FUNC_2 (struct hclge_dev*,int ,struct hclge_fd_rule*) ;
 int FUNC_3 (struct hclge_dev*,struct hclge_fd_rule*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_2,
    struct hclge_fd_rule *VAR_3)
{
 int VAR_4;

 if (!VAR_3) {
  FUNC_0(&VAR_2->pdev->dev,
   "The flow director rule is NULL\n");
  return -VAR_0;
 }


 FUNC_3(VAR_2, VAR_3, VAR_3->location, 1);

 VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (VAR_4)
  goto clear_rule;

 VAR_4 = FUNC_2(VAR_2, VAR_1, VAR_3);
 if (VAR_4)
  goto clear_rule;

 return 0;

clear_rule:
 FUNC_3(VAR_2, VAR_3, VAR_3->location, 0);
 return VAR_4;
}
