
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ of_node; } ;
struct spi_device {int chip_select; int max_speed_hz; TYPE_3__ dev; int cs_gpio; struct s3c64xx_spi_csinfo* controller_data; int master; } ;
struct s3c64xx_spi_driver_data {TYPE_2__* pdev; int src_clk; TYPE_1__* port_conf; } ;
struct s3c64xx_spi_csinfo {int line; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int clk_from_cmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct s3c64xx_spi_csinfo*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,char*,int,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct s3c64xx_spi_csinfo*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct s3c64xx_spi_csinfo* FUNC_11 (struct spi_device*) ;
 int FUNC_12 (struct spi_device*,int) ;
 int FUNC_13 (struct spi_device*) ;
 struct s3c64xx_spi_driver_data* FUNC_14 (int ) ;
 int FUNC_15 (struct spi_device*,struct s3c64xx_spi_csinfo*) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_4)
{
 struct s3c64xx_spi_csinfo *VAR_5 = VAR_4->controller_data;
 struct s3c64xx_spi_driver_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_14(VAR_4->master);
 if (VAR_4->dev.of_node) {
  VAR_5 = FUNC_11(VAR_4);
  VAR_4->controller_data = VAR_5;
 } else if (VAR_5) {





  VAR_4->cs_gpio = VAR_5->line;
 }

 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_4->dev, "No CS for SPI(%d)\n", VAR_4->chip_select);
  return -VAR_1;
 }

 if (!FUNC_13(VAR_4)) {
  if (FUNC_5(VAR_4->cs_gpio)) {
   VAR_7 = FUNC_6(VAR_4->cs_gpio, VAR_2,
            FUNC_3(&VAR_4->dev));
   if (VAR_7) {
    FUNC_2(&VAR_4->dev,
     "Failed to get /CS gpio [%d]: %d\n",
     VAR_4->cs_gpio, VAR_7);
    goto err_gpio_req;
   }
  }

  FUNC_15(VAR_4, VAR_5);
 }

 FUNC_8(&VAR_6->pdev->dev);


 if (!VAR_6->port_conf->clk_from_cmu) {
  u32 VAR_8, VAR_9;


  VAR_9 = FUNC_1(VAR_6->src_clk) / 2 / (0 + 1);

  if (VAR_4->max_speed_hz > VAR_9)
   VAR_4->max_speed_hz = VAR_9;

  VAR_8 = FUNC_1(VAR_6->src_clk) / 2 / VAR_4->max_speed_hz - 1;
  VAR_8 &= VAR_3;
  if (VAR_8 == VAR_3)
   VAR_8--;

  VAR_9 = FUNC_1(VAR_6->src_clk) / 2 / (VAR_8 + 1);
  if (VAR_4->max_speed_hz < VAR_9) {
   if (VAR_8+1 < VAR_3) {
    VAR_8++;
   } else {
    VAR_7 = -VAR_0;
    goto setup_exit;
   }
  }

  VAR_9 = FUNC_1(VAR_6->src_clk) / 2 / (VAR_8 + 1);
  if (VAR_4->max_speed_hz >= VAR_9) {
   VAR_4->max_speed_hz = VAR_9;
  } else {
   FUNC_2(&VAR_4->dev, "Can't set %dHz transfer speed\n",
    VAR_4->max_speed_hz);
   VAR_7 = -VAR_0;
   goto setup_exit;
  }
 }

 FUNC_9(&VAR_6->pdev->dev);
 FUNC_10(&VAR_6->pdev->dev);
 FUNC_12(VAR_4, 0);

 return 0;

setup_exit:
 FUNC_9(&VAR_6->pdev->dev);
 FUNC_10(&VAR_6->pdev->dev);

 FUNC_12(VAR_4, 0);

 if (FUNC_5(VAR_4->cs_gpio))
  FUNC_4(VAR_4->cs_gpio);
 FUNC_15(VAR_4, ((void*)0));

err_gpio_req:
 if (VAR_4->dev.of_node)
  FUNC_7(VAR_5);

 return VAR_7;
}
