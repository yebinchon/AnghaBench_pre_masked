
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_xcomm {struct i2c_client* i2c; } ;
struct TYPE_4__ {int of_node; } ;
struct spi_master {int num_chipselect; int mode_bits; TYPE_1__ dev; int transfer_one_message; int flags; int bits_per_word_mask; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,struct spi_master*) ;
 int FUNC_2 (struct i2c_client*,struct spi_master*) ;
 struct spi_master* FUNC_3 (TYPE_2__*,int) ;
 struct spi_xcomm* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (struct spi_master*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
 const struct i2c_device_id *VAR_7)
{
 struct spi_xcomm *VAR_8;
 struct spi_master *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_9);
 VAR_8->i2c = VAR_6;

 VAR_9->num_chipselect = 16;
 VAR_9->mode_bits = VAR_2 | VAR_3 | VAR_1;
 VAR_9->bits_per_word_mask = FUNC_0(8);
 VAR_9->flags = VAR_4;
 VAR_9->transfer_one_message = VAR_5;
 VAR_9->dev.of_node = VAR_6->dev.of_node;
 FUNC_2(VAR_6, VAR_9);

 VAR_10 = FUNC_1(&VAR_6->dev, VAR_9);
 if (VAR_10 < 0)
  FUNC_5(VAR_9);

 return VAR_10;
}
