
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ad9832_state {int avdd; int dvdd; int mclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ad9832_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 struct iio_dev* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct ad9832_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_0(VAR_2->mclk);
 FUNC_3(VAR_2->dvdd);
 FUNC_3(VAR_2->avdd);

 return 0;
}
