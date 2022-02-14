
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct s3c2410_platform_nand {int nr_sets; struct s3c2410_nand_set* sets; } ;
struct s3c2410_nand_set {int nr_chips; } ;
struct s3c2410_nand_mtd {int chip; } ;
struct TYPE_10__ {int * ops; } ;
struct s3c2410_nand_info {int mtd_count; struct s3c2410_nand_mtd* mtds; int regs; struct s3c2410_platform_nand* platform; TYPE_3__* device; int clk; TYPE_2__ controller; } ;
struct resource {int dummy; } ;
struct TYPE_11__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_3__ dev; struct resource* resource; } ;
struct TYPE_9__ {TYPE_3__* parent; } ;
struct mtd_info {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct s3c2410_nand_info*) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,struct resource*) ;
 void* FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,int) ;
 struct mtd_info* FUNC_11 (int *) ;
 int FUNC_12 (struct platform_device*,struct s3c2410_nand_info*) ;
 int FUNC_13 (char*,int,struct s3c2410_nand_mtd*,struct s3c2410_nand_info*) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (struct s3c2410_nand_info*,struct s3c2410_nand_mtd*,struct s3c2410_nand_set*) ;
 int FUNC_16 (struct s3c2410_nand_info*,int ) ;
 int FUNC_17 (struct s3c2410_nand_info*) ;
 int FUNC_18 (struct s3c2410_nand_info*,struct s3c2410_nand_mtd*,struct s3c2410_nand_set*) ;
 int FUNC_19 (struct s3c2410_nand_info*) ;
 int VAR_6 ;
 int FUNC_20 (struct platform_device*) ;
 int FUNC_21 (struct platform_device*) ;
 int FUNC_22 (struct platform_device*) ;
 struct s3c2410_platform_nand* FUNC_23 (struct platform_device*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_7)
{
 struct s3c2410_platform_nand *VAR_8;
 struct s3c2410_nand_info *VAR_9;
 struct s3c2410_nand_mtd *VAR_10;
 struct s3c2410_nand_set *VAR_11;
 struct resource *VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_9 = FUNC_8(&VAR_7->dev, sizeof(*VAR_9), VAR_5);
 if (VAR_9 == ((void*)0)) {
  VAR_13 = -VAR_4;
  goto exit_error;
 }

 FUNC_12(VAR_7, VAR_9);

 FUNC_9(&VAR_9->controller);
 VAR_9->controller.ops = &VAR_6;



 VAR_9->clk = FUNC_6(&VAR_7->dev, "nand");
 if (FUNC_0(VAR_9->clk)) {
  FUNC_4(&VAR_7->dev, "failed to get clock\n");
  VAR_13 = -VAR_3;
  goto exit_error;
 }

 FUNC_16(VAR_9, VAR_0);

 if (VAR_7->dev.of_node)
  VAR_13 = FUNC_20(VAR_7);
 else
  VAR_13 = FUNC_21(VAR_7);

 if (VAR_13)
  goto exit_error;

 VAR_8 = FUNC_23(VAR_7);




 VAR_12 = VAR_7->resource;
 VAR_14 = FUNC_14(VAR_12);

 VAR_9->device = &VAR_7->dev;
 VAR_9->platform = VAR_8;

 VAR_9->regs = FUNC_7(&VAR_7->dev, VAR_12);
 if (FUNC_0(VAR_9->regs)) {
  VAR_13 = FUNC_1(VAR_9->regs);
  goto exit_error;
 }

 FUNC_3(&VAR_7->dev, "mapped registers at %p\n", VAR_9->regs);

 if (!VAR_8->sets || VAR_8->nr_sets < 1) {
  VAR_13 = -VAR_2;
  goto exit_error;
 }

 VAR_11 = VAR_8->sets;
 VAR_15 = VAR_8->nr_sets;

 VAR_9->mtd_count = VAR_15;



 VAR_14 = VAR_15 * sizeof(*VAR_9->mtds);
 VAR_9->mtds = FUNC_8(&VAR_7->dev, VAR_14, VAR_5);
 if (VAR_9->mtds == ((void*)0)) {
  VAR_13 = -VAR_4;
  goto exit_error;
 }



 VAR_10 = VAR_9->mtds;

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++, VAR_10++, VAR_11++) {
  struct mtd_info *VAR_17 = FUNC_11(&VAR_10->chip);

  FUNC_13("initialising set %d (%p, info %p)\n",
    VAR_16, VAR_10, VAR_9);

  VAR_17->dev.parent = &VAR_7->dev;
  FUNC_18(VAR_9, VAR_10, VAR_11);

  VAR_13 = FUNC_10(&VAR_10->chip, VAR_11 ? VAR_11->nr_chips : 1);
  if (VAR_13)
   goto exit_error;

  FUNC_15(VAR_9, VAR_10, VAR_11);
 }


 VAR_13 = FUNC_19(VAR_9);
 if (VAR_13 != 0)
  goto exit_error;

 VAR_13 = FUNC_17(VAR_9);
 if (VAR_13 < 0) {
  FUNC_4(&VAR_7->dev, "failed to init cpufreq support\n");
  goto exit_error;
 }

 if (FUNC_2(VAR_9)) {
  FUNC_5(&VAR_7->dev, "clock idle support enabled\n");
  FUNC_16(VAR_9, VAR_1);
 }

 return 0;

 exit_error:
 FUNC_22(VAR_7);

 if (VAR_13 == 0)
  VAR_13 = -VAR_2;
 return VAR_13;
}
