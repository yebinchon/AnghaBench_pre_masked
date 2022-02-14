
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int of_node; } ;
struct spi_device {int mode; int max_speed_hz; TYPE_2__ dev; int controller; } ;
struct fsl_dspi_platform_data {int sck_cs_delay; int cs_sck_delay; } ;
struct fsl_dspi {int ctlr; int clk; TYPE_1__* pdev; } ;
struct chip_data {int ctar_val; scalar_t__ void_write_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned char) ;
 int VAR_6 ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (unsigned char) ;
 int VAR_7 ;
 unsigned long FUNC_6 (int ) ;
 struct fsl_dspi_platform_data* FUNC_7 (int *) ;
 int FUNC_8 (unsigned char*,unsigned char*,int ,unsigned long) ;
 struct chip_data* FUNC_9 (int,int ) ;
 int FUNC_10 (unsigned char*,unsigned char*,int ,unsigned long) ;
 int FUNC_11 (int ,char*,int *) ;
 struct fsl_dspi* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct chip_data* FUNC_14 (struct spi_device*) ;
 int FUNC_15 (struct spi_device*,struct chip_data*) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_8)
{
 struct fsl_dspi *VAR_9 = FUNC_12(VAR_8->controller);
 unsigned char VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 u32 VAR_14 = 0, VAR_15 = 0;
 struct fsl_dspi_platform_data *VAR_16;
 unsigned char VAR_17 = 0, VAR_18 = 0;
 struct chip_data *VAR_19;
 unsigned long VAR_20;


 VAR_19 = FUNC_14(VAR_8);
 if (VAR_19 == ((void*)0)) {
  VAR_19 = FUNC_9(sizeof(struct chip_data), VAR_1);
  if (!VAR_19)
   return -VAR_0;
 }

 VAR_16 = FUNC_7(&VAR_9->pdev->dev);

 if (!VAR_16) {
  FUNC_11(VAR_8->dev.of_node, "fsl,spi-cs-sck-delay",
         &VAR_14);

  FUNC_11(VAR_8->dev.of_node, "fsl,spi-sck-cs-delay",
         &VAR_15);
 } else {
  VAR_14 = VAR_16->cs_sck_delay;
  VAR_15 = VAR_16->sck_cs_delay;
 }

 VAR_19->void_write_data = 0;

 VAR_20 = FUNC_6(VAR_9->clk);
 FUNC_8(&VAR_11, &VAR_10, VAR_8->max_speed_hz, VAR_20);


 FUNC_10(&VAR_12, &VAR_13, VAR_14, VAR_20);


 FUNC_10(&VAR_17, &VAR_18, VAR_15, VAR_20);

 VAR_19->ctar_val = 0;
 if (VAR_8->mode & VAR_3)
  VAR_19->ctar_val |= VAR_5;
 if (VAR_8->mode & VAR_2)
  VAR_19->ctar_val |= VAR_4;

 if (!FUNC_13(VAR_9->ctlr)) {
  VAR_19->ctar_val |= FUNC_5(VAR_12) |
      FUNC_2(VAR_13) |
      FUNC_3(VAR_17) |
      FUNC_0(VAR_18) |
      FUNC_4(VAR_11) |
      FUNC_1(VAR_10);

  if (VAR_8->mode & VAR_7)
   VAR_19->ctar_val |= VAR_6;
 }

 FUNC_15(VAR_8, VAR_19);

 return 0;
}
