
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_transfer {int len; int cs_change; int* tx_buf; } ;
struct spi_message {int dummy; } ;
struct ltv350qv {int* buffer; int spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct ltv350qv *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct spi_message VAR_5;
 struct spi_transfer VAR_6 = {
  .len = 3,
  .cs_change = 1,
 };
 struct spi_transfer VAR_7 = {
  .len = 3,
 };

 FUNC_1(&VAR_5);


 VAR_2->buffer[0] = VAR_1;
 VAR_2->buffer[1] = 0x00;
 VAR_2->buffer[2] = VAR_3 & 0x7f;
 VAR_6.tx_buf = VAR_2->buffer;
 FUNC_0(&VAR_6, &VAR_5);


 VAR_2->buffer[4] = VAR_0;
 VAR_2->buffer[5] = VAR_4 >> 8;
 VAR_2->buffer[6] = VAR_4;
 VAR_7.tx_buf = VAR_2->buffer + 4;
 FUNC_0(&VAR_7, &VAR_5);

 return FUNC_2(VAR_2->spi, &VAR_5);
}
