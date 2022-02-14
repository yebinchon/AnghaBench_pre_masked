
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_transfer {int len; int cs_change; int* tx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0, u8 VAR_1, u16 VAR_2)
{
 struct spi_message VAR_3;
 struct spi_transfer VAR_4 = {
  .len = 3,
  .cs_change = 1,
 };
 struct spi_transfer VAR_5 = {
  .len = 3,
 };
 u8 VAR_6[16];

 FUNC_1(&VAR_3);


 VAR_6[0] = 0x70;
 VAR_6[1] = 0x00;
 VAR_6[2] = VAR_1 & 0x7f;
 VAR_4.tx_buf = VAR_6;
 FUNC_0(&VAR_4, &VAR_3);


 VAR_6[4] = 0x72;
 VAR_6[5] = VAR_2 >> 8;
 VAR_6[6] = VAR_2;
 VAR_5.tx_buf = VAR_6 + 4;
 FUNC_0(&VAR_5, &VAR_3);

 return FUNC_2(VAR_0, &VAR_3);
}
