
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int modes; int * info; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct adt7316_bus {scalar_t__ irq; int (* write ) (int ,int ,int ) ;int client; } ;
struct adt7316_chip_info {int id; int dac_bits; int int_mask; int config3; struct adt7316_bus bus; int config1; int ldac_pin; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_18 ;
 int FUNC_2 (struct iio_dev*) ;
 int VAR_19 ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,char const*) ;
 int FUNC_5 (struct device*,struct iio_dev*) ;
 int FUNC_6 (struct device*,char*,int ) ;
 struct iio_dev* FUNC_7 (struct device*,int) ;
 int FUNC_8 (struct device*,struct iio_dev*) ;
 struct adt7316_chip_info* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;

int FUNC_12(struct device *VAR_20, struct adt7316_bus *VAR_21,
    const char *VAR_22)
{
 struct adt7316_chip_info *VAR_23;
 struct iio_dev *VAR_24;
 int VAR_25;

 VAR_24 = FUNC_7(VAR_20, sizeof(*VAR_23));
 if (!VAR_24)
  return -VAR_9;
 VAR_23 = FUNC_9(VAR_24);

 FUNC_5(VAR_20, VAR_24);

 VAR_23->bus = *VAR_21;

 if (VAR_22[4] == '3')
  VAR_23->id = VAR_11 + (VAR_22[6] - '6');
 else if (VAR_22[4] == '5')
  VAR_23->id = VAR_13 + (VAR_22[6] - '6');
 else
  return -VAR_8;

 if (VAR_23->id == VAR_11 || VAR_23->id == VAR_13)
  VAR_23->dac_bits = 12;
 else if (VAR_23->id == VAR_12 || VAR_23->id == VAR_14)
  VAR_23->dac_bits = 10;
 else
  VAR_23->dac_bits = 8;

 VAR_23->ldac_pin = FUNC_6(VAR_20, "adi,ldac",
       VAR_10);
 if (FUNC_0(VAR_23->ldac_pin)) {
  VAR_25 = FUNC_1(VAR_23->ldac_pin);
  FUNC_3(VAR_20, "Failed to request ldac GPIO: %d\n", VAR_25);
  return VAR_25;
 }

 if (!VAR_23->ldac_pin) {
  VAR_23->config3 |= VAR_2;
  if ((VAR_23->id & VAR_16) == VAR_15)
   VAR_23->config1 |= VAR_6;
 }
 VAR_23->int_mask = VAR_3 | VAR_4;
 if ((VAR_23->id & VAR_16) == VAR_15)
  VAR_23->int_mask |= VAR_5;

 VAR_24->dev.parent = VAR_20;
 if ((VAR_23->id & VAR_16) == VAR_15)
  VAR_24->info = &VAR_19;
 else
  VAR_24->info = &VAR_18;
 VAR_24->name = VAR_22;
 VAR_24->modes = VAR_17;

 if (VAR_23->bus.irq > 0) {
  VAR_25 = FUNC_2(VAR_24);
  if (VAR_25)
   return VAR_25;
 }

 VAR_25 = VAR_23->bus.write(VAR_23->bus.client, VAR_0, VAR_23->config1);
 if (VAR_25)
  return -VAR_7;

 VAR_25 = VAR_23->bus.write(VAR_23->bus.client, VAR_1, VAR_23->config3);
 if (VAR_25)
  return -VAR_7;

 VAR_25 = FUNC_8(VAR_20, VAR_24);
 if (VAR_25)
  return VAR_25;

 FUNC_4(VAR_20, "%s temperature sensor, ADC and DAC registered.\n",
   VAR_24->name);

 return 0;
}
