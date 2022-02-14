
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reset_fail_cnt; int reset_cnt; int hw_reset_done_cnt; int reset_done_cnt; int imp_rst_cnt; int global_rst_cnt; int flr_rst_cnt; int pf_rst_cnt; } ;
struct hclge_dev {int hw; TYPE_2__* pdev; TYPE_1__ rst_stats; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct hclge_dev *VAR_6)
{
 FUNC_0(&VAR_6->pdev->dev, "PF reset count: %u\n",
   VAR_6->rst_stats.pf_rst_cnt);
 FUNC_0(&VAR_6->pdev->dev, "FLR reset count: %u\n",
   VAR_6->rst_stats.flr_rst_cnt);
 FUNC_0(&VAR_6->pdev->dev, "GLOBAL reset count: %u\n",
   VAR_6->rst_stats.global_rst_cnt);
 FUNC_0(&VAR_6->pdev->dev, "IMP reset count: %u\n",
   VAR_6->rst_stats.imp_rst_cnt);
 FUNC_0(&VAR_6->pdev->dev, "reset done count: %u\n",
   VAR_6->rst_stats.reset_done_cnt);
 FUNC_0(&VAR_6->pdev->dev, "HW reset done count: %u\n",
   VAR_6->rst_stats.hw_reset_done_cnt);
 FUNC_0(&VAR_6->pdev->dev, "reset count: %u\n",
   VAR_6->rst_stats.reset_cnt);
 FUNC_0(&VAR_6->pdev->dev, "reset count: %u\n",
   VAR_6->rst_stats.reset_cnt);
 FUNC_0(&VAR_6->pdev->dev, "reset fail count: %u\n",
   VAR_6->rst_stats.reset_fail_cnt);
 FUNC_0(&VAR_6->pdev->dev, "vector0 interrupt enable status: 0x%x\n",
   FUNC_1(&VAR_6->hw, VAR_4));
 FUNC_0(&VAR_6->pdev->dev, "reset interrupt source: 0x%x\n",
   FUNC_1(&VAR_6->hw, VAR_2));
 FUNC_0(&VAR_6->pdev->dev, "reset interrupt status: 0x%x\n",
   FUNC_1(&VAR_6->hw, VAR_3));
 FUNC_0(&VAR_6->pdev->dev, "hardware reset status: 0x%x\n",
   FUNC_1(&VAR_6->hw, VAR_1));
 FUNC_0(&VAR_6->pdev->dev, "handshake status: 0x%x\n",
   FUNC_1(&VAR_6->hw, VAR_5));
 FUNC_0(&VAR_6->pdev->dev, "function reset status: 0x%x\n",
   FUNC_1(&VAR_6->hw, VAR_0));
}
