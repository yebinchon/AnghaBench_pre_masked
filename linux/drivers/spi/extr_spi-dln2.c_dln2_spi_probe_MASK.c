
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct spi_master {int bus_num; int mode_bits; int auto_runtime_pm; int transfer_one; int prepare_message; int bits_per_word_mask; int max_speed_hz; int min_speed_hz; int num_chipselect; TYPE_1__ dev; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct dln2_spi {int cs; int mode; int port; struct platform_device* pdev; struct spi_master* master; int buf; } ;
struct dln2_platform_data {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 struct dln2_platform_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (struct device*,struct spi_master*) ;
 int FUNC_4 (struct dln2_spi*,int) ;
 int FUNC_5 (struct dln2_spi*,int) ;
 int FUNC_6 (struct dln2_spi*,int *) ;
 int FUNC_7 (struct dln2_spi*,int *,int *) ;
 int FUNC_8 (struct dln2_spi*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct platform_device*,struct spi_master*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*,int ) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 struct spi_master* FUNC_16 (struct device*,int) ;
 struct dln2_spi* FUNC_17 (struct spi_master*) ;
 int FUNC_18 (struct spi_master*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_8)
{
 struct spi_master *VAR_9;
 struct dln2_spi *VAR_10;
 struct dln2_platform_data *VAR_11 = FUNC_1(&VAR_8->dev);
 struct device *VAR_12 = &VAR_8->dev;
 int VAR_13;

 VAR_9 = FUNC_16(&VAR_8->dev, sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_2;

 FUNC_9(VAR_8, VAR_9);

 VAR_10 = FUNC_17(VAR_9);

 VAR_10->buf = FUNC_2(&VAR_8->dev, VAR_1, VAR_3);
 if (!VAR_10->buf) {
  VAR_13 = -VAR_2;
  goto exit_free_master;
 }

 VAR_10->master = VAR_9;
 VAR_10->master->dev.of_node = VAR_12->of_node;
 VAR_10->pdev = VAR_8;
 VAR_10->port = VAR_11->port;

 VAR_10->cs = 0xff;
 VAR_10->mode = 0xff;


 VAR_13 = FUNC_5(VAR_10, 0);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "Failed to disable SPI module\n");
  goto exit_free_master;
 }

 VAR_13 = FUNC_6(VAR_10, &VAR_9->num_chipselect);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "Failed to get number of CS pins\n");
  goto exit_free_master;
 }

 VAR_13 = FUNC_7(VAR_10,
           &VAR_9->min_speed_hz,
           &VAR_9->max_speed_hz);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "Failed to read bus min/max freqs\n");
  goto exit_free_master;
 }

 VAR_13 = FUNC_8(VAR_10,
       &VAR_9->bits_per_word_mask);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "Failed to read supported frame sizes\n");
  goto exit_free_master;
 }

 VAR_13 = FUNC_4(VAR_10, 1);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "Failed to enable CS pins\n");
  goto exit_free_master;
 }

 VAR_9->bus_num = -1;
 VAR_9->mode_bits = VAR_5 | VAR_4;
 VAR_9->prepare_message = VAR_6;
 VAR_9->transfer_one = VAR_7;
 VAR_9->auto_runtime_pm = 1;


 VAR_13 = FUNC_5(VAR_10, 1);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "Failed to enable SPI module\n");
  goto exit_free_master;
 }

 FUNC_13(&VAR_8->dev,
      VAR_0);
 FUNC_15(&VAR_8->dev);
 FUNC_12(&VAR_8->dev);
 FUNC_11(&VAR_8->dev);

 VAR_13 = FUNC_3(&VAR_8->dev, VAR_9);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "Failed to register master\n");
  goto exit_register;
 }

 return VAR_13;

exit_register:
 FUNC_10(&VAR_8->dev);
 FUNC_14(&VAR_8->dev);

 if (FUNC_5(VAR_10, 0) < 0)
  FUNC_0(&VAR_8->dev, "Failed to disable SPI module\n");
exit_free_master:
 FUNC_18(VAR_9);

 return VAR_13;
}
