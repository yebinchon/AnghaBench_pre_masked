
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ fc_mode; } ;
struct hclge_dev {TYPE_2__* pdev; TYPE_1__ tm_info; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclge_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (VAR_1->tm_info.fc_mode == VAR_0)
  return 0;

 VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_2);
 if (VAR_4)
  FUNC_0(&VAR_1->pdev->dev,
   "configure pauseparam error, ret = %d.\n", VAR_4);

 return VAR_4;
}
