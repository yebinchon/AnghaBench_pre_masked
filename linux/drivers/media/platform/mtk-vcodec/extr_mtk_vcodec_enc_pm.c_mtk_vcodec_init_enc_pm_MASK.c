
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct mtk_vcodec_clk {int clk_num; struct mtk_vcodec_clk_info* clk_info; } ;
struct mtk_vcodec_pm {struct device* dev; struct device* larbvenclt; struct device* larbvenc; struct mtk_vcodec_clk venc_clk; struct mtk_vcodec_dev* mtkdev; } ;
struct mtk_vcodec_dev {struct platform_device* plat_dev; struct mtk_vcodec_pm pm; } ;
struct mtk_vcodec_clk_info {int vcodec_clk; int clk_name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ) ;
 struct mtk_vcodec_clk_info* FUNC_3 (struct device*,int,int,int ) ;
 int FUNC_4 (struct mtk_vcodec_pm*,int ,int) ;
 int FUNC_5 (char*,...) ;
 struct platform_device* FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,int,int *) ;

int FUNC_11(struct mtk_vcodec_dev *VAR_4)
{
 struct device_node *VAR_5;
 struct platform_device *VAR_6;
 struct mtk_vcodec_pm *VAR_7;
 struct mtk_vcodec_clk *VAR_8;
 struct mtk_vcodec_clk_info *VAR_9;
 int VAR_10 = 0, VAR_11 = 0;
 struct device *VAR_12;

 VAR_6 = VAR_4->plat_dev;
 VAR_7 = &VAR_4->pm;
 FUNC_4(VAR_7, 0, sizeof(struct mtk_vcodec_pm));
 VAR_7->mtkdev = VAR_4;
 VAR_7->dev = &VAR_6->dev;
 VAR_12 = &VAR_6->dev;
 VAR_8 = &VAR_7->venc_clk;

 VAR_5 = FUNC_8(VAR_12->of_node, "mediatek,larb", 0);
 if (!VAR_5) {
  FUNC_5("no mediatek,larb found");
  return -VAR_1;
 }
 VAR_6 = FUNC_6(VAR_5);
 FUNC_7(VAR_5);
 if (!VAR_6) {
  FUNC_5("no mediatek,larb device found");
  return -VAR_1;
 }
 VAR_7->larbvenc = &VAR_6->dev;

 VAR_5 = FUNC_8(VAR_12->of_node, "mediatek,larb", 1);
 if (!VAR_5) {
  FUNC_5("no mediatek,larb found");
  return -VAR_1;
 }

 VAR_6 = FUNC_6(VAR_5);
 FUNC_7(VAR_5);
 if (!VAR_6) {
  FUNC_5("no mediatek,larb device found");
  return -VAR_1;
 }

 VAR_7->larbvenclt = &VAR_6->dev;
 VAR_6 = VAR_4->plat_dev;
 VAR_7->dev = &VAR_6->dev;

 VAR_8->clk_num = FUNC_9(VAR_6->dev.of_node,
  "clock-names");
 if (VAR_8->clk_num > 0) {
  VAR_8->clk_info = FUNC_3(&VAR_6->dev,
   VAR_8->clk_num, sizeof(*VAR_9),
   VAR_3);
  if (!VAR_8->clk_info)
   return -VAR_2;
 } else {
  FUNC_5("Failed to get venc clock count");
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->clk_num; VAR_11++) {
  VAR_9 = &VAR_8->clk_info[VAR_11];
  VAR_10 = FUNC_10(VAR_6->dev.of_node,
   "clock-names", VAR_11, &VAR_9->clk_name);
  if (VAR_10) {
   FUNC_5("venc failed to get clk name %d", VAR_11);
   return VAR_10;
  }
  VAR_9->vcodec_clk = FUNC_2(&VAR_6->dev,
   VAR_9->clk_name);
  if (FUNC_0(VAR_9->vcodec_clk)) {
   FUNC_5("venc devm_clk_get (%d)%s fail", VAR_11,
    VAR_9->clk_name);
   return FUNC_1(VAR_9->vcodec_clk);
  }
 }

 return VAR_10;
}
