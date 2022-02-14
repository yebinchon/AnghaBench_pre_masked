
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; struct resource* resource; } ;
struct onenand_platform_data {int nr_parts; int * parts; int * mmcontrol; } ;
struct TYPE_6__ {int base; int irq; int * mmcontrol; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_7__ {TYPE_2__* priv; TYPE_1__ dev; } ;
struct onenand_info {TYPE_2__ onenand; TYPE_3__ mtd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct onenand_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct onenand_info*) ;
 struct onenand_info* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,struct onenand_info*) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int ,unsigned long,int ) ;
 unsigned long FUNC_12 (struct resource*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_4)
{
 struct onenand_info *VAR_5;
 struct onenand_platform_data *VAR_6 = FUNC_0(&VAR_4->dev);
 struct resource *VAR_7 = VAR_4->resource;
 unsigned long VAR_8 = FUNC_12(VAR_7);
 int VAR_9;

 VAR_5 = FUNC_5(sizeof(struct onenand_info), VAR_3);
 if (!VAR_5)
  return -VAR_1;

 if (!FUNC_11(VAR_7->start, VAR_8, FUNC_1(&VAR_4->dev))) {
  VAR_9 = -VAR_0;
  goto out_free_info;
 }

 VAR_5->onenand.base = FUNC_2(VAR_7->start, VAR_8);
 if (!VAR_5->onenand.base) {
  VAR_9 = -VAR_1;
  goto out_release_mem_region;
 }

 VAR_5->onenand.mmcontrol = VAR_6 ? VAR_6->mmcontrol : ((void*)0);
 VAR_5->onenand.irq = FUNC_8(VAR_4, 0);

 VAR_5->mtd.dev.parent = &VAR_4->dev;
 VAR_5->mtd.priv = &VAR_5->onenand;

 if (FUNC_7(&VAR_5->mtd, 1)) {
  VAR_9 = -VAR_2;
  goto out_iounmap;
 }

 VAR_9 = FUNC_6(&VAR_5->mtd, VAR_6 ? VAR_6->parts : ((void*)0),
      VAR_6 ? VAR_6->nr_parts : 0);

 FUNC_9(VAR_4, VAR_5);

 return 0;

out_iounmap:
 FUNC_3(VAR_5->onenand.base);
out_release_mem_region:
 FUNC_10(VAR_7->start, VAR_8);
out_free_info:
 FUNC_4(VAR_5);

 return VAR_9;
}
