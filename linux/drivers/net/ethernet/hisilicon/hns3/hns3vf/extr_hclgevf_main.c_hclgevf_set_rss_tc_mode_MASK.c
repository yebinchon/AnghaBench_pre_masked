
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct hclgevf_rss_tc_mode_cmd {int * rss_tc_mode; } ;
struct hclgevf_dev {int hw_tc_map; TYPE_1__* pdev; int hw; } ;
struct hclgevf_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclgevf_desc*,int) ;
 int FUNC_3 (struct hclgevf_desc*,int ,int) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int ,unsigned int) ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;

__attribute__((used)) static int FUNC_8(struct hclgevf_dev *VAR_7, u16 VAR_8)
{
 struct hclgevf_rss_tc_mode_cmd *VAR_9;
 u16 VAR_10[VAR_0];
 u16 VAR_11[VAR_0];
 u16 VAR_12[VAR_0];
 struct hclgevf_desc VAR_13;
 u16 VAR_14;
 int VAR_15;
 unsigned int VAR_16;

 VAR_9 = (struct hclgevf_rss_tc_mode_cmd *)VAR_13.data;

 VAR_14 = FUNC_7(VAR_8);
 VAR_14 = FUNC_6(VAR_14);

 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  VAR_11[VAR_16] = !!(VAR_7->hw_tc_map & FUNC_0(VAR_16));
  VAR_12[VAR_16] = VAR_14;
  VAR_10[VAR_16] = VAR_8 * VAR_16;
 }

 FUNC_3(&VAR_13, VAR_1, 0);
 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  FUNC_4(VAR_9->rss_tc_mode[VAR_16], VAR_6,
         (VAR_11[VAR_16] & 0x1));
  FUNC_5(VAR_9->rss_tc_mode[VAR_16], VAR_4,
    VAR_5, VAR_12[VAR_16]);
  FUNC_5(VAR_9->rss_tc_mode[VAR_16], VAR_2,
    VAR_3, VAR_10[VAR_16]);
 }
 VAR_15 = FUNC_2(&VAR_7->hw, &VAR_13, 1);
 if (VAR_15)
  FUNC_1(&VAR_7->pdev->dev,
   "VF failed(=%d) to set rss tc mode\n", VAR_15);

 return VAR_15;
}
