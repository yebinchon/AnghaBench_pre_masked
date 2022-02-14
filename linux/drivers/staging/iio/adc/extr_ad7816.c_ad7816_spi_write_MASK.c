
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
struct ad7816_chip_info {int rdwr_pin; struct spi_device* spi_dev; } ;
typedef int data ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct spi_device*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ad7816_chip_info *VAR_0, u8 VAR_1)
{
 struct spi_device *VAR_2 = VAR_0->spi_dev;
 int VAR_3;

 FUNC_1(VAR_0->rdwr_pin, 1);
 FUNC_1(VAR_0->rdwr_pin, 0);
 VAR_3 = FUNC_2(VAR_2, &VAR_1, sizeof(VAR_1));
 if (VAR_3 < 0)
  FUNC_0(&VAR_2->dev, "SPI oti data write error\n");

 return VAR_3;
}
