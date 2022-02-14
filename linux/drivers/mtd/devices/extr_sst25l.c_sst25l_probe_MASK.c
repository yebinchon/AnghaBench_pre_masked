
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct TYPE_4__ {int erasesize; int writesize; int writebufsize; int size; int numeraseregions; scalar_t__ name; int _write; int _read; int _erase; int flags; int type; TYPE_1__ dev; } ;
struct sst25l_flash {TYPE_2__ mtd; int lock; struct spi_device* spi; } ;
struct spi_device {int dev; } ;
struct flash_platform_data {int nr_parts; int * parts; scalar_t__ name; } ;
struct flash_info {int erase_size; int page_size; int nr_pages; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct flash_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,long long) ;
 struct sst25l_flash* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,scalar_t__,long long,long long,int,int,int ) ;
 int FUNC_6 (struct spi_device*,struct sst25l_flash*) ;
 int VAR_5 ;
 struct flash_info* FUNC_7 (struct spi_device*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_8)
{
 struct flash_info *VAR_9;
 struct sst25l_flash *VAR_10;
 struct flash_platform_data *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_7(VAR_8);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_2(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->spi = VAR_8;
 FUNC_4(&VAR_10->lock);
 FUNC_6(VAR_8, VAR_10);

 VAR_11 = FUNC_0(&VAR_8->dev);
 if (VAR_11 && VAR_11->name)
  VAR_10->mtd.name = VAR_11->name;

 VAR_10->mtd.dev.parent = &VAR_8->dev;
 VAR_10->mtd.type = VAR_4;
 VAR_10->mtd.flags = VAR_3;
 VAR_10->mtd.erasesize = VAR_9->erase_size;
 VAR_10->mtd.writesize = VAR_9->page_size;
 VAR_10->mtd.writebufsize = VAR_9->page_size;
 VAR_10->mtd.size = VAR_9->page_size * VAR_9->nr_pages;
 VAR_10->mtd._erase = VAR_5;
 VAR_10->mtd._read = VAR_6;
 VAR_10->mtd._write = VAR_7;

 FUNC_1(&VAR_8->dev, "%s (%lld KiB)\n", VAR_9->name,
   (long long)VAR_10->mtd.size >> 10);

 FUNC_5("mtd .name = %s, .size = 0x%llx (%lldMiB) "
       ".erasesize = 0x%.8x (%uKiB) .numeraseregions = %d\n",
       VAR_10->mtd.name,
       (long long)VAR_10->mtd.size, (long long)(VAR_10->mtd.size >> 20),
       VAR_10->mtd.erasesize, VAR_10->mtd.erasesize / 1024,
       VAR_10->mtd.numeraseregions);


 VAR_12 = FUNC_3(&VAR_10->mtd, VAR_11 ? VAR_11->parts : ((void*)0),
      VAR_11 ? VAR_11->nr_parts : 0);
 if (VAR_12)
  return -VAR_0;

 return 0;
}
