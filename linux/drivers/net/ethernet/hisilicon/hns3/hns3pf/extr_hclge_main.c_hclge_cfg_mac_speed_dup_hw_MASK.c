
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_config_mac_speed_dup_cmd {int mac_change_fec_en; int speed_dup; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_6, int VAR_7,
          u8 VAR_8)
{
 struct hclge_config_mac_speed_dup_cmd *VAR_9;
 struct hclge_desc VAR_10;
 int VAR_11;

 VAR_9 = (struct hclge_config_mac_speed_dup_cmd *)VAR_10.data;

 FUNC_2(&VAR_10, VAR_5, 0);

 if (VAR_8)
  FUNC_3(VAR_9->speed_dup, VAR_1, 1);

 switch (VAR_7) {
 case 132:
  FUNC_4(VAR_9->speed_dup, VAR_3,
    VAR_4, 6);
  break;
 case 134:
  FUNC_4(VAR_9->speed_dup, VAR_3,
    VAR_4, 7);
  break;
 case 131:
  FUNC_4(VAR_9->speed_dup, VAR_3,
    VAR_4, 0);
  break;
 case 133:
  FUNC_4(VAR_9->speed_dup, VAR_3,
    VAR_4, 1);
  break;
 case 130:
  FUNC_4(VAR_9->speed_dup, VAR_3,
    VAR_4, 2);
  break;
 case 129:
  FUNC_4(VAR_9->speed_dup, VAR_3,
    VAR_4, 3);
  break;
 case 128:
  FUNC_4(VAR_9->speed_dup, VAR_3,
    VAR_4, 4);
  break;
 case 135:
  FUNC_4(VAR_9->speed_dup, VAR_3,
    VAR_4, 5);
  break;
 default:
  FUNC_0(&VAR_6->pdev->dev, "invalid speed (%d)\n", VAR_7);
  return -VAR_0;
 }

 FUNC_3(VAR_9->mac_change_fec_en, VAR_2,
        1);

 VAR_11 = FUNC_1(&VAR_6->hw, &VAR_10, 1);
 if (VAR_11) {
  FUNC_0(&VAR_6->pdev->dev,
   "mac speed/duplex config cmd failed %d.\n", VAR_11);
  return VAR_11;
 }

 return 0;
}
