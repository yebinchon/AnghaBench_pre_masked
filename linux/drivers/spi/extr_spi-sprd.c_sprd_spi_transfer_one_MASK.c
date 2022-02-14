
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; } ;
struct spi_device {int dummy; } ;
struct spi_controller {scalar_t__ (* can_dma ) (struct spi_controller*,struct spi_device*,struct spi_transfer*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct spi_controller*) ;
 int FUNC_1 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_3 (struct spi_device*,struct spi_transfer*) ;
 scalar_t__ FUNC_4 (struct spi_controller*,struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_5(struct spi_controller *VAR_1,
     struct spi_device *VAR_2,
     struct spi_transfer *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  goto setup_err;

 if (VAR_1->can_dma(VAR_1, VAR_2, VAR_3))
  VAR_4 = FUNC_1(VAR_2, VAR_3);
 else
  VAR_4 = FUNC_3(VAR_2, VAR_3);

 if (VAR_4 == VAR_3->len)
  VAR_4 = 0;
 else if (VAR_4 >= 0)
  VAR_4 = -VAR_0;

setup_err:
 FUNC_0(VAR_1);

 return VAR_4;
}
