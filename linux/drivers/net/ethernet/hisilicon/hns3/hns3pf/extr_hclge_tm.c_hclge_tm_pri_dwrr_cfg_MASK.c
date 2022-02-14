
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {scalar_t__ tx_sch_mode; int fw_version; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct hclge_dev*) ;
 int FUNC_2 (struct hclge_dev*) ;
 int FUNC_3 (struct hclge_dev*) ;
 int FUNC_4 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_2)
{
 int VAR_3;

 if (VAR_2->tx_sch_mode == VAR_1) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   return VAR_3;

  if (!FUNC_4(VAR_2))
   return 0;

  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 == -VAR_0) {
   FUNC_0(&VAR_2->pdev->dev,
     "fw %08x does't support ets tc weight cmd\n",
     VAR_2->fw_version);
   VAR_3 = 0;
  }

  return VAR_3;
 } else {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
