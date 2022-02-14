
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_pf_rst_sync_cmd {scalar_t__ all_vf_ready; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct hclge_desc*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_6)
{
 struct hclge_pf_rst_sync_cmd *VAR_7;
 struct hclge_desc VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 VAR_7 = (struct hclge_pf_rst_sync_cmd *)VAR_8.data;
 FUNC_3(&VAR_8, VAR_2, 1);

 do {
  VAR_10 = FUNC_2(&VAR_6->hw, &VAR_8, 1);



  if (VAR_10 == -VAR_0) {
   FUNC_4(VAR_5);
   return 0;
  } else if (VAR_10) {
   FUNC_0(&VAR_6->pdev->dev, "sync with VF fail %d!\n",
    VAR_10);
   return VAR_10;
  } else if (VAR_7->all_vf_ready) {
   return 0;
  }
  FUNC_4(VAR_4);
  FUNC_1(&VAR_8, 1);
 } while (VAR_9++ < VAR_3);

 FUNC_0(&VAR_6->pdev->dev, "sync with VF timeout!\n");
 return -VAR_1;
}
