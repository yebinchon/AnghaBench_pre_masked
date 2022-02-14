
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct spi_transfer {int dummy; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
struct ds1305 {struct spi_device* spi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct spi_message*,struct spi_transfer*,scalar_t__*,size_t,int *,void*) ;
 int FUNC_1 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, unsigned int VAR_2, void *VAR_3,
        size_t VAR_4)
{
 struct ds1305 *VAR_5 = VAR_1;
 struct spi_device *VAR_6 = VAR_5->spi;
 u8 VAR_7;
 struct spi_message VAR_8;
 struct spi_transfer VAR_9[2];

 VAR_7 = VAR_0 + VAR_2;
 FUNC_0(&VAR_8, VAR_9, &VAR_7, VAR_4, ((void*)0), VAR_3);

 return FUNC_1(VAR_6, &VAR_8);
}
