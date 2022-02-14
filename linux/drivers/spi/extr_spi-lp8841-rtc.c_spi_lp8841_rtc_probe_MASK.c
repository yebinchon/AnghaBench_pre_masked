
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct spi_master {int mode_bits; int num_chipselect; TYPE_1__ dev; int bits_per_word_mask; int transfer_one; int set_cs; int setup; int bus_num; int flags; } ;
struct spi_lp8841_rtc {int iomem; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (TYPE_2__*,struct spi_master*) ;
 int FUNC_5 (struct platform_device*,struct spi_master*) ;
 struct spi_master* FUNC_6 (TYPE_2__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct spi_lp8841_rtc* FUNC_7 (struct spi_master*) ;
 int FUNC_8 (struct spi_master*) ;

__attribute__((used)) static int
FUNC_9(struct platform_device *VAR_8)
{
 int VAR_9;
 struct spi_master *VAR_10;
 struct spi_lp8841_rtc *VAR_11;

 VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_0;
 FUNC_5(VAR_8, VAR_10);

 VAR_10->flags = VAR_4;
 VAR_10->mode_bits = VAR_2 | VAR_1 | VAR_3;

 VAR_10->bus_num = VAR_8->id;
 VAR_10->num_chipselect = 1;
 VAR_10->setup = VAR_6;
 VAR_10->set_cs = VAR_5;
 VAR_10->transfer_one = VAR_7;
 VAR_10->bits_per_word_mask = FUNC_1(8);




 VAR_11 = FUNC_7(VAR_10);

 VAR_11->iomem = FUNC_3(VAR_8, 0);
 VAR_9 = FUNC_0(VAR_11->iomem);
 if (VAR_9) {
  FUNC_2(&VAR_8->dev, "failed to get IO address\n");
  goto err_put_master;
 }


 VAR_9 = FUNC_4(&VAR_8->dev, VAR_10);
 if (VAR_9) {
  FUNC_2(&VAR_8->dev, "cannot register spi master\n");
  goto err_put_master;
 }

 return VAR_9;


err_put_master:
 FUNC_8(VAR_10);

 return VAR_9;
}
