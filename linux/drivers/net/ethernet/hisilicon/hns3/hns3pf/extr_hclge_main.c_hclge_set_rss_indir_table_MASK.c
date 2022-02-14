
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hclge_rss_indirection_table_cmd {int * rss_result; void* rss_set_bitmap; void* start_table_index; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_4, const u8 *VAR_5)
{
 struct hclge_rss_indirection_table_cmd *VAR_6;
 struct hclge_desc VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = (struct hclge_rss_indirection_table_cmd *)VAR_7.data;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  FUNC_3
   (&VAR_7, VAR_0, 0);

  VAR_6->start_table_index =
   FUNC_0(VAR_8 * VAR_2);
  VAR_6->rss_set_bitmap = FUNC_0(VAR_3);

  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   VAR_6->rss_result[VAR_9] =
    VAR_5[VAR_8 * VAR_2 + VAR_9];

  VAR_10 = FUNC_2(&VAR_4->hw, &VAR_7, 1);
  if (VAR_10) {
   FUNC_1(&VAR_4->pdev->dev,
    "Configure rss indir table fail,status = %d\n",
    VAR_10);
   return VAR_10;
  }
 }
 return 0;
}
