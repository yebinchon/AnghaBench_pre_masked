
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_link_status_cmd {int status; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_2)
{
 struct hclge_link_status_cmd *VAR_3;
 struct hclge_desc VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_2(&VAR_4, VAR_1, 1);
 VAR_6 = FUNC_1(&VAR_2->hw, &VAR_4, 1);
 if (VAR_6) {
  FUNC_0(&VAR_2->pdev->dev, "get link status cmd failed %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_3 = (struct hclge_link_status_cmd *)VAR_4.data;
 VAR_5 = VAR_3->status & VAR_0;

 return !!VAR_5;
}
