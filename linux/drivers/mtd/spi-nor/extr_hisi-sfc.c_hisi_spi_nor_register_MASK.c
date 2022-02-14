
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor_hwcaps {int mask; } ;
struct mtd_info {int name; } ;
struct spi_nor {struct mtd_info mtd; int * erase; int write; int read; int write_reg; int read_reg; int unprepare; int prepare; struct hifmc_priv* priv; struct device* dev; } ;
struct hifmc_priv {struct hifmc_host* host; int clkrate; int chipselect; } ;
struct hifmc_host {size_t num_chip; struct spi_nor** nor; struct device* dev; } ;
struct device_node {int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,struct device_node*) ;
 void* FUNC_1 (struct device*,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct mtd_info*,int *,int ) ;
 int FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct spi_nor*,int *,struct spi_nor_hwcaps const*) ;
 int FUNC_5 (struct spi_nor*,struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_13,
    struct hifmc_host *VAR_14)
{
 const struct spi_nor_hwcaps VAR_15 = {
  .mask = VAR_3 |
   VAR_6 |
   VAR_4 |
   VAR_5 |
   VAR_2,
 };
 struct device *VAR_16 = VAR_14->dev;
 struct spi_nor *VAR_17;
 struct hifmc_priv *VAR_18;
 struct mtd_info *VAR_19;
 int VAR_20;

 VAR_17 = FUNC_1(VAR_16, sizeof(*VAR_17), VAR_1);
 if (!VAR_17)
  return -VAR_0;

 VAR_17->dev = VAR_16;
 FUNC_5(VAR_17, VAR_13);

 VAR_18 = FUNC_1(VAR_16, sizeof(*VAR_18), VAR_1);
 if (!VAR_18)
  return -VAR_0;

 VAR_20 = FUNC_3(VAR_13, "reg", &VAR_18->chipselect);
 if (VAR_20) {
  FUNC_0(VAR_16, "There's no reg property for %pOF\n",
   VAR_13);
  return VAR_20;
 }

 VAR_20 = FUNC_3(VAR_13, "spi-max-frequency",
   &VAR_18->clkrate);
 if (VAR_20) {
  FUNC_0(VAR_16, "There's no spi-max-frequency property for %pOF\n",
   VAR_13);
  return VAR_20;
 }
 VAR_18->host = VAR_14;
 VAR_17->priv = VAR_18;

 VAR_17->prepare = VAR_7;
 VAR_17->unprepare = VAR_10;
 VAR_17->read_reg = VAR_9;
 VAR_17->write_reg = VAR_12;
 VAR_17->read = VAR_8;
 VAR_17->write = VAR_11;
 VAR_17->erase = ((void*)0);
 VAR_20 = FUNC_4(VAR_17, ((void*)0), &VAR_15);
 if (VAR_20)
  return VAR_20;

 VAR_19 = &VAR_17->mtd;
 VAR_19->name = VAR_13->name;
 VAR_20 = FUNC_2(VAR_19, ((void*)0), 0);
 if (VAR_20)
  return VAR_20;

 VAR_14->nor[VAR_14->num_chip] = VAR_17;
 VAR_14->num_chip++;
 return 0;
}
