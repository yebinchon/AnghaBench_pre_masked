
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; } ;
typedef enum hnae3_loop { ____Placeholder_hnae3_loop } hnae3_loop ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hclge_dev*,int) ;
 int FUNC_2 (struct hclge_dev*,int,int) ;
 int FUNC_3 (struct hclge_dev*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_1, bool VAR_2,
         enum hnae3_loop VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_1, VAR_2);

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_0);
 if (VAR_4)
  FUNC_0(&VAR_1->pdev->dev,
   "serdes loopback config mac mode timeout\n");

 return VAR_4;
}
