
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;
struct lantiq_ssc_spi {int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lantiq_ssc_spi*,int ,int,int ) ;
 struct lantiq_ssc_spi* FUNC_2 (struct spi_master*) ;

__attribute__((used)) static int FUNC_3(struct spi_master *VAR_3,
     struct spi_message *VAR_4)
{
 struct lantiq_ssc_spi *VAR_5 = FUNC_2(VAR_3);

 FUNC_0(VAR_5->wq);


 FUNC_1(VAR_5, 0, VAR_2 | VAR_1,
    VAR_0);

 return 0;
}
