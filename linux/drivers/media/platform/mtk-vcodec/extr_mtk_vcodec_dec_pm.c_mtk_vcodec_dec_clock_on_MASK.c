
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_vcodec_clk {int clk_num; TYPE_1__* clk_info; } ;
struct mtk_vcodec_pm {int larbvdec; struct mtk_vcodec_clk vdec_clk; } ;
struct TYPE_2__ {int vcodec_clk; int clk_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,...) ;

void FUNC_4(struct mtk_vcodec_pm *VAR_0)
{
 struct mtk_vcodec_clk *VAR_1 = &VAR_0->vdec_clk;
 int VAR_2, VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->clk_num; VAR_3++) {
  VAR_2 = FUNC_1(VAR_1->clk_info[VAR_3].vcodec_clk);
  if (VAR_2) {
   FUNC_3("clk_prepare_enable %d %s fail %d", VAR_3,
    VAR_1->clk_info[VAR_3].clk_name, VAR_2);
   goto error;
  }
 }

 VAR_2 = FUNC_2(VAR_0->larbvdec);
 if (VAR_2) {
  FUNC_3("mtk_smi_larb_get larbvdec fail %d", VAR_2);
  goto error;
 }
 return;

error:
 for (VAR_3 -= 1; VAR_3 >= 0; VAR_3--)
  FUNC_0(VAR_1->clk_info[VAR_3].vcodec_clk);
}
