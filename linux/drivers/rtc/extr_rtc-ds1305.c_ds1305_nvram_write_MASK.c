
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct spi_transfer {int dummy; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
struct ds1305 {struct spi_device* spi; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct spi_message*,struct spi_transfer*,unsigned int*,size_t,void*,int *) ;
 int FUNC_1 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, unsigned int VAR_3, void *VAR_4,
         size_t VAR_5)
{
 struct ds1305 *VAR_6 = VAR_2;
 struct spi_device *VAR_7 = VAR_6->spi;
 u8 VAR_8;
 struct spi_message VAR_9;
 struct spi_transfer VAR_10[2];

 VAR_8 = (VAR_1 | VAR_0) + VAR_3;
 FUNC_0(&VAR_9, VAR_10, &VAR_8, VAR_5, VAR_4, ((void*)0));

 return FUNC_1(VAR_7, &VAR_9);
}
