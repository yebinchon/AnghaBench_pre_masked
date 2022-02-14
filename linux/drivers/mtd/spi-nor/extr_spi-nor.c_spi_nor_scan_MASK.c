
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_nor_hwcaps {int dummy; } ;
struct spi_nor_flash_parameter {int size; int page_size; scalar_t__ locking_ops; } ;
struct TYPE_3__ {struct device* parent; } ;
struct mtd_info {int writesize; int size; int erasesize; int numeraseregions; TYPE_2__* eraseregions; scalar_t__ name; int writebufsize; TYPE_1__ dev; int flags; int _write; int _is_locked; int _unlock; int _lock; int _resume; int _read; int _erase; int type; struct spi_nor* priv; } ;
struct spi_nor {int flags; int page_size; struct spi_nor_flash_parameter params; int clear_sr_bp; struct flash_info const* info; int lock; int bouncebuf; int bouncebuf_size; void* write_proto; void* read_proto; void* reg_proto; struct mtd_info mtd; struct device* dev; } ;
struct flash_info {int flags; int name; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int erasesize; int numblocks; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct flash_info const*) ;
 scalar_t__ FUNC_1 (struct flash_info const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct flash_info const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (struct device*,char*,int,long long,int,int,int,...) ;
 int FUNC_4 (struct device*,char*,int ,long long) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct spi_nor*) ;
 int VAR_27 ;
 int FUNC_10 (struct spi_nor*,struct flash_info const*) ;
 int VAR_28 ;
 struct flash_info* FUNC_11 (struct spi_nor*,char const*) ;
 struct device_node* FUNC_12 (struct spi_nor*) ;
 int FUNC_13 (struct spi_nor*) ;
 int FUNC_14 (struct spi_nor*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_15 (struct spi_nor*) ;
 int FUNC_16 (struct spi_nor*,struct spi_nor_hwcaps const*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;

int FUNC_17(struct spi_nor *VAR_36, const char *VAR_37,
   const struct spi_nor_hwcaps *VAR_38)
{
 const struct flash_info *VAR_39;
 struct device *VAR_40 = VAR_36->dev;
 struct mtd_info *VAR_41 = &VAR_36->mtd;
 struct device_node *VAR_42 = FUNC_12(VAR_36);
 struct spi_nor_flash_parameter *VAR_43 = &VAR_36->params;
 int VAR_44;
 int VAR_45;

 VAR_44 = FUNC_9(VAR_36);
 if (VAR_44)
  return VAR_44;


 VAR_36->reg_proto = VAR_18;
 VAR_36->read_proto = VAR_18;
 VAR_36->write_proto = VAR_18;
 VAR_36->bouncebuf_size = VAR_6;
 VAR_36->bouncebuf = FUNC_6(VAR_40, VAR_36->bouncebuf_size,
          VAR_1);
 if (!VAR_36->bouncebuf)
  return -VAR_0;

 VAR_39 = FUNC_11(VAR_36, VAR_37);
 if (FUNC_0(VAR_39))
  return FUNC_2(VAR_39);

 VAR_36->info = VAR_39;

 FUNC_10(VAR_36, VAR_39);

 FUNC_7(&VAR_36->lock);






 if (VAR_39->flags & VAR_23)
  VAR_36->flags |= VAR_12;

 if (VAR_39->flags & VAR_20)
  VAR_36->flags |= VAR_9;





 if (FUNC_1(VAR_36->info) == VAR_15 ||
     FUNC_1(VAR_36->info) == VAR_16 ||
     FUNC_1(VAR_36->info) == VAR_17 ||
     VAR_36->info->flags & VAR_20)
  VAR_36->clear_sr_bp = VAR_27;


 FUNC_14(VAR_36);

 if (!VAR_41->name)
  VAR_41->name = FUNC_5(VAR_40);
 VAR_41->priv = VAR_36;
 VAR_41->type = VAR_3;
 VAR_41->writesize = 1;
 VAR_41->flags = VAR_2;
 VAR_41->size = VAR_43->size;
 VAR_41->_erase = VAR_28;
 VAR_41->_read = VAR_31;
 VAR_41->_resume = VAR_32;

 if (VAR_36->params.locking_ops) {
  VAR_41->_lock = VAR_30;
  VAR_41->_unlock = VAR_33;
  VAR_41->_is_locked = VAR_29;
 }


 if (VAR_39->flags & VAR_24)
  VAR_41->_write = VAR_35;
 else
  VAR_41->_write = VAR_34;

 if (VAR_39->flags & VAR_26)
  VAR_36->flags |= VAR_14;
 if (VAR_39->flags & VAR_21)
  VAR_36->flags |= VAR_10;
 if (VAR_39->flags & VAR_5)
  VAR_36->flags |= VAR_11;
 if (VAR_39->flags & VAR_25)
  VAR_36->flags |= VAR_13;

 if (VAR_39->flags & VAR_22)
  VAR_41->flags |= VAR_4;

 VAR_41->dev.parent = VAR_40;
 VAR_36->page_size = VAR_43->page_size;
 VAR_41->writebufsize = VAR_36->page_size;

 if (FUNC_8(VAR_42, "broken-flash-reset"))
  VAR_36->flags |= VAR_8;







 VAR_44 = FUNC_16(VAR_36, VAR_38);
 if (VAR_44)
  return VAR_44;

 if (VAR_39->flags & VAR_19)
  VAR_36->flags |= VAR_7;

 VAR_44 = FUNC_15(VAR_36);
 if (VAR_44)
  return VAR_44;


 VAR_44 = FUNC_13(VAR_36);
 if (VAR_44)
  return VAR_44;

 FUNC_4(VAR_40, "%s (%lld Kbytes)\n", VAR_39->name,
   (long long)VAR_41->size >> 10);

 FUNC_3(VAR_40,
  "mtd .name = %s, .size = 0x%llx (%lldMiB), "
  ".erasesize = 0x%.8x (%uKiB) .numeraseregions = %d\n",
  VAR_41->name, (long long)VAR_41->size, (long long)(VAR_41->size >> 20),
  VAR_41->erasesize, VAR_41->erasesize / 1024, VAR_41->numeraseregions);

 if (VAR_41->numeraseregions)
  for (VAR_45 = 0; VAR_45 < VAR_41->numeraseregions; VAR_45++)
   FUNC_3(VAR_40,
    "mtd.eraseregions[%d] = { .offset = 0x%llx, "
    ".erasesize = 0x%.8x (%uKiB), "
    ".numblocks = %d }\n",
    VAR_45, (long long)VAR_41->eraseregions[VAR_45].offset,
    VAR_41->eraseregions[VAR_45].erasesize,
    VAR_41->eraseregions[VAR_45].erasesize / 1024,
    VAR_41->eraseregions[VAR_45].numblocks);
 return 0;
}
