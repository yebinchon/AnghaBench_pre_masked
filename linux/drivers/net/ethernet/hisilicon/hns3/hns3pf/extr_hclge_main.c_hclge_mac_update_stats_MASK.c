
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hclge_dev*,int *) ;
 int FUNC_2 (struct hclge_dev*,int ) ;
 int FUNC_3 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2);


 if (!VAR_3)
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 else if (VAR_3 == -VAR_0)
  VAR_3 = FUNC_3(VAR_1);
 else
  FUNC_0(&VAR_1->pdev->dev, "query mac reg num fail!\n");

 return VAR_3;
}
