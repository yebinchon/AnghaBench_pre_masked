
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdoa_data {int * dev; int regs; int vdoa_clk; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct resource*) ;
 struct vdoa_data* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ,int *,int ,int ,char*,struct vdoa_data*) ;
 int FUNC_8 (int *,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct vdoa_data*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct vdoa_data *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 FUNC_8(&VAR_7->dev, FUNC_0(32));

 VAR_8 = FUNC_6(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev = &VAR_7->dev;

 VAR_8->vdoa_clk = FUNC_4(VAR_8->dev, ((void*)0));
 if (FUNC_1(VAR_8->vdoa_clk)) {
  FUNC_3(VAR_8->dev, "Failed to get clock\n");
  return FUNC_2(VAR_8->vdoa_clk);
 }

 VAR_9 = FUNC_9(VAR_7, VAR_4, 0);
 VAR_8->regs = FUNC_5(VAR_8->dev, VAR_9);
 if (FUNC_1(VAR_8->regs))
  return FUNC_2(VAR_8->regs);

 VAR_9 = FUNC_9(VAR_7, VAR_3, 0);
 if (!VAR_9)
  return -VAR_0;
 VAR_10 = FUNC_7(&VAR_7->dev, VAR_9->start, ((void*)0),
     VAR_6, VAR_5,
     "vdoa", VAR_8);
 if (VAR_10 < 0) {
  FUNC_3(VAR_8->dev, "Failed to get irq\n");
  return VAR_10;
 }

 FUNC_10(VAR_7, VAR_8);

 return 0;
}
