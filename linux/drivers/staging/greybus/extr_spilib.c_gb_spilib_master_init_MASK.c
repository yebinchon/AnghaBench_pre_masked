
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct spilib_ops {scalar_t__ unprepare_transfer_hardware; scalar_t__ prepare_transfer_hardware; } ;
struct spi_master {int bus_num; scalar_t__ num_chipselect; int auto_runtime_pm; int unprepare_transfer_hardware; int prepare_transfer_hardware; int transfer_one_message; int setup; int cleanup; int bits_per_word_mask; int flags; int mode_bits; } ;
struct gb_spilib {scalar_t__ num_chipselect; int bits_per_word_mask; int flags; int mode; struct spilib_ops* ops; struct device* parent; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct gb_connection*,struct spi_master*) ;
 int VAR_1 ;
 int FUNC_2 (struct gb_spilib*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct gb_spilib*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 struct spi_master* FUNC_4 (struct device*,int) ;
 struct gb_spilib* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (struct spi_master*) ;
 int FUNC_7 (struct spi_master*) ;
 int FUNC_8 (struct spi_master*) ;

int FUNC_9(struct gb_connection *VAR_6, struct device *VAR_7,
     struct spilib_ops *VAR_8)
{
 struct gb_spilib *VAR_9;
 struct spi_master *VAR_10;
 int VAR_11;
 u8 VAR_12;


 VAR_10 = FUNC_4(VAR_7, sizeof(*VAR_9));
 if (!VAR_10) {
  FUNC_0(VAR_7, "cannot alloc SPI master\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_10);
 VAR_9->connection = VAR_6;
 FUNC_1(VAR_6, VAR_10);
 VAR_9->parent = VAR_7;
 VAR_9->ops = VAR_8;


 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11)
  goto exit_spi_put;

 VAR_10->bus_num = -1;
 VAR_10->num_chipselect = VAR_9->num_chipselect;
 VAR_10->mode_bits = VAR_9->mode;
 VAR_10->flags = VAR_9->flags;
 VAR_10->bits_per_word_mask = VAR_9->bits_per_word_mask;


 VAR_10->cleanup = VAR_1;
 VAR_10->setup = VAR_3;
 VAR_10->transfer_one_message = VAR_4;

 if (VAR_8 && VAR_8->prepare_transfer_hardware) {
  VAR_10->prepare_transfer_hardware =
   VAR_2;
 }

 if (VAR_8 && VAR_8->unprepare_transfer_hardware) {
  VAR_10->unprepare_transfer_hardware =
   VAR_5;
 }

 VAR_10->auto_runtime_pm = 1;

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11 < 0)
  goto exit_spi_put;


 for (VAR_12 = 0; VAR_12 < VAR_9->num_chipselect; VAR_12++) {
  VAR_11 = FUNC_3(VAR_9, VAR_12);
  if (VAR_11 < 0) {
   FUNC_0(VAR_7, "failed to allocate spi device %d: %d\n",
    VAR_12, VAR_11);
   goto exit_spi_unregister;
  }
 }

 return 0;

exit_spi_put:
 FUNC_6(VAR_10);

 return VAR_11;

exit_spi_unregister:
 FUNC_8(VAR_10);

 return VAR_11;
}
