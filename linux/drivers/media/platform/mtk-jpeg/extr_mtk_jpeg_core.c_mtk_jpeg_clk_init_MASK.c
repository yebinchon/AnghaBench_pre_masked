
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mtk_jpeg_dev {void* clk_jdec_smi; TYPE_1__* dev; void* clk_jdec; int * larb; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (TYPE_1__*,char*) ;
 struct platform_device* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct mtk_jpeg_dev *VAR_1)
{
 struct device_node *VAR_2;
 struct platform_device *VAR_3;

 VAR_2 = FUNC_7(VAR_1->dev->of_node, "mediatek,larb", 0);
 if (!VAR_2)
  return -VAR_0;
 VAR_3 = FUNC_5(VAR_2);
 if (FUNC_3(!VAR_3)) {
  FUNC_6(VAR_2);
  return -VAR_0;
 }
 FUNC_6(VAR_2);

 VAR_1->larb = &VAR_3->dev;

 VAR_1->clk_jdec = FUNC_4(VAR_1->dev, "jpgdec");
 if (FUNC_0(VAR_1->clk_jdec))
  return FUNC_1(VAR_1->clk_jdec);

 VAR_1->clk_jdec_smi = FUNC_4(VAR_1->dev, "jpgdec-smi");
 return FUNC_2(VAR_1->clk_jdec_smi);
}
