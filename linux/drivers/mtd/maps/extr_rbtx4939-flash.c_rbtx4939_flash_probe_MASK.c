
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_8__ {unsigned long size; int virt; int phys; int bankwidth; int name; } ;
struct rbtx4939_flash_info {TYPE_4__* mtd; TYPE_2__ map; } ;
struct rbtx4939_flash_data {int nr_parts; int parts; int (* map_init ) (TYPE_2__*) ;int width; } ;
struct platform_device {int dev; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct rbtx4939_flash_data* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 struct rbtx4939_flash_info* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,unsigned long,int ) ;
 TYPE_4__* FUNC_6 (char const* const,TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct rbtx4939_flash_info*) ;
 int FUNC_10 (char*,struct resource*) ;
 int FUNC_11 (struct platform_device*) ;
 unsigned long FUNC_12 (struct resource*) ;
 char** VAR_6 ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct rbtx4939_flash_data *VAR_8;
 struct rbtx4939_flash_info *VAR_9;
 struct resource *VAR_10;
 const char * const *VAR_11;
 int VAR_12 = 0;
 unsigned long VAR_13;

 VAR_8 = FUNC_1(&VAR_7->dev);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_8(VAR_7, VAR_5, 0);
 if (!VAR_10)
  return -VAR_1;
 VAR_9 = FUNC_4(&VAR_7->dev, sizeof(struct rbtx4939_flash_info),
       VAR_4);
 if (!VAR_9)
  return -VAR_2;

 FUNC_9(VAR_7, VAR_9);

 VAR_13 = FUNC_12(VAR_10);
 FUNC_10("rbtx4939 platform flash device: %pR\n", VAR_10);

 if (!FUNC_5(&VAR_7->dev, VAR_10->start, VAR_13,
         FUNC_2(&VAR_7->dev)))
  return -VAR_0;

 VAR_9->map.name = FUNC_2(&VAR_7->dev);
 VAR_9->map.phys = VAR_10->start;
 VAR_9->map.size = VAR_13;
 VAR_9->map.bankwidth = VAR_8->width;

 VAR_9->map.virt = FUNC_3(&VAR_7->dev, VAR_9->map.phys, VAR_13);
 if (!VAR_9->map.virt)
  return -VAR_0;

 if (VAR_8->map_init)
  (*VAR_8->map_init)(&VAR_9->map);
 else
  FUNC_13(&VAR_9->map);

 VAR_11 = VAR_6;
 for (; !VAR_9->mtd && *VAR_11; VAR_11++)
  VAR_9->mtd = FUNC_6(*VAR_11, &VAR_9->map);
 if (!VAR_9->mtd) {
  FUNC_0(&VAR_7->dev, "map_probe failed\n");
  VAR_12 = -VAR_3;
  goto err_out;
 }
 VAR_9->mtd->dev.parent = &VAR_7->dev;
 VAR_12 = FUNC_7(VAR_9->mtd, VAR_8->parts, VAR_8->nr_parts);

 if (VAR_12)
  goto err_out;
 return 0;

err_out:
 FUNC_11(VAR_7);
 return VAR_12;
}
