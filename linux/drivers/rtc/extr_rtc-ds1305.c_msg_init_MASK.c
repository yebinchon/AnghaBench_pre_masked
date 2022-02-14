
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct spi_transfer {char* tx_buf; int len; char* rx_buf; } ;
struct spi_message {int dummy; } ;


 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;

__attribute__((used)) static void FUNC_3(struct spi_message *VAR_0, struct spi_transfer *VAR_1,
  u8 *VAR_2, size_t VAR_3, char *VAR_4, char *VAR_5)
{
 FUNC_2(VAR_0);
 FUNC_0(VAR_1, 0, 2 * sizeof(*VAR_1));

 VAR_1->tx_buf = VAR_2;
 VAR_1->len = 1;
 FUNC_1(VAR_1, VAR_0);

 VAR_1++;

 VAR_1->tx_buf = VAR_4;
 VAR_1->rx_buf = VAR_5;
 VAR_1->len = VAR_3;
 FUNC_1(VAR_1, VAR_0);
}
