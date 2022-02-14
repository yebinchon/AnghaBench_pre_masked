
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct spi_master {int max_speed_hz; int bus_num; int mode_bits; int auto_runtime_pm; int handle_err; int transfer_one; int prepare_message; int flags; TYPE_1__ dev; int num_chipselect; } ;
struct qcom_qspi {TYPE_2__* clks; int base; struct device* dev; int lock; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {char* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int ,TYPE_2__*) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,int,int ,int ,int ,struct qcom_qspi*) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct platform_device*,struct spi_master*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct spi_master* FUNC_11 (struct device*,int) ;
 struct qcom_qspi* FUNC_12 (struct spi_master*) ;
 int FUNC_13 (struct spi_master*) ;
 int FUNC_14 (struct spi_master*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_16)
{
 int VAR_17;
 struct device *VAR_18;
 struct spi_master *VAR_19;
 struct qcom_qspi *VAR_20;

 VAR_18 = &VAR_16->dev;

 VAR_19 = FUNC_11(VAR_18, sizeof(*VAR_20));
 if (!VAR_19)
  return -VAR_0;

 FUNC_8(VAR_16, VAR_19);

 VAR_20 = FUNC_12(VAR_19);

 FUNC_15(&VAR_20->lock);
 VAR_20->dev = VAR_18;
 VAR_20->base = FUNC_5(VAR_16, 0);
 if (FUNC_0(VAR_20->base)) {
  VAR_17 = FUNC_1(VAR_20->base);
  goto exit_probe_master_put;
 }

 VAR_20->clks[VAR_2].id = "core";
 VAR_20->clks[VAR_3].id = "iface";
 VAR_17 = FUNC_4(VAR_18, VAR_4, VAR_20->clks);
 if (VAR_17)
  goto exit_probe_master_put;

 VAR_17 = FUNC_7(VAR_16, 0);
 if (VAR_17 < 0)
  goto exit_probe_master_put;
 VAR_17 = FUNC_6(VAR_18, VAR_17, VAR_13,
   VAR_1, FUNC_3(VAR_18), VAR_20);
 if (VAR_17) {
  FUNC_2(VAR_18, "Failed to request irq %d\n", VAR_17);
  goto exit_probe_master_put;
 }

 VAR_19->max_speed_hz = 300000000;
 VAR_19->num_chipselect = VAR_5;
 VAR_19->bus_num = -1;
 VAR_19->dev.of_node = VAR_16->dev.of_node;
 VAR_19->mode_bits = VAR_7 |
       VAR_10 | VAR_8 |
       VAR_11 | VAR_9;
 VAR_19->flags = VAR_6;
 VAR_19->prepare_message = VAR_14;
 VAR_19->transfer_one = VAR_15;
 VAR_19->handle_err = VAR_12;
 VAR_19->auto_runtime_pm = 1;

 FUNC_10(VAR_18);

 VAR_17 = FUNC_14(VAR_19);
 if (!VAR_17)
  return 0;

 FUNC_9(VAR_18);

exit_probe_master_put:
 FUNC_13(VAR_19);

 return VAR_17;
}
