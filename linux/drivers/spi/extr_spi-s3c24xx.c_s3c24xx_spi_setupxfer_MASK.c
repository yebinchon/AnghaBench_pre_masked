
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int dummy; } ;
struct spi_device {struct s3c24xx_spi_devstate* controller_state; } ;
struct s3c24xx_spi_devstate {int sppre; } ;
struct s3c24xx_spi {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct spi_device*,struct spi_transfer*) ;
 struct s3c24xx_spi* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1,
     struct spi_transfer *VAR_2)
{
 struct s3c24xx_spi_devstate *VAR_3 = VAR_1->controller_state;
 struct s3c24xx_spi *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5)
  FUNC_2(VAR_3->sppre, VAR_4->regs + VAR_0);

 return VAR_5;
}
