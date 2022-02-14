
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct rcar_drif_sdr {int hw_ch_mask; int num_hw_ch; struct rcar_drif** ch; int * dev; } ;
struct rcar_drif {int num; struct rcar_drif_sdr* sdr; int start; int base; int clk; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct resource*) ;
 void* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device_node*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct rcar_drif*) ;
 int FUNC_11 (struct rcar_drif_sdr*,struct device_node*) ;
 struct device_node* FUNC_12 (struct platform_device*) ;
 int FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct rcar_drif_sdr*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_3)
{
 struct rcar_drif_sdr *VAR_4;
 struct device_node *VAR_5;
 struct rcar_drif *VAR_6;
 struct resource *VAR_7;
 int VAR_8;


 VAR_6 = FUNC_6(&VAR_3->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->pdev = VAR_3;


 VAR_6->clk = FUNC_4(&VAR_3->dev, "fck");
 if (FUNC_1(VAR_6->clk)) {
  VAR_8 = FUNC_2(VAR_6->clk);
  FUNC_3(&VAR_3->dev, "clk get failed (%d)\n", VAR_8);
  return VAR_8;
 }


 VAR_7 = FUNC_9(VAR_3, VAR_2, 0);
 VAR_6->base = FUNC_5(&VAR_3->dev, VAR_7);
 if (FUNC_1(VAR_6->base))
  return FUNC_2(VAR_6->base);

 VAR_6->start = VAR_7->start;
 FUNC_10(VAR_3, VAR_6);


 VAR_5 = FUNC_12(VAR_3);
 if (VAR_5) {

  if (!FUNC_13(VAR_3)) {
   VAR_6->num = 1;
   FUNC_8(VAR_5);
   return 0;
  }
 }


 VAR_4 = FUNC_6(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  FUNC_8(VAR_5);
  return -VAR_0;
 }
 VAR_6->sdr = VAR_4;
 VAR_4->dev = &VAR_3->dev;


 VAR_4->ch[VAR_6->num] = VAR_6;
 VAR_4->hw_ch_mask = FUNC_0(VAR_6->num);
 if (VAR_5) {

  VAR_8 = FUNC_11(VAR_4, VAR_5);
  FUNC_8(VAR_5);
  if (VAR_8)
   return VAR_8;
 }
 VAR_4->num_hw_ch = FUNC_7(VAR_4->hw_ch_mask);

 return FUNC_14(VAR_4);
}
