
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct eeprom_93xx46_platform_data* platform_data; scalar_t__ of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct eeprom_93xx46_platform_data {int flags; } ;
struct TYPE_9__ {int read_only; int root_only; int compat; int stride; int word_size; int size; struct eeprom_93xx46_dev* priv; int reg_write; int reg_read; TYPE_1__* base_dev; int owner; TYPE_1__* dev; int name; } ;
struct eeprom_93xx46_dev {int addrlen; int size; int nvmem; TYPE_2__ nvmem_config; struct eeprom_93xx46_platform_data* pdata; struct spi_device* spi; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 struct eeprom_93xx46_dev* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (struct spi_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct spi_device*,struct eeprom_93xx46_dev*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_11)
{
 struct eeprom_93xx46_platform_data *VAR_12;
 struct eeprom_93xx46_dev *VAR_13;
 int VAR_14;

 if (VAR_11->dev.of_node) {
  VAR_14 = FUNC_8(VAR_11);
  if (VAR_14 < 0)
   return VAR_14;
 }

 VAR_12 = VAR_11->dev.platform_data;
 if (!VAR_12) {
  FUNC_2(&VAR_11->dev, "missing platform data\n");
  return -VAR_4;
 }

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_5;

 if (VAR_12->flags & VAR_1)
  VAR_13->addrlen = 7;
 else if (VAR_12->flags & VAR_0)
  VAR_13->addrlen = 6;
 else {
  FUNC_2(&VAR_11->dev, "unspecified address type\n");
  return -VAR_3;
 }

 FUNC_9(&VAR_13->lock);

 VAR_13->spi = VAR_11;
 VAR_13->pdata = VAR_12;

 VAR_13->size = 128;
 VAR_13->nvmem_config.name = FUNC_4(&VAR_11->dev);
 VAR_13->nvmem_config.dev = &VAR_11->dev;
 VAR_13->nvmem_config.read_only = VAR_12->flags & VAR_2;
 VAR_13->nvmem_config.root_only = 1;
 VAR_13->nvmem_config.owner = VAR_7;
 VAR_13->nvmem_config.compat = 1;
 VAR_13->nvmem_config.base_dev = &VAR_11->dev;
 VAR_13->nvmem_config.reg_read = VAR_9;
 VAR_13->nvmem_config.reg_write = VAR_10;
 VAR_13->nvmem_config.priv = VAR_13;
 VAR_13->nvmem_config.stride = 4;
 VAR_13->nvmem_config.word_size = 1;
 VAR_13->nvmem_config.size = VAR_13->size;

 VAR_13->nvmem = FUNC_7(&VAR_11->dev, &VAR_13->nvmem_config);
 if (FUNC_0(VAR_13->nvmem))
  return FUNC_1(VAR_13->nvmem);

 FUNC_3(&VAR_11->dev, "%d-bit eeprom %s\n",
  (VAR_12->flags & VAR_1) ? 8 : 16,
  (VAR_12->flags & VAR_2) ? "(readonly)" : "");

 if (!(VAR_12->flags & VAR_2)) {
  if (FUNC_5(&VAR_11->dev, &VAR_8))
   FUNC_2(&VAR_11->dev, "can't create erase interface\n");
 }

 FUNC_10(VAR_11, VAR_13);
 return 0;
}
