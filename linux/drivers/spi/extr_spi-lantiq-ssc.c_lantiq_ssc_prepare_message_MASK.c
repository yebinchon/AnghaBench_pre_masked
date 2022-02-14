
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_message {TYPE_1__* spi; } ;
struct spi_master {int dummy; } ;
struct lantiq_ssc_spi {int dummy; } ;
struct TYPE_2__ {int mode; } ;


 int FUNC_0 (struct lantiq_ssc_spi*) ;
 int FUNC_1 (struct lantiq_ssc_spi*) ;
 int FUNC_2 (struct lantiq_ssc_spi*,int ) ;
 struct lantiq_ssc_spi* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_0,
          struct spi_message *VAR_1)
{
 struct lantiq_ssc_spi *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2, VAR_1->spi->mode);
 FUNC_0(VAR_2);

 return 0;
}
