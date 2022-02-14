
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ reset_fail_cnt; } ;
struct hclge_dev {scalar_t__ reset_pending; TYPE_2__* pdev; TYPE_1__ rst_stats; int reset_type; int hw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct hclge_dev*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct hclge_dev*,int) ;
 int FUNC_5 (int ,scalar_t__*) ;

__attribute__((used)) static bool FUNC_6(struct hclge_dev *VAR_3)
{


 if (VAR_3->reset_pending) {
  FUNC_1(&VAR_3->pdev->dev, "Reset pending %lu\n",
    VAR_3->reset_pending);
  return 1;
 } else if (FUNC_3(&VAR_3->hw, VAR_0) &
     VAR_1) {
  FUNC_1(&VAR_3->pdev->dev,
    "reset failed because new reset interrupt\n");
  FUNC_2(VAR_3);
  return 0;
 } else if (VAR_3->rst_stats.reset_fail_cnt < 5) {
  VAR_3->rst_stats.reset_fail_cnt++;
  FUNC_5(VAR_3->reset_type, &VAR_3->reset_pending);
  FUNC_1(&VAR_3->pdev->dev,
    "re-schedule reset task(%d)\n",
    VAR_3->rst_stats.reset_fail_cnt);
  return 1;
 }

 FUNC_2(VAR_3);


 FUNC_4(VAR_3, 1);

 FUNC_0(&VAR_3->pdev->dev, "Reset fail!\n");
 return 0;
}
