
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct spi_device {struct s3c64xx_spi_csinfo* controller_data; } ;
struct s3c64xx_spi_driver_data {scalar_t__ regs; } ;
struct s3c64xx_spi_csinfo {int fb_delay; } ;


 scalar_t__ VAR_0 ;
 struct s3c64xx_spi_driver_data* FUNC_0 (struct spi_master*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_1,
           struct spi_message *VAR_2)
{
 struct s3c64xx_spi_driver_data *VAR_3 = FUNC_0(VAR_1);
 struct spi_device *VAR_4 = VAR_2->spi;
 struct s3c64xx_spi_csinfo *VAR_5 = VAR_4->controller_data;


 FUNC_1(VAR_5->fb_delay & 0x3, VAR_3->regs + VAR_0);

 return 0;
}
