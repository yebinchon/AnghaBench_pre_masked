
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst25l_flash {int spi; } ;
struct spi_transfer {unsigned char* tx_buf; unsigned char* rx_buf; int len; } ;
struct spi_message {int dummy; } ;
typedef int cmd_resp ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct sst25l_flash *VAR_1, int *VAR_2)
{
 struct spi_message VAR_3;
 struct spi_transfer VAR_4;
 unsigned char VAR_5[2];
 int VAR_6;

 FUNC_2(&VAR_3);
 FUNC_0(&VAR_4, 0, sizeof(struct spi_transfer));

 VAR_5[0] = VAR_0;
 VAR_5[1] = 0xff;
 VAR_4.tx_buf = VAR_5;
 VAR_4.rx_buf = VAR_5;
 VAR_4.len = sizeof(VAR_5);
 FUNC_1(&VAR_4, &VAR_3);
 VAR_6 = FUNC_3(VAR_1->spi, &VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_2 = VAR_5[1];
 return 0;
}
