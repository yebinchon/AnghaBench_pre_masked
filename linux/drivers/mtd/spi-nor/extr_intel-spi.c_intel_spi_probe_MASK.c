
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_nor_hwcaps {int mask; } ;
struct resource {int dummy; } ;
struct mtd_partition {int dummy; } ;
struct intel_spi_boardinfo {int writeable; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {TYPE_2__ mtd; int erase; int write; int read; int write_reg; int read_reg; struct intel_spi* priv; struct device* dev; } ;
struct intel_spi {TYPE_1__ nor; int writeable; struct device* dev; struct intel_spi_boardinfo const* info; int base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_spi* FUNC_0 (int ) ;
 struct intel_spi* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct intel_spi* FUNC_5 (struct device*,int,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct intel_spi*,struct mtd_partition*) ;
 int FUNC_7 (struct intel_spi*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (TYPE_2__*,struct mtd_partition*,int) ;
 int FUNC_9 (TYPE_1__*,int *,struct spi_nor_hwcaps const*) ;
 int VAR_12 ;

struct intel_spi *FUNC_10(struct device *VAR_13,
 struct resource *VAR_14, const struct intel_spi_boardinfo *VAR_15)
{
 const struct spi_nor_hwcaps VAR_16 = {
  .mask = VAR_5 |
   VAR_6 |
   VAR_4,
 };
 struct mtd_partition VAR_17;
 struct intel_spi *VAR_18;
 int VAR_19;

 if (!VAR_15 || !VAR_14)
  return FUNC_1(-VAR_0);

 VAR_18 = FUNC_5(VAR_13, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return FUNC_1(-VAR_1);

 VAR_18->base = FUNC_4(VAR_13, VAR_14);
 if (FUNC_2(VAR_18->base))
  return FUNC_0(VAR_18->base);

 VAR_18->dev = VAR_13;
 VAR_18->info = VAR_15;
 VAR_18->writeable = VAR_15->writeable;

 VAR_19 = FUNC_7(VAR_18);
 if (VAR_19)
  return FUNC_1(VAR_19);

 VAR_18->nor.dev = VAR_18->dev;
 VAR_18->nor.priv = VAR_18;
 VAR_18->nor.read_reg = VAR_9;
 VAR_18->nor.write_reg = VAR_11;
 VAR_18->nor.read = VAR_8;
 VAR_18->nor.write = VAR_10;
 VAR_18->nor.erase = VAR_7;

 VAR_19 = FUNC_9(&VAR_18->nor, ((void*)0), &VAR_16);
 if (VAR_19) {
  FUNC_3(VAR_13, "failed to locate the chip\n");
  return FUNC_1(VAR_19);
 }

 FUNC_6(VAR_18, &VAR_17);


 if (!VAR_18->writeable || !VAR_12)
  VAR_18->nor.mtd.flags &= ~VAR_3;

 VAR_19 = FUNC_8(&VAR_18->nor.mtd, &VAR_17, 1);
 if (VAR_19)
  return FUNC_1(VAR_19);

 return VAR_18;
}
