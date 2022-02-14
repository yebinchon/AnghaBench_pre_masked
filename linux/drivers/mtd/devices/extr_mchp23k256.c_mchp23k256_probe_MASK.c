
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int of_node; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_9__ {TYPE_3__* parent; } ;
struct TYPE_12__ {int writesize; int _write; int _read; int size; int flags; int type; TYPE_1__ dev; } ;
struct mchp23k256_flash {TYPE_4__ mtd; TYPE_2__* caps; int lock; struct spi_device* spi; } ;
struct flash_platform_data {int nr_parts; int * parts; } ;
struct TYPE_10__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct flash_platform_data* FUNC_0 (TYPE_3__*) ;
 struct mchp23k256_flash* FUNC_1 (TYPE_3__*,int,int ) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct spi_device*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*,int *,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct spi_device*,struct mchp23k256_flash*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_7)
{
 struct mchp23k256_flash *VAR_8;
 struct flash_platform_data *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->spi = VAR_7;
 FUNC_5(&VAR_8->lock);
 FUNC_7(VAR_7, VAR_8);

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_0(&VAR_7->dev);

 VAR_8->caps = FUNC_6(&VAR_7->dev);
 if (!VAR_8->caps)
  VAR_8->caps = &VAR_4;

 FUNC_4(&VAR_8->mtd, VAR_7->dev.of_node);
 VAR_8->mtd.dev.parent = &VAR_7->dev;
 VAR_8->mtd.type = VAR_3;
 VAR_8->mtd.flags = VAR_2;
 VAR_8->mtd.writesize = 1;
 VAR_8->mtd.size = VAR_8->caps->size;
 VAR_8->mtd._read = VAR_5;
 VAR_8->mtd._write = VAR_6;

 VAR_10 = FUNC_3(&VAR_8->mtd, VAR_9 ? VAR_9->parts : ((void*)0),
      VAR_9 ? VAR_9->nr_parts : 0);
 if (VAR_10)
  return VAR_10;

 return 0;
}
