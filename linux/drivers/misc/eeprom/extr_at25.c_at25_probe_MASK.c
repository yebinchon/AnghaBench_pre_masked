
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct spi_eeprom {int flags; int byte_len; int page_size; int name; } ;
struct TYPE_8__ {scalar_t__ platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct TYPE_9__ {int read_only; int root_only; int compat; int stride; int word_size; int size; struct at25_data* priv; int reg_write; int reg_read; TYPE_1__* base_dev; int owner; TYPE_1__* dev; int name; } ;
struct at25_data {int addrlen; struct spi_eeprom chip; int nvmem; TYPE_2__ nvmem_config; struct spi_device* spi; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_1__*,struct spi_eeprom*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*,int,char*,int ,char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 struct at25_data* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct spi_device*,struct at25_data*) ;
 int FUNC_10 (struct spi_device*,int ) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_13)
{
 struct at25_data *VAR_14 = ((void*)0);
 struct spi_eeprom VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;


 if (!VAR_13->dev.platform_data) {
  VAR_16 = FUNC_2(&VAR_13->dev, &VAR_15);
  if (VAR_16)
   return VAR_16;
 } else
  VAR_15 = *(struct spi_eeprom *)VAR_13->dev.platform_data;


 if (VAR_15.flags & VAR_2)
  VAR_18 = 1;
 else if (VAR_15.flags & VAR_3)
  VAR_18 = 2;
 else if (VAR_15.flags & VAR_4)
  VAR_18 = 3;
 else {
  FUNC_3(&VAR_13->dev, "unsupported address type\n");
  return -VAR_6;
 }





 VAR_17 = FUNC_10(VAR_13, VAR_0);
 if (VAR_17 < 0 || VAR_17 & VAR_1) {
  FUNC_3(&VAR_13->dev, "rdsr --> %d (%02x)\n", VAR_17, VAR_17);
  return -VAR_8;
 }

 VAR_14 = FUNC_6(&VAR_13->dev, sizeof(struct at25_data), VAR_9);
 if (!VAR_14)
  return -VAR_7;

 FUNC_8(&VAR_14->lock);
 VAR_14->chip = VAR_15;
 VAR_14->spi = VAR_13;
 FUNC_9(VAR_13, VAR_14);
 VAR_14->addrlen = VAR_18;

 VAR_14->nvmem_config.name = FUNC_5(&VAR_13->dev);
 VAR_14->nvmem_config.dev = &VAR_13->dev;
 VAR_14->nvmem_config.read_only = VAR_15.flags & VAR_5;
 VAR_14->nvmem_config.root_only = 1;
 VAR_14->nvmem_config.owner = VAR_10;
 VAR_14->nvmem_config.compat = 1;
 VAR_14->nvmem_config.base_dev = &VAR_13->dev;
 VAR_14->nvmem_config.reg_read = VAR_11;
 VAR_14->nvmem_config.reg_write = VAR_12;
 VAR_14->nvmem_config.priv = VAR_14;
 VAR_14->nvmem_config.stride = 4;
 VAR_14->nvmem_config.word_size = 1;
 VAR_14->nvmem_config.size = VAR_15.byte_len;

 VAR_14->nvmem = FUNC_7(&VAR_13->dev, &VAR_14->nvmem_config);
 if (FUNC_0(VAR_14->nvmem))
  return FUNC_1(VAR_14->nvmem);

 FUNC_4(&VAR_13->dev, "%d %s %s eeprom%s, pagesize %u\n",
  (VAR_15.byte_len < 1024) ? VAR_15.byte_len : (VAR_15.byte_len / 1024),
  (VAR_15.byte_len < 1024) ? "Byte" : "KByte",
  VAR_14->chip.name,
  (VAR_15.flags & VAR_5) ? " (readonly)" : "",
  VAR_14->chip.page_size);
 return 0;
}
