
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hclgevf_rss_cfg {int * rss_hash_key; } ;
struct hclgevf_dev {TYPE_1__* pdev; struct hclgevf_rss_cfg rss_cfg; } ;
typedef int index ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int*,int,int,int*,int) ;
 int FUNC_2 (int *,int*,int) ;

__attribute__((used)) static int FUNC_3(struct hclgevf_dev *VAR_3)
{


 struct hclgevf_rss_cfg *VAR_4 = &VAR_3->rss_cfg;
 u8 VAR_5[8];
 u16 VAR_6, VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_6 = (VAR_0 + 8 - 1) /
   8;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_9 = FUNC_1(VAR_3, VAR_2, 0,
        &VAR_8, sizeof(VAR_8),
        1, VAR_5,
        8);
  if (VAR_9) {
   FUNC_0(&VAR_3->pdev->dev,
    "VF get rss hash key from PF failed, ret=%d",
    VAR_9);
   return VAR_9;
  }

  VAR_7 = 8 * VAR_8;
  if (VAR_8 == VAR_6 - 1)
   FUNC_2(&VAR_4->rss_hash_key[VAR_7],
          &VAR_5[0],
          VAR_0 - VAR_7);
  else
   FUNC_2(&VAR_4->rss_hash_key[VAR_7],
          &VAR_5[0], 8);
 }

 return 0;
}
