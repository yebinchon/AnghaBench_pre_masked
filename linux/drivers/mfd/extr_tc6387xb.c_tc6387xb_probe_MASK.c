
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc6387xb_platform_data {int (* enable ) (struct platform_device*) ;} ;
struct resource {char* name; scalar_t__ start; int flags; scalar_t__ end; } ;
struct tc6387xb {struct resource rscr; int scr; struct clk* clk32k; } ;
struct platform_device {int id; int dev; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*) ;
 int FUNC_4 (struct clk*) ;
 struct tc6387xb_platform_data* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct tc6387xb*) ;
 struct tc6387xb* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int ,int ,int ,struct resource*,int,int *) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct tc6387xb*) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (struct resource*,struct resource*) ;
 int FUNC_17 (struct resource*) ;
 int FUNC_18 (struct platform_device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_5)
{
 struct tc6387xb_platform_data *VAR_6 = FUNC_5(&VAR_5->dev);
 struct resource *VAR_7, *VAR_8;
 struct clk *VAR_9;
 struct tc6387xb *VAR_10;
 int VAR_11, VAR_12;

 VAR_7 = FUNC_13(VAR_5, VAR_3, 0);
 if (!VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_12 = FUNC_12(VAR_5, 0);
 if (VAR_12 >= 0)
  VAR_11 = VAR_12;
 else
  goto err_no_irq;

 VAR_9 = FUNC_3(&VAR_5->dev, "CLK_CK32K");
 if (FUNC_1(VAR_9)) {
  VAR_12 = FUNC_2(VAR_9);
  goto err_no_clk;
 }

 VAR_8 = &VAR_10->rscr;
 VAR_8->name = "tc6387xb-core";
 VAR_8->start = VAR_7->start;
 VAR_8->end = VAR_7->start + 0xff;
 VAR_8->flags = VAR_3;

 VAR_12 = FUNC_16(VAR_7, VAR_8);
 if (VAR_12)
  goto err_resource;

 VAR_10->scr = FUNC_7(VAR_8->start, FUNC_17(VAR_8));
 if (!VAR_10->scr) {
  VAR_12 = -VAR_1;
  goto err_ioremap;
 }

 VAR_10->clk32k = VAR_9;
 FUNC_14(VAR_5, VAR_10);

 if (VAR_6 && VAR_6->enable)
  VAR_6->enable(VAR_5);

 FUNC_6(&VAR_5->dev, "Toshiba tc6387xb initialised\n");

 VAR_12 = FUNC_11(&VAR_5->dev, VAR_5->id, VAR_4,
         FUNC_0(VAR_4), VAR_7, VAR_11, ((void*)0));

 if (!VAR_12)
  return 0;

 FUNC_8(VAR_10->scr);
err_ioremap:
 FUNC_15(&VAR_10->rscr);
err_resource:
 FUNC_4(VAR_9);
err_no_clk:
err_no_irq:
 FUNC_9(VAR_10);
 return VAR_12;
}
