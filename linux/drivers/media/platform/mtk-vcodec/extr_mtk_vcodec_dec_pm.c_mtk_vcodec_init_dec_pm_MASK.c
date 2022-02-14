
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mtk_vcodec_clk {int clk_num; struct mtk_vcodec_clk_info* clk_info; } ;
struct mtk_vcodec_pm {TYPE_1__* dev; TYPE_1__* larbvdec; struct mtk_vcodec_clk vdec_clk; struct mtk_vcodec_dev* mtkdev; } ;
struct mtk_vcodec_dev {struct platform_device* plat_dev; struct mtk_vcodec_pm pm; } ;
struct mtk_vcodec_clk_info {int vcodec_clk; int clk_name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 struct mtk_vcodec_clk_info* FUNC_4 (TYPE_1__*,int,int,int ) ;
 int FUNC_5 (char*,...) ;
 struct platform_device* FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,int,int *) ;
 int FUNC_11 (TYPE_1__*) ;

int FUNC_12(struct mtk_vcodec_dev *VAR_3)
{
 struct device_node *VAR_4;
 struct platform_device *VAR_5;
 struct mtk_vcodec_pm *VAR_6;
 struct mtk_vcodec_clk *VAR_7;
 struct mtk_vcodec_clk_info *VAR_8;
 int VAR_9 = 0, VAR_10 = 0;

 VAR_5 = VAR_3->plat_dev;
 VAR_6 = &VAR_3->pm;
 VAR_6->mtkdev = VAR_3;
 VAR_7 = &VAR_6->vdec_clk;
 VAR_4 = FUNC_8(VAR_5->dev.of_node, "mediatek,larb", 0);
 if (!VAR_4) {
  FUNC_5("of_parse_phandle mediatek,larb fail!");
  return -1;
 }

 VAR_5 = FUNC_6(VAR_4);
 FUNC_7(VAR_4);
 if (FUNC_2(!VAR_5)) {
  return -1;
 }
 VAR_6->larbvdec = &VAR_5->dev;
 VAR_5 = VAR_3->plat_dev;
 VAR_6->dev = &VAR_5->dev;

 VAR_7->clk_num =
  FUNC_9(VAR_5->dev.of_node, "clock-names");
 if (VAR_7->clk_num > 0) {
  VAR_7->clk_info = FUNC_4(&VAR_5->dev,
   VAR_7->clk_num, sizeof(*VAR_8),
   VAR_2);
  if (!VAR_7->clk_info)
   return -VAR_1;
 } else {
  FUNC_5("Failed to get vdec clock count");
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->clk_num; VAR_9++) {
  VAR_8 = &VAR_7->clk_info[VAR_9];
  VAR_10 = FUNC_10(VAR_5->dev.of_node,
   "clock-names", VAR_9, &VAR_8->clk_name);
  if (VAR_10) {
   FUNC_5("Failed to get clock name id = %d", VAR_9);
   return VAR_10;
  }
  VAR_8->vcodec_clk = FUNC_3(&VAR_5->dev,
   VAR_8->clk_name);
  if (FUNC_0(VAR_8->vcodec_clk)) {
   FUNC_5("devm_clk_get (%d)%s fail", VAR_9,
    VAR_8->clk_name);
   return FUNC_1(VAR_8->vcodec_clk);
  }
 }

 FUNC_11(&VAR_5->dev);

 return VAR_10;
}
