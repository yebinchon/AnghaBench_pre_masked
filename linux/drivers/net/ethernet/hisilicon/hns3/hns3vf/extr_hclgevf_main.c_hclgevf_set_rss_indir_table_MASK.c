
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hclgevf_rss_indirection_table_cmd {int start_table_index; int * rss_result; int rss_set_bitmap; } ;
struct TYPE_3__ {int * rss_indirection_tbl; } ;
struct hclgevf_dev {TYPE_2__* pdev; int hw; TYPE_1__ rss_cfg; } ;
struct hclgevf_desc {scalar_t__ data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclgevf_desc*,int) ;
 int FUNC_2 (struct hclgevf_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclgevf_dev *VAR_4)
{
 const u8 *VAR_5 = VAR_4->rss_cfg.rss_indirection_tbl;
 struct hclgevf_rss_indirection_table_cmd *VAR_6;
 struct hclgevf_desc VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = (struct hclgevf_rss_indirection_table_cmd *)VAR_7.data;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  FUNC_2(&VAR_7, VAR_0,
          0);
  VAR_6->start_table_index = VAR_9 * VAR_2;
  VAR_6->rss_set_bitmap = VAR_3;
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
   VAR_6->rss_result[VAR_10] =
    VAR_5[VAR_9 * VAR_2 + VAR_10];

  VAR_8 = FUNC_1(&VAR_4->hw, &VAR_7, 1);
  if (VAR_8) {
   FUNC_0(&VAR_4->pdev->dev,
    "VF failed(=%d) to set RSS indirection table\n",
    VAR_8);
   return VAR_8;
  }
 }

 return 0;
}
