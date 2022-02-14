
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct spi_transfer {int len; int* tx_buf; int cs_change; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0, int VAR_1, uint8_t VAR_2)
{
 u8 VAR_3[1];
 struct spi_message VAR_4;
 struct spi_transfer VAR_5 = {
  .len = 1,
  .cs_change = 0,
  .tx_buf = VAR_3,
 };

 VAR_3[0] = ((VAR_1 & 0x07) << 5) | (VAR_2 & 0x1f);
 FUNC_1(&VAR_4);
 FUNC_0(&VAR_5, &VAR_4);

 return FUNC_2(VAR_0, &VAR_4);
}
