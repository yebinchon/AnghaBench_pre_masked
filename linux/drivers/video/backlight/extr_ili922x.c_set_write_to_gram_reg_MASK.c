
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {unsigned char* tx_buf; int cs_change; int bits_per_word; int len; int * rx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;
 int FUNC_4 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static void FUNC_5(struct spi_device *VAR_5)
{
 struct spi_message VAR_6;
 struct spi_transfer VAR_7;
 unsigned char VAR_8[VAR_0];

 FUNC_1(&VAR_7, 0, sizeof(struct spi_transfer));

 FUNC_3(&VAR_6);
 VAR_7.tx_buf = VAR_8;
 VAR_7.rx_buf = ((void*)0);
 VAR_7.cs_change = 1;

 VAR_8[0] = FUNC_0(VAR_4, VAR_2, VAR_3);
 VAR_8[1] = 0;
 VAR_8[2] = VAR_1;

 VAR_7.bits_per_word = 8;
 VAR_7.len = 3;
 FUNC_2(&VAR_7, &VAR_6);
 FUNC_4(VAR_5, &VAR_6);
}
