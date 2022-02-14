
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_vcodec_clk {int clk_num; TYPE_1__* clk_info; } ;
struct mtk_vcodec_pm {int larbvdec; struct mtk_vcodec_clk vdec_clk; } ;
struct TYPE_2__ {int vcodec_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mtk_vcodec_pm *VAR_0)
{
 struct mtk_vcodec_clk *VAR_1 = &VAR_0->vdec_clk;
 int VAR_2 = 0;

 FUNC_1(VAR_0->larbvdec);
 for (VAR_2 = VAR_1->clk_num - 1; VAR_2 >= 0; VAR_2--)
  FUNC_0(VAR_1->clk_info[VAR_2].vcodec_clk);
}
