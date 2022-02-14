
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int of_node; } ;
struct spi_device {int chip_select; TYPE_3__ dev; TYPE_1__* master; } ;
struct TYPE_6__ {TYPE_3__* parent; } ;
struct mtd_info {int size; int erasesize; int writesize; TYPE_2__ dev; struct dataflash* priv; int _write; int _read; int _erase; int flags; int type; scalar_t__ name; } ;
struct flash_platform_data {int nr_parts; int * parts; scalar_t__ name; } ;
struct dataflash {int page_size; int page_offset; scalar_t__ name; struct mtd_info mtd; struct spi_device* spi; int lock; } ;
struct TYPE_5__ {int bus_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct flash_platform_data* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*,char*,long long,int,char*) ;
 int FUNC_2 (struct dataflash*) ;
 struct dataflash* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mtd_info*,int *,int ) ;
 int FUNC_5 (struct mtd_info*,int ) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (struct mtd_info*,char) ;
 int FUNC_8 (struct spi_device*,struct dataflash*) ;
 int FUNC_9 (scalar_t__,char*,int,int,char*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_7, char *VAR_8, int VAR_9,
        int VAR_10, int VAR_11, char VAR_12)
{
 struct dataflash *VAR_13;
 struct mtd_info *VAR_14;
 struct flash_platform_data *VAR_15 = FUNC_0(&VAR_7->dev);
 char *VAR_16 = "";
 int VAR_17 = 0;

 VAR_13 = FUNC_3(sizeof *VAR_13, VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_6(&VAR_13->lock);
 VAR_13->spi = VAR_7;
 VAR_13->page_size = VAR_10;
 VAR_13->page_offset = VAR_11;


 FUNC_9(VAR_13->name, "spi%d.%d-%s",
   VAR_7->master->bus_num, VAR_7->chip_select,
   VAR_8);

 VAR_14 = &VAR_13->mtd;
 VAR_14->name = (VAR_15 && VAR_15->name) ? VAR_15->name : VAR_13->name;
 VAR_14->size = VAR_9 * VAR_10;
 VAR_14->erasesize = VAR_10;
 VAR_14->writesize = VAR_10;
 VAR_14->type = VAR_2;
 VAR_14->flags = VAR_3;
 VAR_14->_erase = VAR_4;
 VAR_14->_read = VAR_5;
 VAR_14->_write = VAR_6;
 VAR_14->priv = VAR_13;

 VAR_14->dev.parent = &VAR_7->dev;
 FUNC_5(VAR_14, VAR_7->dev.of_node);

 if (VAR_12 >= 'c')
  VAR_16 = FUNC_7(VAR_14, VAR_12);

 FUNC_1(&VAR_7->dev, "%s (%lld KBytes) pagesize %d bytes%s\n",
   VAR_8, (long long)((VAR_14->size + 1023) >> 10),
   VAR_10, VAR_16);
 FUNC_8(VAR_7, VAR_13);

 VAR_17 = FUNC_4(VAR_14,
   VAR_15 ? VAR_15->parts : ((void*)0),
   VAR_15 ? VAR_15->nr_parts : 0);

 if (!VAR_17)
  return 0;

 FUNC_2(VAR_13);
 return VAR_17;
}
