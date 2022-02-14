
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hclgevf_dev {int rx_buf_len; int rss_size_max; int num_tqps; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int *,int ,int,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct hclgevf_dev *VAR_2)
{

 u8 VAR_3[6];
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1, 0, ((void*)0), 0,
          1, VAR_3,
          6);
 if (VAR_4) {
  FUNC_0(&VAR_2->pdev->dev,
   "VF request to get tqp info from PF failed %d",
   VAR_4);
  return VAR_4;
 }

 FUNC_2(&VAR_2->num_tqps, &VAR_3[0], sizeof(u16));
 FUNC_2(&VAR_2->rss_size_max, &VAR_3[2], sizeof(u16));
 FUNC_2(&VAR_2->rx_buf_len, &VAR_3[4], sizeof(u16));

 return 0;
}
