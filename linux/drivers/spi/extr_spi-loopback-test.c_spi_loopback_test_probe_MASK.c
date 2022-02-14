
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct spi_device*) ;
 int FUNC_3 (struct spi_device*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_5)
{
 int VAR_6;

 if (VAR_2 || VAR_3) {
  VAR_5->mode |= VAR_2 ? VAR_0 : 0;
  VAR_5->mode |= VAR_3 ? VAR_1 : 0;
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6) {
   FUNC_0(&VAR_5->dev, "SPI setup with SPI_LOOP or SPI_NO_CS failed (%d)\n",
    VAR_6);
   return VAR_6;
  }
 }

 FUNC_1(&VAR_5->dev, "Executing spi-loopback-tests\n");

 VAR_6 = FUNC_3(VAR_5, VAR_4);

 FUNC_1(&VAR_5->dev, "Finished spi-loopback-tests with return: %i\n",
   VAR_6);

 return VAR_6;
}
