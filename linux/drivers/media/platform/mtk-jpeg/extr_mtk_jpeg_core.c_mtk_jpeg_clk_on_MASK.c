
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_jpeg_dev {int clk_jdec; int clk_jdec_smi; int dev; int larb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mtk_jpeg_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0->larb);
 if (VAR_1)
  FUNC_1(VAR_0->dev, "mtk_smi_larb_get larbvdec fail %d\n", VAR_1);
 FUNC_0(VAR_0->clk_jdec_smi);
 FUNC_0(VAR_0->clk_jdec);
}
