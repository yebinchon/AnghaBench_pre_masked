
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct hclge_serdes_lb_cmd {int result; void* mask; void* enable; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
typedef enum hnae3_loop { ____Placeholder_hnae3_loop } hnae3_loop ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_10, bool VAR_11,
         enum hnae3_loop VAR_12)
{



 struct hclge_serdes_lb_cmd *VAR_13;
 struct hclge_desc VAR_14;
 int VAR_15, VAR_16 = 0;
 u8 VAR_17;

 VAR_13 = (struct hclge_serdes_lb_cmd *)VAR_14.data;
 FUNC_2(&VAR_14, VAR_7, 0);

 switch (VAR_12) {
 case 128:
  VAR_17 = VAR_5;
  break;
 case 129:
  VAR_17 = VAR_4;
  break;
 default:
  FUNC_0(&VAR_10->pdev->dev,
   "unsupported serdes loopback mode %d\n", VAR_12);
  return -VAR_2;
 }

 if (VAR_11) {
  VAR_13->enable = VAR_17;
  VAR_13->mask = VAR_17;
 } else {
  VAR_13->mask = VAR_17;
 }

 VAR_15 = FUNC_1(&VAR_10->hw, &VAR_14, 1);
 if (VAR_15) {
  FUNC_0(&VAR_10->pdev->dev,
   "serdes loopback set fail, ret = %d\n", VAR_15);
  return VAR_15;
 }

 do {
  FUNC_3(10);
  FUNC_2(&VAR_14, VAR_7,
        1);
  VAR_15 = FUNC_1(&VAR_10->hw, &VAR_14, 1);
  if (VAR_15) {
   FUNC_0(&VAR_10->pdev->dev,
    "serdes loopback get, ret = %d\n", VAR_15);
   return VAR_15;
  }
 } while (++VAR_16 < 100 &&
   !(VAR_13->result & VAR_3));

 if (!(VAR_13->result & VAR_3)) {
  FUNC_0(&VAR_10->pdev->dev, "serdes loopback set timeout\n");
  return -VAR_0;
 } else if (!(VAR_13->result & VAR_6)) {
  FUNC_0(&VAR_10->pdev->dev, "serdes loopback set failed in fw\n");
  return -VAR_1;
 }
 return VAR_15;
}
