
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hclge_get_fd_mode_cmd {int mode; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_1, u8 *VAR_2)
{
 struct hclge_get_fd_mode_cmd *VAR_3;
 struct hclge_desc VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, VAR_0, 1);

 VAR_3 = (struct hclge_get_fd_mode_cmd *)VAR_4.data;

 VAR_5 = FUNC_1(&VAR_1->hw, &VAR_4, 1);
 if (VAR_5) {
  FUNC_0(&VAR_1->pdev->dev, "get fd mode fail, ret=%d\n", VAR_5);
  return VAR_5;
 }

 *VAR_2 = VAR_3->mode;

 return VAR_5;
}
