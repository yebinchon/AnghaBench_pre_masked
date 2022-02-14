
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {unsigned char* tx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
typedef int command ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2)
{
 struct spi_transfer VAR_3 = {};
 struct spi_message VAR_4;
 unsigned char VAR_5[2];

 FUNC_1(&VAR_4);

 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_1;

 VAR_3.tx_buf = VAR_5;
 VAR_3.len = sizeof(VAR_5);
 FUNC_0(&VAR_3, &VAR_4);

 return FUNC_2(VAR_2, &VAR_4);
}
