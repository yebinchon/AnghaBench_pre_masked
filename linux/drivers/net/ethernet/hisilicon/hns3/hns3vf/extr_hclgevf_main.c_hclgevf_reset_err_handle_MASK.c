
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rst_fail_cnt; } ;
struct hclgevf_dev {int reset_state; int reset_pending; int reset_type; TYPE_2__ rst_stats; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hclgevf_dev*) ;
 int FUNC_2 (struct hclgevf_dev*,int) ;
 int FUNC_3 (struct hclgevf_dev*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hclgevf_dev *VAR_2)
{

 FUNC_2(VAR_2, 1);
 VAR_2->rst_stats.rst_fail_cnt++;
 FUNC_0(&VAR_2->pdev->dev, "failed to reset VF(%d)\n",
  VAR_2->rst_stats.rst_fail_cnt);

 if (VAR_2->rst_stats.rst_fail_cnt < VAR_0)
  FUNC_4(VAR_2->reset_type, &VAR_2->reset_pending);

 if (FUNC_1(VAR_2)) {
  FUNC_4(VAR_1, &VAR_2->reset_state);
  FUNC_3(VAR_2);
 }
}
