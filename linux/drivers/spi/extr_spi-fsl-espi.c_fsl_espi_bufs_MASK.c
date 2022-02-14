
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {unsigned int len; scalar_t__ rx_nbits; } ;
struct spi_device {int chip_select; int master; } ;
struct fsl_espi {unsigned int rxskip; int dev; int done; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct fsl_espi*,int ) ;
 int FUNC_5 (struct fsl_espi*,int ,int ) ;
 int FUNC_6 (int *) ;
 struct fsl_espi* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_9, struct spi_transfer *VAR_10)
{
 struct fsl_espi *VAR_11 = FUNC_7(VAR_9->master);
 unsigned int VAR_12 = VAR_10->len;
 u32 VAR_13, VAR_14;
 int VAR_15;

 FUNC_6(&VAR_11->done);


 VAR_14 = FUNC_0(VAR_9->chip_select);
 VAR_14 |= FUNC_2(VAR_10->len - 1);


 if (VAR_11->rxskip) {
  VAR_14 |= FUNC_1(VAR_11->rxskip);
  VAR_12 = VAR_10->len - VAR_11->rxskip;
  if (VAR_10->rx_nbits == VAR_8)
   VAR_14 |= VAR_5;
 }

 FUNC_5(VAR_11, VAR_0, VAR_14);


 VAR_13 = VAR_6;
 if (VAR_12 > VAR_3)
  VAR_13 |= VAR_7;
 FUNC_5(VAR_11, VAR_1, VAR_13);


 FUNC_8(&VAR_11->lock);
 FUNC_4(VAR_11, 0);
 FUNC_9(&VAR_11->lock);


 VAR_15 = FUNC_10(&VAR_11->done, 2 * VAR_4);
 if (VAR_15 == 0)
  FUNC_3(VAR_11->dev, "Transfer timed out!\n");


 FUNC_5(VAR_11, VAR_1, 0);

 return VAR_15 == 0 ? -VAR_2 : 0;
}
