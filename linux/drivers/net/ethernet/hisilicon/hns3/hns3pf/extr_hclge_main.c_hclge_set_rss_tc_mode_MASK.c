
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hclge_rss_tc_mode_cmd {int * rss_tc_mode; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hclge_dev *VAR_7, u16 *VAR_8,
     u16 *VAR_9, u16 *VAR_10)
{
 struct hclge_rss_tc_mode_cmd *VAR_11;
 struct hclge_desc VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_3(&VAR_12, VAR_1, 0);
 VAR_11 = (struct hclge_rss_tc_mode_cmd *)VAR_12.data;

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  u16 VAR_15 = 0;

  FUNC_4(VAR_15, VAR_6, (VAR_8[VAR_14] & 0x1));
  FUNC_5(VAR_15, VAR_4,
    VAR_5, VAR_9[VAR_14]);
  FUNC_5(VAR_15, VAR_2,
    VAR_3, VAR_10[VAR_14]);

  VAR_11->rss_tc_mode[VAR_14] = FUNC_0(VAR_15);
 }

 VAR_13 = FUNC_2(&VAR_7->hw, &VAR_12, 1);
 if (VAR_13)
  FUNC_1(&VAR_7->pdev->dev,
   "Configure rss tc mode fail, status = %d\n", VAR_13);

 return VAR_13;
}
