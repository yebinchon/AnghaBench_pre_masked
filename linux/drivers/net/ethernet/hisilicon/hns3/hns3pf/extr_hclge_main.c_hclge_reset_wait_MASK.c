
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hclge_dev {int reset_type; TYPE_1__* pdev; int hw; int flr_state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*,int const) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hclge_dev *VAR_10)
{


 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14 = 0;

 switch (VAR_10->reset_type) {
 case 128:
  VAR_12 = VAR_5;
  VAR_13 = VAR_6;
  break;
 case 129:
  VAR_12 = VAR_5;
  VAR_13 = VAR_4;
  break;
 case 130:
  VAR_12 = VAR_2;
  VAR_13 = VAR_3;
  break;
 case 131:
  break;
 default:
  FUNC_0(&VAR_10->pdev->dev,
   "Wait for unsupported reset type: %d\n",
   VAR_10->reset_type);
  return -VAR_1;
 }

 if (VAR_10->reset_type == 131) {
  while (!FUNC_5(VAR_9, &VAR_10->flr_state) &&
         VAR_14++ < 200)
   FUNC_4(100);

  if (!FUNC_5(VAR_9, &VAR_10->flr_state)) {
   FUNC_0(&VAR_10->pdev->dev,
    "flr wait timeout: %d\n", VAR_14);
   return -VAR_0;
  }

  return 0;
 }

 VAR_11 = FUNC_2(&VAR_10->hw, VAR_12);
 while (FUNC_3(VAR_11, VAR_13) && VAR_14 < 200) {
  FUNC_4(100);
  VAR_11 = FUNC_2(&VAR_10->hw, VAR_12);
  VAR_14++;
 }

 if (VAR_14 >= 200) {
  FUNC_1(&VAR_10->pdev->dev,
    "Wait for reset timeout: %d\n", VAR_10->reset_type);
  return -VAR_0;
 }

 return 0;
}
